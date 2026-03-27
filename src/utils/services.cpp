#include "services.hpp"
#include "../client.hpp"

Services::Services(FopzoClient* owner) : GameServerRemoteService(owner), TournamentsRemoteService(owner), FacebookAuthRemoteService(owner), ClanMemberStatsRemoteService(owner), GoogleAuthRemoteService(owner), GameServerInAppRemoteService(owner), AppGalleryInAppRemoteService(owner), GameServerStatsRemoteService(owner), GdprRemoteService(owner), IdTokenRemoteService(owner), ContentCreatorRemoteService(owner), BoltRemoteService(owner), GameServerGameEventRemoteService(owner), GSClanStatsRemoteService(owner), TestAuthRemoteService(owner), HuaweiAuthRemoteService(owner), InventoryRemoteService(owner), InAppRemoteService(owner), GroupRemoteService(owner), GameSettingsRemoteService(owner), OffersRemoteService(owner), MatchmakingRemoteService(owner), MarketplaceRemoteService(owner), SystemMessagesRemoteService(owner), PlayerRemoteService(owner), MatchesRemoteService(owner), StorageRemoteService(owner), ClanMessagesRemoteService(owner), AvatarRemoteService(owner), GameServerInventoryRemoteService(owner), GameServerPlayerRemoteService(owner), ClanStatsRemoteService(owner), UgcRemoteService(owner), AchievementRemoteService(owner), GameAnnouncementRemoteService(owner), BoltIdAuthRemoteService(owner), AccountLinkRemoteService(owner), ReferralRemoteService(owner), TwitchAuthRemoteService(owner), DlcRemoteService(owner), RentMarketRemoteService(owner), HandshakeRemoteService(owner), GameSeasonRemoteService(owner), FriendsRemoteService(owner), GSMatchesRemoteService(owner), AppleIdAuthRemoteService(owner), GuestAuthRemoteService(owner), LeaderboardRemoteService(owner), GameEventRemoteService(owner), GlobalChatRemoteService(owner), GameServerAchievementRemoteService(owner), PlayerStatsRemoteService(owner), VkAuthRemoteService(owner), ChatRemoteService(owner), SeasonalStatsRemoteService(owner), GetAppsInAppRemoteService(owner), RateGameRemoteService(owner), GoogleInAppRemoteService(owner), ClanRemoteService(owner), NewsFeedRemoteService(owner), GameServerAccusationRemoteService(owner), GameCenterAuthRemoteService(owner), AppStoreInAppRemoteService(owner) {}

