#pragma once
#include <vector>
#include <string>
#include <stdexcept>
#include <openssl/aes.h>
#include <openssl/evp.h>
#include <openssl/rsa.h>
#include <openssl/pem.h>
#include <openssl/rand.h>

class FCipher {
public:
    static constexpr uint8_t start_key[] = "key_abcdefghijkl";
    static constexpr uint8_t start_iv[]  = "iv_abcdefghijklm";
    FCipher() {
        key_.assign(start_key, start_key+16);
        iv_.assign(start_iv, start_iv+16);
    }

    void new_aes_cipher(const std::vector<uint8_t>& key, const std::vector<uint8_t>& iv) {
        key_ = key;
        iv_ = iv;
    }

    std::vector<uint8_t> encrypt(const std::vector<uint8_t>& data) {

        EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
        EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), nullptr, key_.data(), iv_.data());

        std::vector<uint8_t> out(data.size() + AES_BLOCK_SIZE);
        int out_len1 = 0;
        int out_len2 = 0;
        EVP_EncryptUpdate(ctx, out.data(), &out_len1, data.data(), (int)data.size());
        EVP_EncryptFinal_ex(ctx, out.data() + out_len1, &out_len2);
        EVP_CIPHER_CTX_free(ctx);
        out.resize(out_len1 + out_len2);
        return out;
    }

    std::vector<uint8_t> decrypt(const std::vector<uint8_t>& data) {
        EVP_CIPHER_CTX* ctx = EVP_CIPHER_CTX_new();
        EVP_DecryptInit_ex(ctx, EVP_aes_128_cbc(), nullptr, key_.data(), iv_.data());

        std::vector<uint8_t> out(data.size() + AES_BLOCK_SIZE);
        int out_len1 = 0, out_len2 = 0;

        EVP_DecryptUpdate(ctx, out.data(), &out_len1, data.data(), (int)data.size());
        EVP_DecryptFinal_ex(ctx, out.data() + out_len1, &out_len2);
        EVP_CIPHER_CTX_free(ctx);

        out.resize(out_len1 + out_len2);
        return out;
    }

    const std::vector<uint8_t>& key() const { return key_; }
    const std::vector<uint8_t>& iv()  const { return iv_;  }

private:
    std::vector<uint8_t> key_;
    std::vector<uint8_t> iv_;
};

class RSAKeyPair {
public:
    RSAKeyPair() {
        EVP_PKEY_CTX* ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, nullptr);
        EVP_PKEY_keygen_init(ctx);
        EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, 1024);
        EVP_PKEY_keygen(ctx, &pkey_);
        EVP_PKEY_CTX_free(ctx);

        const RSA* rsa = EVP_PKEY_get0_RSA(pkey_);
        const BIGNUM *n, *e;
        RSA_get0_key(rsa, &n, &e, nullptr);

        n_.resize(128);
        e_.resize(3);
        BN_bn2binpad(n, n_.data(), 128);
        BN_bn2binpad(e, e_.data(), 3);
    }

    ~RSAKeyPair() {
        if (pkey_) EVP_PKEY_free(pkey_);
    }

    std::vector<uint8_t> decrypt(const std::vector<uint8_t>& ciphertext) {
        EVP_PKEY_CTX* ctx = EVP_PKEY_CTX_new(pkey_, nullptr);
        EVP_PKEY_decrypt_init(ctx);
        EVP_PKEY_CTX_set_rsa_padding(ctx, RSA_PKCS1_PADDING);

        size_t out_len = 0;
        EVP_PKEY_decrypt(ctx, nullptr, &out_len, ciphertext.data(), ciphertext.size());

        std::vector<uint8_t> out(out_len);
        EVP_PKEY_decrypt(ctx, out.data(), &out_len, ciphertext.data(), ciphertext.size());
        EVP_PKEY_CTX_free(ctx);

        out.resize(out_len);
        return out;
    }

    const std::vector<uint8_t>& n() const { return n_; }
    const std::vector<uint8_t>& e() const { return e_; }

private:
    EVP_PKEY* pkey_ = nullptr;
    std::vector<uint8_t> n_;
    std::vector<uint8_t> e_;
};