std::unique_ptr<Fopzo::Generated::FacebookAuthResponse> Services::FacebookAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::FacebookAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(375, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::FacebookAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::FacebookUnLinkAuthResponse> Services::FacebookAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::FacebookUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(377, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::FacebookUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::FacebookLinkAuthResponse> Services::FacebookAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::FacebookLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(376, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::FacebookLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GoogleAuthResponse> Services::GoogleAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::GoogleAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(315, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GoogleAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GoogleLinkAuthResponse> Services::GoogleAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::GoogleLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(316, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GoogleLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GoogleUnLinkAuthResponse> Services::GoogleAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::GoogleUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(317, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GoogleUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AppGalleryBuyInappResponse> Services::AppGalleryInAppRemoteServiceStruct::buyInAppRequest(const Fopzo::Generated::AppGalleryBuyInappRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(395, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AppGalleryBuyInappResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateRequestEncryptedResponse> Services::GdprRemoteServiceStruct::createRequestEncryptedRequest(const Fopzo::Generated::CreateRequestEncryptedRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(407, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateRequestEncryptedResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeleteAccountResponse> Services::GdprRemoteServiceStruct::deleteAccountRequest(const Fopzo::Generated::DeleteAccountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(406, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeleteAccountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RecoverAccountResponse> Services::GdprRemoteServiceStruct::recoverAccountRequest(const Fopzo::Generated::RecoverAccountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(405, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RecoverAccountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetIdTokenResponse> Services::IdTokenRemoteServiceStruct::getIdTokenRequest(const Fopzo::Generated::GetIdTokenRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(385, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetIdTokenResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::UnsubscribeCreatorResponse> Services::ContentCreatorRemoteServiceStruct::unsubscribeCreatorRequest(const Fopzo::Generated::UnsubscribeCreatorRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(293, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::UnsubscribeCreatorResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::FindCreatorResponse> Services::ContentCreatorRemoteServiceStruct::findCreatorRequest(const Fopzo::Generated::FindCreatorRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(292, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::FindCreatorResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetSubscribedCreatorResponse> Services::ContentCreatorRemoteServiceStruct::findCreatorSubscriptionRequest(const Fopzo::Generated::GetSubscribedCreatorRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(290, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetSubscribedCreatorResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SubscribeCreatorResponse> Services::ContentCreatorRemoteServiceStruct::subscribeCreatorRequest(const Fopzo::Generated::SubscribeCreatorRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(291, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SubscribeCreatorResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SubscribeResponse> Services::BoltRemoteServiceStruct::subscribe2Request(const Fopzo::Generated::SubscribeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(41, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SubscribeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::UnsubscribeResponse> Services::BoltRemoteServiceStruct::unsubscribe2Request(const Fopzo::Generated::UnsubscribeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(42, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::UnsubscribeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::TestAuthResponse> Services::TestAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::TestAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(410, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::TestAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::HuaweiUnLinkAuthResponse> Services::HuaweiAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::HuaweiUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(367, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::HuaweiUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::HuaweiLinkAuthResponse> Services::HuaweiAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::HuaweiLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(366, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::HuaweiLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::HuaweiAuthResponse> Services::HuaweiAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::HuaweiAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(365, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::HuaweiAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetAllOtherPlayerPublicItemsResponse> Services::InventoryRemoteServiceStruct::getOtherPlayerPublicItemsEncryptedRequest(const Fopzo::Generated::GetAllOtherPlayerPublicItemsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(61, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetAllOtherPlayerPublicItemsResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ActivateCouponResponse> Services::InventoryRemoteServiceStruct::activateCouponEncryptedRequest(const Fopzo::Generated::ActivateCouponRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(60, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ActivateCouponResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetInventoryItemPublicityResponse> Services::InventoryRemoteServiceStruct::setInventoryItemPublicityRequest(const Fopzo::Generated::SetInventoryItemPublicityRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(63, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetInventoryItemPublicityResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ExecuteRecipeEncrypted2Response> Services::InventoryRemoteServiceStruct::executeRecipeEncrypted2Request(const Fopzo::Generated::ExecuteRecipeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(56, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ExecuteRecipeEncrypted2Response>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetInventoryItemFlagsResponse> Services::InventoryRemoteServiceStruct::setInventoryItemFlagsEncryptedRequest(const Fopzo::Generated::SetInventoryItemFlagsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(52, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetInventoryItemFlagsResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerInventoryResponse> Services::InventoryRemoteServiceStruct::getPlayerInventoryEncryptedRequest(const Fopzo::Generated::GetPlayerInventoryRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(53, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerInventoryResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::UnmountInventoryItemResponse> Services::InventoryRemoteServiceStruct::unmountInventoryItemEncryptedRequest(const Fopzo::Generated::UnmountInventoryItemRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(59, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::UnmountInventoryItemResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetInventoryItemDefinitionsResponse> Services::InventoryRemoteServiceStruct::getInventoryItemDefinitionsEncryptedRequest(const Fopzo::Generated::GetInventoryItemDefinitionsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(54, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetInventoryItemDefinitionsResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::MountInventoryItemResponse> Services::InventoryRemoteServiceStruct::mountInventoryItemEncryptedRequest(const Fopzo::Generated::MountInventoryItemRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(58, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::MountInventoryItemResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRecipeInfoResponse> Services::InventoryRemoteServiceStruct::getRecipeInfoRequest(const Fopzo::Generated::GetRecipeInfoRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(62, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRecipeInfoResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetItemsModificationsResponse> Services::InventoryRemoteServiceStruct::setInventoryItemsPropertiesEncryptedRequest(const Fopzo::Generated::SetItemsModificationsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(51, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetItemsModificationsResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::BuyInventoryItemResponse> Services::InventoryRemoteServiceStruct::buyInventoryItemEncryptedRequest(const Fopzo::Generated::BuyInventoryItemRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(57, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::BuyInventoryItemResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetInventoryItemPropertyDefinitionsResponse> Services::InventoryRemoteServiceStruct::getInventoryItemPropertyDefinitionsEncryptedRequest(const Fopzo::Generated::GetInventoryItemPropertyDefinitionsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(55, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetInventoryItemPropertyDefinitionsResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetGameSettingsEncryptedResponse> Services::GameSettingsRemoteServiceStruct::getGameSettingsEncrypted2Request(const Fopzo::Generated::GetGameSettingsEncryptedRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(285, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetGameSettingsEncryptedResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetSpecialOffersResponse> Services::OffersRemoteServiceStruct::getSpecialOffersRequest(const Fopzo::Generated::GetSpecialOffersRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(300, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetSpecialOffersResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ChangeLobbyOtherPlayerTypeResponse> Services::MatchmakingRemoteServiceStruct::changeLobbyOtherPlayerType2Request(const Fopzo::Generated::ChangeLobbyOtherPlayerTypeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(87, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ChangeLobbyOtherPlayerTypeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetInvitesToLobbyResponse> Services::MatchmakingRemoteServiceStruct::getInvitesToLobby2Request(const Fopzo::Generated::GetInvitesToLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(72, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetInvitesToLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetLobbyResponse> Services::MatchmakingRemoteServiceStruct::getLobby2Request(const Fopzo::Generated::GetLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(82, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SendLobbyChatMsgResponse> Services::MatchmakingRemoteServiceStruct::sendLobbyChatMsg2Request(const Fopzo::Generated::SendLobbyChatMsgRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(74, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SendLobbyChatMsgResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RefuseInvitationToLobbyResponse> Services::MatchmakingRemoteServiceStruct::refuseInvitationToLobby2Request(const Fopzo::Generated::RefuseInvitationToLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(85, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RefuseInvitationToLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::KickPlayerFromLobbyResponse> Services::MatchmakingRemoteServiceStruct::kickPlayerFromLobby2Request(const Fopzo::Generated::KickPlayerFromLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(84, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::KickPlayerFromLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyTypeResponse> Services::MatchmakingRemoteServiceStruct::setLobbyType2Request(const Fopzo::Generated::SetLobbyTypeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(81, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyTypeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::InvitePlayerToLobbyAsResponse> Services::MatchmakingRemoteServiceStruct::invitePlayerToLobbyAs2Request(const Fopzo::Generated::InvitePlayerToLobbyAsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(73, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::InvitePlayerToLobbyAsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyJoinableResponse> Services::MatchmakingRemoteServiceStruct::setLobbyJoinable2Request(const Fopzo::Generated::SetLobbyJoinableRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(71, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyJoinableResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyDataResponse> Services::MatchmakingRemoteServiceStruct::setLobbyData2Request(const Fopzo::Generated::SetLobbyDataRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(70, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyDataResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::JoinLobbyAsResponse> Services::MatchmakingRemoteServiceStruct::joinLobbyAs2Request(const Fopzo::Generated::JoinLobbyAsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(76, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::JoinLobbyAsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyOwnerResponse> Services::MatchmakingRemoteServiceStruct::setLobbyOwner2Request(const Fopzo::Generated::SetLobbyOwnerRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(88, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyOwnerResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RevokePlayerInvitationToLobbyResponse> Services::MatchmakingRemoteServiceStruct::revokePlayerInvitationToLobby2Request(const Fopzo::Generated::RevokePlayerInvitationToLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(86, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RevokePlayerInvitationToLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::LeaveLobbyResponse> Services::MatchmakingRemoteServiceStruct::leaveLobby2Request(const Fopzo::Generated::LeaveLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(75, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::LeaveLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateLobbyWithSpectatorsResponse> Services::MatchmakingRemoteServiceStruct::createLobbyWithSpectators2Request(const Fopzo::Generated::CreateLobbyWithSpectatorsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(77, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateLobbyWithSpectatorsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyMaxSpectatorsResponse> Services::MatchmakingRemoteServiceStruct::setLobbyMaxSpectators2Request(const Fopzo::Generated::SetLobbyMaxSpectatorsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(83, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyMaxSpectatorsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyMaxMembersResponse> Services::MatchmakingRemoteServiceStruct::setLobbyMaxMembers2Request(const Fopzo::Generated::SetLobbyMaxMembersRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(78, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyMaxMembersResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SearchLobbyResponse> Services::MatchmakingRemoteServiceStruct::searchLobbyRequest(const Fopzo::Generated::SearchLobbyRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(79, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SearchLobbyResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetLobbyPhotonGameResponse> Services::MatchmakingRemoteServiceStruct::setLobbyPhotonGame2Request(const Fopzo::Generated::SetLobbyPhotonGameRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(80, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetLobbyPhotonGameResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerProcessingRequestResponse> Services::MarketplaceRemoteServiceStruct::getPlayerProcessingRequests2Request(const Fopzo::Generated::GetPlayerProcessingRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(5, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerProcessingRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetTradeOpenSaleRequestsResponse> Services::MarketplaceRemoteServiceStruct::getFilteredTradeOpenSaleRequestsRequest(const Fopzo::Generated::GetTradeOpenSaleRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(15, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetTradeOpenSaleRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreatePurchaseRequestBySaleResponse> Services::MarketplaceRemoteServiceStruct::createPurchaseRequestBySale2Request(const Fopzo::Generated::CreatePurchaseRequestBySaleRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(12, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreatePurchaseRequestBySaleResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetTradesResponse> Services::MarketplaceRemoteServiceStruct::getTrades2Request(const Fopzo::Generated::GetTradesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(16, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetTradesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerOpenRequestsResponse> Services::MarketplaceRemoteServiceStruct::getPlayerOpenRequests2Request(const Fopzo::Generated::GetPlayerOpenRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(7, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerOpenRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CancelRequestResponse> Services::MarketplaceRemoteServiceStruct::cancelRequest2Request(const Fopzo::Generated::CancelRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(13, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CancelRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetTradeOpenSaleRequestsResponse> Services::MarketplaceRemoteServiceStruct::getTradeOpenSaleRequests2Request(const Fopzo::Generated::GetTradeOpenSaleRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(14, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetTradeOpenSaleRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateSaleResponse> Services::MarketplaceRemoteServiceStruct::createSaleRequest(const Fopzo::Generated::CreateSaleRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(9, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateSaleResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreatePurchaseRequestResponse> Services::MarketplaceRemoteServiceStruct::createPurchaseRequest2Request(const Fopzo::Generated::CreatePurchaseRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(11, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreatePurchaseRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetMarketplaceSettingsResponse> Services::MarketplaceRemoteServiceStruct::getMarketplaceSettings2Request(const Fopzo::Generated::GetMarketplaceSettingsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(6, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetMarketplaceSettingsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateMultipleSalesResponse> Services::MarketplaceRemoteServiceStruct::createMultipleSalesRequest(const Fopzo::Generated::CreateMultipleSalesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(17, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateMultipleSalesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetTradeResponse> Services::MarketplaceRemoteServiceStruct::getTrade2Request(const Fopzo::Generated::GetTradeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(8, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetTradeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerClosedRequestsResponse> Services::MarketplaceRemoteServiceStruct::getPlayerClosedRequests2Request(const Fopzo::Generated::GetPlayerClosedRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(10, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerClosedRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetSystemMessageDetailsResponse> Services::SystemMessagesRemoteServiceStruct::getSystemMessageDetailsRequest(const Fopzo::Generated::GetSystemMessageDetailsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(307, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetSystemMessageDetailsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CountUnreadSystemMessagesResponse> Services::SystemMessagesRemoteServiceStruct::countUnreadSystemMessagesRequest(const Fopzo::Generated::CountUnreadSystemMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(306, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CountUnreadSystemMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeleteSystemMessagesResponse> Services::SystemMessagesRemoteServiceStruct::deleteSystemMessagesRequest(const Fopzo::Generated::DeleteSystemMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(309, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeleteSystemMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetSystemMessagesResponse> Services::SystemMessagesRemoteServiceStruct::getSystemMessagesRequest(const Fopzo::Generated::GetSystemMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(305, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetSystemMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadSystemMessagesResponse> Services::SystemMessagesRemoteServiceStruct::readSystemMessagesRequest(const Fopzo::Generated::ReadSystemMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(308, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadSystemMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetPlayerSettingsResponse> Services::PlayerRemoteServiceStruct::setPlayerSettings2Request(const Fopzo::Generated::SetPlayerSettingsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(27, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetPlayerSettingsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetDefaultAvatarResponse> Services::PlayerRemoteServiceStruct::setDefaultAvatarRequest(const Fopzo::Generated::SetDefaultAvatarRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(28, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetDefaultAvatarResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerSettingsResponse> Services::PlayerRemoteServiceStruct::getPlayerSettings2Request(const Fopzo::Generated::GetPlayerSettingsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(22, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerSettingsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetPlayerAvatarResponse> Services::PlayerRemoteServiceStruct::setPlayerAvatar2Request(const Fopzo::Generated::SetPlayerAvatarRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(25, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetPlayerAvatarResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetAwayStatusResponse> Services::PlayerRemoteServiceStruct::setAwayStatus2Request(const Fopzo::Generated::SetAwayStatusRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(20, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetAwayStatusResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerResponse> Services::PlayerRemoteServiceStruct::getPlayer2Request(const Fopzo::Generated::GetPlayerRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(23, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetPlayerFirebaseTokenResponse> Services::PlayerRemoteServiceStruct::setPlayerFirebaseToken2Request(const Fopzo::Generated::SetPlayerFirebaseTokenRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(24, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetPlayerFirebaseTokenResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetPlayerNameResponse> Services::PlayerRemoteServiceStruct::setPlayerName2Request(const Fopzo::Generated::SetPlayerNameRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(26, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetPlayerNameResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetOnlineStatusResponse> Services::PlayerRemoteServiceStruct::setOnlineStatus2Request(const Fopzo::Generated::SetOnlineStatusRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(21, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetOnlineStatusResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadPlayerPublicFilesResponse> Services::StorageRemoteServiceStruct::readPlayerPublicFilesRequest(const Fopzo::Generated::ReadPlayerPublicFilesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(175, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadPlayerPublicFilesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadPublicFileResponse> Services::StorageRemoteServiceStruct::readPublicFileRequest(const Fopzo::Generated::ReadPublicFileRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(174, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadPublicFileResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::WriteFileResponse> Services::StorageRemoteServiceStruct::writeFile2Request(const Fopzo::Generated::WriteFileRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(171, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::WriteFileResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadFilesResponse> Services::StorageRemoteServiceStruct::readFilesRequest(const Fopzo::Generated::ReadFilesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(172, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadFilesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ChangeFileAccessModeResponse> Services::StorageRemoteServiceStruct::changeFileAccessModeRequest(const Fopzo::Generated::ChangeFileAccessModeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(173, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ChangeFileAccessModeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadClanLogMessagesResponse> Services::ClanMessagesRemoteServiceStruct::readClanLogMessages2Request(const Fopzo::Generated::ReadClanLogMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(206, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadClanLogMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadClanChatMessagesResponse> Services::ClanMessagesRemoteServiceStruct::readClanChatMessages2Request(const Fopzo::Generated::ReadClanChatMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(204, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadClanChatMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanChatMessagesResponse> Services::ClanMessagesRemoteServiceStruct::getClanChatMessages2Request(const Fopzo::Generated::GetClanChatMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(203, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanChatMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SendClanChatMessageResponse> Services::ClanMessagesRemoteServiceStruct::sendClanChatMessage2Request(const Fopzo::Generated::SendClanChatMessageRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(205, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SendClanChatMessageResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanLogMessagesResponse> Services::ClanMessagesRemoteServiceStruct::getClanLogMessages2Request(const Fopzo::Generated::GetClanLogMessagesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(207, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanLogMessagesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetUnreadChatMessagesCountResponse> Services::ClanMessagesRemoteServiceStruct::getUnreadChatMessagesCount2Request(const Fopzo::Generated::GetUnreadChatMessagesCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(202, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetUnreadChatMessagesCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetUnreadLogMessagesCountResponse> Services::ClanMessagesRemoteServiceStruct::getUnreadLogMessagesCount2Request(const Fopzo::Generated::GetUnreadLogMessagesCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(201, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetUnreadLogMessagesCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetDefaultAvatarsResponse> Services::AvatarRemoteServiceStruct::getDefaultAvatarsRequest(const Fopzo::Generated::GetDefaultAvatarsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(275, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetDefaultAvatarsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanStatsResponse> Services::ClanStatsRemoteServiceStruct::getClanStatsRequest(const Fopzo::Generated::GetClanStatsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(241, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanStatsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetCurrentClanStatsResponse> Services::ClanStatsRemoteServiceStruct::getCurrentClanStatsRequest(const Fopzo::Generated::GetCurrentClanStatsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(240, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetCurrentClanStatsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetAchievementDefinitionsResponse> Services::AchievementRemoteServiceStruct::getAchievementDefinitionsRequest(const Fopzo::Generated::GetAchievementDefinitionsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(267, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetAchievementDefinitionsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetCurrentPlayerAchievementsResponse> Services::AchievementRemoteServiceStruct::getCurrentPlayerAchievementsRequest(const Fopzo::Generated::GetCurrentPlayerAchievementsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(265, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetCurrentPlayerAchievementsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerAchievementsResponse> Services::AchievementRemoteServiceStruct::getPlayerAchievementsRequest(const Fopzo::Generated::GetPlayerAchievementsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(266, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerAchievementsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetAllGameAnnouncementsResponse> Services::GameAnnouncementRemoteServiceStruct::getAllAnnouncementsRequest(const Fopzo::Generated::GetAllGameAnnouncementsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(280, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetAllGameAnnouncementsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::BoltIdUnLinkAuthResponse> Services::BoltIdAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::BoltIdUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(417, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::BoltIdUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::BoltIdAuthResponse> Services::BoltIdAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::BoltIdAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(415, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::BoltIdAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::BoltIdLinkAuthResponse> Services::BoltIdAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::BoltIdLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(416, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::BoltIdLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetLinkedAuthResponse> Services::AccountLinkRemoteServiceStruct::getLinkedAuthRequest(const Fopzo::Generated::GetLinkedAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(260, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetLinkedAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::FindReferralStateResponse> Services::ReferralRemoteServiceStruct::findPlayerStateRequest(const Fopzo::Generated::FindReferralStateRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(461, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::FindReferralStateResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRecruitByIdResponse> Services::ReferralRemoteServiceStruct::getRecruitByIdRequest(const Fopzo::Generated::GetRecruitByIdRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(464, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRecruitByIdResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetReferralPlayerStateResponse> Services::ReferralRemoteServiceStruct::getPlayerStateRequest(const Fopzo::Generated::GetReferralPlayerStateRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(460, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetReferralPlayerStateResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SubscribeToCommanderResponse> Services::ReferralRemoteServiceStruct::subscribeToCommanderRequest(const Fopzo::Generated::SubscribeToCommanderRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(462, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SubscribeToCommanderResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetReferralSystemSettingsResponse> Services::ReferralRemoteServiceStruct::getSettingsRequest(const Fopzo::Generated::GetReferralSystemSettingsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(465, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetReferralSystemSettingsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRecruitsByOffsetResponse> Services::ReferralRemoteServiceStruct::getRecruitsRequest(const Fopzo::Generated::GetRecruitsByOffsetRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(463, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRecruitsByOffsetResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::TwitchUnLinkAuthResponse> Services::TwitchAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::TwitchUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(421, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::TwitchUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::TwitchLinkAuthResponse> Services::TwitchAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::TwitchLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(420, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::TwitchLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DlcResponse> Services::DlcRemoteServiceStruct::getAllReleasedDlcRequest(const Fopzo::Generated::ReleasedDlcRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(226, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DlcResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DlcResponse> Services::DlcRemoteServiceStruct::getAllDlcRequest(const Fopzo::Generated::PreviewDlcRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(225, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DlcResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse> Services::RentMarketRemoteServiceStruct::getFilteredRentTradeOpenSaleRequestsRequest(const Fopzo::Generated::GetRentTradeOpenSaleRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(438, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateRentSaleResponse> Services::RentMarketRemoteServiceStruct::createRentSaleRequest(const Fopzo::Generated::CreateRentSaleRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(434, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateRentSaleResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRentTradesResponse> Services::RentMarketRemoteServiceStruct::getRentTradesRequest(const Fopzo::Generated::GetRentTradesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(440, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRentTradesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRentMarketSettingsResponse> Services::RentMarketRemoteServiceStruct::getRentMarketSettingsRequest(const Fopzo::Generated::GetRentMarketSettingsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(443, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRentMarketSettingsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateRentPurchaseRequestResponse> Services::RentMarketRemoteServiceStruct::createRentPurchaseRequestRequest(const Fopzo::Generated::CreateRentPurchaseRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(436, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateRentPurchaseRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerRentOpenRequestsResponse> Services::RentMarketRemoteServiceStruct::getPlayerRentOpenRequestsRequest(const Fopzo::Generated::GetPlayerRentOpenRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(431, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerRentOpenRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerRentClosedRequestsCountResponse> Services::RentMarketRemoteServiceStruct::getPlayerRentClosedRequestsCountRequest(const Fopzo::Generated::GetPlayerRentClosedRequestsCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(433, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerRentClosedRequestsCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CancelRentRequestResponse> Services::RentMarketRemoteServiceStruct::cancelRentRequestRequest(const Fopzo::Generated::CancelRentRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(442, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CancelRentRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateRentPurchaseRequestBySaleResponse> Services::RentMarketRemoteServiceStruct::createRentPurchaseRequestBySaleRequest(const Fopzo::Generated::CreateRentPurchaseRequestBySaleRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(435, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateRentPurchaseRequestBySaleResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse> Services::RentMarketRemoteServiceStruct::getRentTradeOpenSaleRequestsRequest(const Fopzo::Generated::GetRentTradeOpenSaleRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(437, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerRentProcessingRequestsResponse> Services::RentMarketRemoteServiceStruct::getPlayerRentProcessingRequestsRequest(const Fopzo::Generated::GetPlayerRentProcessingRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(430, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerRentProcessingRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRentTradeOpenPurchaseRequestsResponse> Services::RentMarketRemoteServiceStruct::getRentTradeOpenPurchaseRequestsRequest(const Fopzo::Generated::GetRentTradeOpenPurchaseRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(439, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRentTradeOpenPurchaseRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerRentClosedRequestsResponse> Services::RentMarketRemoteServiceStruct::getPlayerRentClosedRequestsRequest(const Fopzo::Generated::GetPlayerRentClosedRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(432, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerRentClosedRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRentTradeResponse> Services::RentMarketRemoteServiceStruct::getRentTradeRequest(const Fopzo::Generated::GetRentTradeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(441, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRentTradeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::HandshakeResponse> Services::HandshakeRemoteServiceStruct::encryptedHandshakeRequest(const Fopzo::Generated::Handshake& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(3, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::HandshakeResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerFriendsResponse> Services::FriendsRemoteServiceStruct::getPlayerFriends2Request(const Fopzo::Generated::GetPlayerFriendsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(150, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerFriendsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::IgnoreAllFriendRequestsResponse> Services::FriendsRemoteServiceStruct::ignoreAllFriendRequestsRequest(const Fopzo::Generated::IgnoreAllFriendRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(162, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::IgnoreAllFriendRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SearchPlayersResponse> Services::FriendsRemoteServiceStruct::searchPlayers2Request(const Fopzo::Generated::SearchPlayersRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(154, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SearchPlayersResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RemoveFriendResponse> Services::FriendsRemoteServiceStruct::removeFriend2Request(const Fopzo::Generated::RemoveFriendRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(157, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RemoveFriendResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::IgnoreFriendRequestResponse> Services::FriendsRemoteServiceStruct::ignoreFriendRequest2Request(const Fopzo::Generated::IgnoreFriendRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(158, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::IgnoreFriendRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SendFriendRequestResponse> Services::FriendsRemoteServiceStruct::sendFriendRequest2Request(const Fopzo::Generated::SendFriendRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(153, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SendFriendRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerFriendByIdResponse> Services::FriendsRemoteServiceStruct::getPlayerFriendById2Request(const Fopzo::Generated::GetPlayerFriendByIdRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(151, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerFriendByIdResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AcceptFriendRequestResponse> Services::FriendsRemoteServiceStruct::acceptFriendRequest2Request(const Fopzo::Generated::AcceptFriendRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(156, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AcceptFriendRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerFriendByUidResponse> Services::FriendsRemoteServiceStruct::getPlayerFriendByUid2Request(const Fopzo::Generated::GetPlayerFriendByUidRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(161, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerFriendByUidResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::BlockFriendResponse> Services::FriendsRemoteServiceStruct::blockFriend2Request(const Fopzo::Generated::BlockFriendRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(159, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::BlockFriendResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::UnblockFriendResponse> Services::FriendsRemoteServiceStruct::unblockFriend2Request(const Fopzo::Generated::UnblockFriendRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(160, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::UnblockFriendResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RevokeFriendRequestResponse> Services::FriendsRemoteServiceStruct::revokeFriendRequest2Request(const Fopzo::Generated::RevokeFriendRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(155, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RevokeFriendRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerFriendsIdsResponse> Services::FriendsRemoteServiceStruct::getPlayerFriendsIds2Request(const Fopzo::Generated::GetPlayerFriendsIdsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(152, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerFriendsIdsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AppleIdLinkAuthResponse> Services::AppleIdAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::AppleIdLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(346, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AppleIdLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AppleIdAuthResponse> Services::AppleIdAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::AppleIdAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(345, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AppleIdAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AppleIdUnLinkAuthResponse> Services::AppleIdAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::AppleIdUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(347, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AppleIdUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ProgressChallengeResponse> Services::GameEventRemoteServiceStruct::processChallengeRequest(const Fopzo::Generated::ProgressChallengeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(217, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ProgressChallengeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetCachedPlayerGameEventsResponse> Services::GameEventRemoteServiceStruct::getCachedPlayerGameEventsRequest(const Fopzo::Generated::GetCachedPlayerGameEventsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(216, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetCachedPlayerGameEventsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerGameEventProgressResponse> Services::GameEventRemoteServiceStruct::getPlayerGameEventProgressRequest(const Fopzo::Generated::GetPlayerGameEventProgressRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(218, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerGameEventProgressResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerGameEventsProgressesResponse> Services::GameEventRemoteServiceStruct::getPlayerGameEventsProgressesRequest(const Fopzo::Generated::GetPlayerGameEventsProgressesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(215, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerGameEventsProgressesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::StorePlayerStatsResponse> Services::PlayerStatsRemoteServiceStruct::storeStats2Request(const Fopzo::Generated::StorePlayerStatsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(180, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::StorePlayerStatsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetCurrentStatsResponse> Services::PlayerStatsRemoteServiceStruct::getCurrentStatsRequest(const Fopzo::Generated::GetCurrentStatsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(181, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetCurrentStatsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerStatsResponse> Services::PlayerStatsRemoteServiceStruct::getPlayerStats2Request(const Fopzo::Generated::GetPlayerStatsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(182, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerStatsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::VkAuthResponse> Services::VkAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::VkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(335, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::VkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::VkLinkAuthResponse> Services::VkAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::VkLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(336, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::VkLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::VkUnLinkAuthResponse> Services::VkAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::VkUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(337, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::VkUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SendFriendMsgResponse> Services::ChatRemoteServiceStruct::sendFriendMsg2Request(const Fopzo::Generated::SendFriendMsgRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(192, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SendFriendMsgResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeleteFriendMsgsResponse> Services::ChatRemoteServiceStruct::deleteFriendMsgs2Request(const Fopzo::Generated::DeleteFriendMsgsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(195, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeleteFriendMsgsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetFriendMsgsByOffsetResponse> Services::ChatRemoteServiceStruct::getFriendMsgsByOffset2Request(const Fopzo::Generated::GetFriendMsgsByOffsetRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(191, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetFriendMsgsByOffsetResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ReadFriendMsgsResponse> Services::ChatRemoteServiceStruct::readFriendMsgs2Request(const Fopzo::Generated::ReadFriendMsgsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(193, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ReadFriendMsgsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetChatUserResponse> Services::ChatRemoteServiceStruct::getChatUserRequest(const Fopzo::Generated::GetChatUserRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(194, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetChatUserResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetChatUsersLiteResponse> Services::ChatRemoteServiceStruct::getChatUsersLiteRequest(const Fopzo::Generated::GetChatUsersLiteRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(190, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetChatUsersLiteResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerStatsForSeasonResponse> Services::SeasonalStatsRemoteServiceStruct::getPlayerStatsForSeasonRequest(const Fopzo::Generated::GetPlayerStatsForSeasonRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(325, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerStatsForSeasonResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetCurrentClanStatsForSeasonResponse> Services::SeasonalStatsRemoteServiceStruct::getCurrentClanStatsForSeasonRequest(const Fopzo::Generated::GetCurrentClanStatsForSeasonRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(327, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetCurrentClanStatsForSeasonResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerStatsForSeasonResponse> Services::SeasonalStatsRemoteServiceStruct::getStatsForSeasonRequest(const Fopzo::Generated::GetStatsForSeasonRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(326, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerStatsForSeasonResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanStatsForSeasonResponse> Services::SeasonalStatsRemoteServiceStruct::getClanStatsForSeasonRequest(const Fopzo::Generated::GetClanStatsForSeasonRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(328, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanStatsForSeasonResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetAppsBuyInappResponse> Services::GetAppsInAppRemoteServiceStruct::buyInAppRequest(const Fopzo::Generated::GetAppsBuyInappRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(403, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetAppsBuyInappResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RateGameResponse> Services::RateGameRemoteServiceStruct::rateGameRequest(const Fopzo::Generated::RateGameRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(252, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RateGameResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AskLaterResponse> Services::RateGameRemoteServiceStruct::askLaterRequest(const Fopzo::Generated::AskLaterRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(251, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AskLaterResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetLastRateGameResponse> Services::RateGameRemoteServiceStruct::getLastRateGameRequest(const Fopzo::Generated::GetLastRateGameRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(250, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetLastRateGameResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DontAskLaterResponse> Services::RateGameRemoteServiceStruct::dontAskLaterRequest(const Fopzo::Generated::DontAskLaterRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(253, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DontAskLaterResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GoogleBuyInappResponse> Services::GoogleInAppRemoteServiceStruct::buyInApp2Request(const Fopzo::Generated::GoogleBuyInappRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(390, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GoogleBuyInappResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerInviteRequestsResponse> Services::ClanRemoteServiceStruct::getPlayerInviteRequests2Request(const Fopzo::Generated::GetPlayerInviteRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(112, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerInviteRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanInviteRequestsResponse> Services::ClanRemoteServiceStruct::getClanInviteRequests2Request(const Fopzo::Generated::GetClanInviteRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(119, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanInviteRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AssignRoleToMemberResponse> Services::ClanRemoteServiceStruct::assignRoleToMember2Request(const Fopzo::Generated::AssignRoleToMemberRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(134, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AssignRoleToMemberResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CancelJoinRequestResponse> Services::ClanRemoteServiceStruct::cancelJoinRequest2Request(const Fopzo::Generated::CancelJoinRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(121, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CancelJoinRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::FindClanResponse> Services::ClanRemoteServiceStruct::findClan2Request(const Fopzo::Generated::FindClanRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(115, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::FindClanResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanByIdResponse> Services::ClanRemoteServiceStruct::getClanById2Request(const Fopzo::Generated::GetClanByIdRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(113, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanByIdResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::LeaveClanResponse> Services::ClanRemoteServiceStruct::leaveClan2Request(const Fopzo::Generated::LeaveClanRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(125, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::LeaveClanResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanClosedInviteRequestsCountResponse> Services::ClanRemoteServiceStruct::getClanClosedInviteRequestsCount2Request(const Fopzo::Generated::GetClanClosedInviteRequestsCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(107, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanClosedInviteRequestsCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeclineJoinRequestResponse> Services::ClanRemoteServiceStruct::declineJoinRequest2Request(const Fopzo::Generated::DeclineJoinRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(120, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeclineJoinRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanByTagResponse> Services::ClanRemoteServiceStruct::getClanByTagRequest(const Fopzo::Generated::GetClanByTagRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(129, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanByTagResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ChangeClanTypeResponse> Services::ClanRemoteServiceStruct::changeClanType2Request(const Fopzo::Generated::ChangeClanTypeRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(132, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ChangeClanTypeResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CancelInviteRequestResponse> Services::ClanRemoteServiceStruct::cancelInviteRequest2Request(const Fopzo::Generated::CancelInviteRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(133, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CancelInviteRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AssignLeaderRoleResponse> Services::ClanRemoteServiceStruct::assignLeaderRole2Request(const Fopzo::Generated::AssignLeaderRoleRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(135, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AssignLeaderRoleResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanMembersResponse> Services::ClanRemoteServiceStruct::getClanMembers2Request(const Fopzo::Generated::GetClanMembersRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(108, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanMembersResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::CreateClanResponse> Services::ClanRemoteServiceStruct::createClan2Request(const Fopzo::Generated::CreateClanRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(131, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::CreateClanResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetClanAvatarResponse> Services::ClanRemoteServiceStruct::setClanAvatar2Request(const Fopzo::Generated::SetClanAvatarRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(128, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetClanAvatarResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ValidateClanNameResponse> Services::ClanRemoteServiceStruct::validateClanName2Request(const Fopzo::Generated::ValidateClanNameRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(124, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ValidateClanNameResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::RequestToJoinClanResponse> Services::ClanRemoteServiceStruct::requestToJoinClan2Request(const Fopzo::Generated::RequestToJoinClanRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(111, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::RequestToJoinClanResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerClosedJoinRequestsCountResponse> Services::ClanRemoteServiceStruct::getPlayerClosedJoinRequestsCount2Request(const Fopzo::Generated::GetPlayerClosedJoinRequestsCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(105, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerClosedJoinRequestsCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::KickMemberResponse> Services::ClanRemoteServiceStruct::kickMember2Request(const Fopzo::Generated::KickMemberRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(126, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::KickMemberResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeleteClosedInviteRequestResponse> Services::ClanRemoteServiceStruct::deleteClosedInviteRequest2Request(const Fopzo::Generated::DeleteClosedInviteRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(123, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeleteClosedInviteRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanJoinRequestsResponse> Services::ClanRemoteServiceStruct::getClanJoinRequests2Request(const Fopzo::Generated::GetClanJoinRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(116, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanJoinRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRecommendedClansResponse> Services::ClanRemoteServiceStruct::getRecommendedClans2Request(const Fopzo::Generated::GetRecommendedClansRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(109, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRecommendedClansResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeleteClosedJoinRequestResponse> Services::ClanRemoteServiceStruct::deleteClosedJoinRequest2Request(const Fopzo::Generated::DeleteClosedJoinRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(117, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeleteClosedJoinRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanResponse> Services::ClanRemoteServiceStruct::getClan2Request(const Fopzo::Generated::GetClanRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(101, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetRolesResponse> Services::ClanRemoteServiceStruct::getRoles2Request(const Fopzo::Generated::GetRolesRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(102, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetRolesResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanSettingsResponse> Services::ClanRemoteServiceStruct::getClanSettings2Request(const Fopzo::Generated::GetClanSettingsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(103, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanSettingsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::InviteToClanResponse> Services::ClanRemoteServiceStruct::inviteToClan2Request(const Fopzo::Generated::InviteToClanRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(122, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::InviteToClanResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::ValidateClanTagResponse> Services::ClanRemoteServiceStruct::validateClanTag2Request(const Fopzo::Generated::ValidateClanTagRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(118, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::ValidateClanTagResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::SetClanDescriptionResponse> Services::ClanRemoteServiceStruct::setClanDescription2Request(const Fopzo::Generated::SetClanDescriptionRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(127, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::SetClanDescriptionResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerJoinRequestsResponse> Services::ClanRemoteServiceStruct::getPlayerJoinRequests2Request(const Fopzo::Generated::GetPlayerJoinRequestsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(114, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerJoinRequestsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::DeclineInviteRequestResponse> Services::ClanRemoteServiceStruct::declineInviteRequest2Request(const Fopzo::Generated::DeclineInviteRequestRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(130, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::DeclineInviteRequestResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanMembersByIdResponse> Services::ClanRemoteServiceStruct::getClanMembersById2Request(const Fopzo::Generated::GetClanMembersByIdRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(110, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanMembersByIdResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetClanJoinRequestsCountResponse> Services::ClanRemoteServiceStruct::getClanJoinRequestsCount2Request(const Fopzo::Generated::GetClanJoinRequestsCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(106, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetClanJoinRequestsCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetPlayerInviteRequestsCountResponse> Services::ClanRemoteServiceStruct::getPlayerInviteRequestsCount2Request(const Fopzo::Generated::GetPlayerInviteRequestsCountRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(104, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetPlayerInviteRequestsCountResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetItemsResponse> Services::NewsFeedRemoteServiceStruct::getItems2Request(const Fopzo::Generated::GetItemsRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(295, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetItemsResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GameCenterLinkAuthResponse> Services::GameCenterAuthRemoteServiceStruct::linkAuthRequest(const Fopzo::Generated::GameCenterLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(356, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GameCenterLinkAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GameCenterUnLinkAuthResponse> Services::GameCenterAuthRemoteServiceStruct::unLinkAuthRequest(const Fopzo::Generated::GameCenterUnLinkAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(357, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GameCenterUnLinkAuthResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GameCenterAuthResponse> Services::GameCenterAuthRemoteServiceStruct::encryptedAuth2Request(const Fopzo::Generated::GameCenterAuthRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(355, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GameCenterAuthResponse>();
    if (resp.data_size() > 0) {
        auto dec = owner_->decrypt(std::vector<uint8_t>(resp.data(0).one().begin(), resp.data(0).one().end()));
        result->ParseFromArray(dec.data(), (int)dec.size());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::AppStoreBuyInappResponse> Services::AppStoreInAppRemoteServiceStruct::buyInApp2Request(const Fopzo::Generated::AppStoreBuyInappRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(400, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::AppStoreBuyInappResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

std::unique_ptr<Fopzo::Generated::GetMatchResponse> Services::MatchesRemoteServiceStruct::getMatch2Request(const Fopzo::Generated::GetMatchRequest& req) {
    std::string s = req.SerializeAsString();
    auto resp = owner_->send_request(0, {s.begin(), s.end()});
    auto result = std::make_unique<Fopzo::Generated::GetMatchResponse>();
    if (resp.data_size() > 0) {
        result->ParseFromString(resp.data(0).one());
    }
    return result;
}

