#pragma once
#include <memory>
#include <string>
#include <vector>
#include "schemes.pb.h"

class FopzoClient;

class Services {
public:
    explicit Services(FopzoClient* owner);

    struct GameServerRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerRemoteService;
    struct TournamentsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit TournamentsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } TournamentsRemoteService;
    struct FacebookAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit FacebookAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::FacebookAuthResponse> encryptedAuth2Request(const Fopzo::Generated::FacebookAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::FacebookUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::FacebookUnLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::FacebookLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::FacebookLinkAuthRequest& req);
    } FacebookAuthRemoteService;
    struct ClanMemberStatsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ClanMemberStatsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } ClanMemberStatsRemoteService;
    struct GoogleAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GoogleAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GoogleAuthResponse> encryptedAuth2Request(const Fopzo::Generated::GoogleAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::GoogleLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::GoogleLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::GoogleUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::GoogleUnLinkAuthRequest& req);
    } GoogleAuthRemoteService;
    struct GameServerInAppRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerInAppRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerInAppRemoteService;
    struct AppGalleryInAppRemoteServiceStruct {
        FopzoClient* owner_;
        explicit AppGalleryInAppRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::AppGalleryBuyInappResponse> buyInAppRequest(const Fopzo::Generated::AppGalleryBuyInappRequest& req);
    } AppGalleryInAppRemoteService;
    struct GameServerStatsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerStatsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerStatsRemoteService;
    struct GdprRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GdprRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::CreateRequestEncryptedResponse> createRequestEncryptedRequest(const Fopzo::Generated::CreateRequestEncryptedRequest& req);
        std::unique_ptr<Fopzo::Generated::DeleteAccountResponse> deleteAccountRequest(const Fopzo::Generated::DeleteAccountRequest& req);
        std::unique_ptr<Fopzo::Generated::RecoverAccountResponse> recoverAccountRequest(const Fopzo::Generated::RecoverAccountRequest& req);
    } GdprRemoteService;
    struct IdTokenRemoteServiceStruct {
        FopzoClient* owner_;
        explicit IdTokenRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetIdTokenResponse> getIdTokenRequest(const Fopzo::Generated::GetIdTokenRequest& req);
    } IdTokenRemoteService;
    struct ContentCreatorRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ContentCreatorRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::UnsubscribeCreatorResponse> unsubscribeCreatorRequest(const Fopzo::Generated::UnsubscribeCreatorRequest& req);
        std::unique_ptr<Fopzo::Generated::FindCreatorResponse> findCreatorRequest(const Fopzo::Generated::FindCreatorRequest& req);
        std::unique_ptr<Fopzo::Generated::GetSubscribedCreatorResponse> findCreatorSubscriptionRequest(const Fopzo::Generated::GetSubscribedCreatorRequest& req);
        std::unique_ptr<Fopzo::Generated::SubscribeCreatorResponse> subscribeCreatorRequest(const Fopzo::Generated::SubscribeCreatorRequest& req);
    } ContentCreatorRemoteService;
    struct BoltRemoteServiceStruct {
        FopzoClient* owner_;
        explicit BoltRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::SubscribeResponse> subscribe2Request(const Fopzo::Generated::SubscribeRequest& req);
        std::unique_ptr<Fopzo::Generated::UnsubscribeResponse> unsubscribe2Request(const Fopzo::Generated::UnsubscribeRequest& req);
    } BoltRemoteService;
    struct GameServerGameEventRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerGameEventRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerGameEventRemoteService;
    struct GSClanStatsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GSClanStatsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GSClanStatsRemoteService;
    struct TestAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit TestAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::TestAuthResponse> encryptedAuth2Request(const Fopzo::Generated::TestAuthRequest& req);
    } TestAuthRemoteService;
    struct HuaweiAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit HuaweiAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::HuaweiUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::HuaweiUnLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::HuaweiLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::HuaweiLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::HuaweiAuthResponse> encryptedAuth2Request(const Fopzo::Generated::HuaweiAuthRequest& req);
    } HuaweiAuthRemoteService;
    struct InventoryRemoteServiceStruct {
        FopzoClient* owner_;
        explicit InventoryRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetAllOtherPlayerPublicItemsResponse> getOtherPlayerPublicItemsEncryptedRequest(const Fopzo::Generated::GetAllOtherPlayerPublicItemsRequest& req);
        std::unique_ptr<Fopzo::Generated::ActivateCouponResponse> activateCouponEncryptedRequest(const Fopzo::Generated::ActivateCouponRequest& req);
        std::unique_ptr<Fopzo::Generated::SetInventoryItemPublicityResponse> setInventoryItemPublicityRequest(const Fopzo::Generated::SetInventoryItemPublicityRequest& req);
        std::unique_ptr<Fopzo::Generated::ExecuteRecipeEncrypted2Response> executeRecipeEncrypted2Request(const Fopzo::Generated::ExecuteRecipeRequest& req);
        std::unique_ptr<Fopzo::Generated::SetInventoryItemFlagsResponse> setInventoryItemFlagsEncryptedRequest(const Fopzo::Generated::SetInventoryItemFlagsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerInventoryResponse> getPlayerInventoryEncryptedRequest(const Fopzo::Generated::GetPlayerInventoryRequest& req);
        std::unique_ptr<Fopzo::Generated::UnmountInventoryItemResponse> unmountInventoryItemEncryptedRequest(const Fopzo::Generated::UnmountInventoryItemRequest& req);
        std::unique_ptr<Fopzo::Generated::GetInventoryItemDefinitionsResponse> getInventoryItemDefinitionsEncryptedRequest(const Fopzo::Generated::GetInventoryItemDefinitionsRequest& req);
        std::unique_ptr<Fopzo::Generated::MountInventoryItemResponse> mountInventoryItemEncryptedRequest(const Fopzo::Generated::MountInventoryItemRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRecipeInfoResponse> getRecipeInfoRequest(const Fopzo::Generated::GetRecipeInfoRequest& req);
        std::unique_ptr<Fopzo::Generated::SetItemsModificationsResponse> setInventoryItemsPropertiesEncryptedRequest(const Fopzo::Generated::SetItemsModificationsRequest& req);
        std::unique_ptr<Fopzo::Generated::BuyInventoryItemResponse> buyInventoryItemEncryptedRequest(const Fopzo::Generated::BuyInventoryItemRequest& req);
        std::unique_ptr<Fopzo::Generated::GetInventoryItemPropertyDefinitionsResponse> getInventoryItemPropertyDefinitionsEncryptedRequest(const Fopzo::Generated::GetInventoryItemPropertyDefinitionsRequest& req);
    } InventoryRemoteService;
    struct InAppRemoteServiceStruct {
        FopzoClient* owner_;
        explicit InAppRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } InAppRemoteService;
    struct GroupRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GroupRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GroupRemoteService;
    struct GameSettingsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameSettingsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetGameSettingsEncryptedResponse> getGameSettingsEncrypted2Request(const Fopzo::Generated::GetGameSettingsEncryptedRequest& req);
    } GameSettingsRemoteService;
    struct OffersRemoteServiceStruct {
        FopzoClient* owner_;
        explicit OffersRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetSpecialOffersResponse> getSpecialOffersRequest(const Fopzo::Generated::GetSpecialOffersRequest& req);
    } OffersRemoteService;
    struct MatchmakingRemoteServiceStruct {
        FopzoClient* owner_;
        explicit MatchmakingRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::ChangeLobbyOtherPlayerTypeResponse> changeLobbyOtherPlayerType2Request(const Fopzo::Generated::ChangeLobbyOtherPlayerTypeRequest& req);
        std::unique_ptr<Fopzo::Generated::GetInvitesToLobbyResponse> getInvitesToLobby2Request(const Fopzo::Generated::GetInvitesToLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::GetLobbyResponse> getLobby2Request(const Fopzo::Generated::GetLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::SendLobbyChatMsgResponse> sendLobbyChatMsg2Request(const Fopzo::Generated::SendLobbyChatMsgRequest& req);
        std::unique_ptr<Fopzo::Generated::RefuseInvitationToLobbyResponse> refuseInvitationToLobby2Request(const Fopzo::Generated::RefuseInvitationToLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::KickPlayerFromLobbyResponse> kickPlayerFromLobby2Request(const Fopzo::Generated::KickPlayerFromLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyTypeResponse> setLobbyType2Request(const Fopzo::Generated::SetLobbyTypeRequest& req);
        std::unique_ptr<Fopzo::Generated::InvitePlayerToLobbyAsResponse> invitePlayerToLobbyAs2Request(const Fopzo::Generated::InvitePlayerToLobbyAsRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyJoinableResponse> setLobbyJoinable2Request(const Fopzo::Generated::SetLobbyJoinableRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyDataResponse> setLobbyData2Request(const Fopzo::Generated::SetLobbyDataRequest& req);
        std::unique_ptr<Fopzo::Generated::JoinLobbyAsResponse> joinLobbyAs2Request(const Fopzo::Generated::JoinLobbyAsRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyOwnerResponse> setLobbyOwner2Request(const Fopzo::Generated::SetLobbyOwnerRequest& req);
        std::unique_ptr<Fopzo::Generated::RevokePlayerInvitationToLobbyResponse> revokePlayerInvitationToLobby2Request(const Fopzo::Generated::RevokePlayerInvitationToLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::LeaveLobbyResponse> leaveLobby2Request(const Fopzo::Generated::LeaveLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateLobbyWithSpectatorsResponse> createLobbyWithSpectators2Request(const Fopzo::Generated::CreateLobbyWithSpectatorsRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyMaxSpectatorsResponse> setLobbyMaxSpectators2Request(const Fopzo::Generated::SetLobbyMaxSpectatorsRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyMaxMembersResponse> setLobbyMaxMembers2Request(const Fopzo::Generated::SetLobbyMaxMembersRequest& req);
        std::unique_ptr<Fopzo::Generated::SearchLobbyResponse> searchLobbyRequest(const Fopzo::Generated::SearchLobbyRequest& req);
        std::unique_ptr<Fopzo::Generated::SetLobbyPhotonGameResponse> setLobbyPhotonGame2Request(const Fopzo::Generated::SetLobbyPhotonGameRequest& req);
    } MatchmakingRemoteService;
    struct MarketplaceRemoteServiceStruct {
        FopzoClient* owner_;
        explicit MarketplaceRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetPlayerProcessingRequestResponse> getPlayerProcessingRequests2Request(const Fopzo::Generated::GetPlayerProcessingRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetTradeOpenSaleRequestsResponse> getFilteredTradeOpenSaleRequestsRequest(const Fopzo::Generated::GetTradeOpenSaleRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::CreatePurchaseRequestBySaleResponse> createPurchaseRequestBySale2Request(const Fopzo::Generated::CreatePurchaseRequestBySaleRequest& req);
        std::unique_ptr<Fopzo::Generated::GetTradesResponse> getTrades2Request(const Fopzo::Generated::GetTradesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerOpenRequestsResponse> getPlayerOpenRequests2Request(const Fopzo::Generated::GetPlayerOpenRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::CancelRequestResponse> cancelRequest2Request(const Fopzo::Generated::CancelRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetTradeOpenSaleRequestsResponse> getTradeOpenSaleRequests2Request(const Fopzo::Generated::GetTradeOpenSaleRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateSaleResponse> createSaleRequest(const Fopzo::Generated::CreateSaleRequest& req);
        std::unique_ptr<Fopzo::Generated::CreatePurchaseRequestResponse> createPurchaseRequest2Request(const Fopzo::Generated::CreatePurchaseRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetMarketplaceSettingsResponse> getMarketplaceSettings2Request(const Fopzo::Generated::GetMarketplaceSettingsRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateMultipleSalesResponse> createMultipleSalesRequest(const Fopzo::Generated::CreateMultipleSalesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetTradeResponse> getTrade2Request(const Fopzo::Generated::GetTradeRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerClosedRequestsResponse> getPlayerClosedRequests2Request(const Fopzo::Generated::GetPlayerClosedRequestsRequest& req);
    } MarketplaceRemoteService;
    struct SystemMessagesRemoteServiceStruct {
        FopzoClient* owner_;
        explicit SystemMessagesRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetSystemMessageDetailsResponse> getSystemMessageDetailsRequest(const Fopzo::Generated::GetSystemMessageDetailsRequest& req);
        std::unique_ptr<Fopzo::Generated::CountUnreadSystemMessagesResponse> countUnreadSystemMessagesRequest(const Fopzo::Generated::CountUnreadSystemMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::DeleteSystemMessagesResponse> deleteSystemMessagesRequest(const Fopzo::Generated::DeleteSystemMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetSystemMessagesResponse> getSystemMessagesRequest(const Fopzo::Generated::GetSystemMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::ReadSystemMessagesResponse> readSystemMessagesRequest(const Fopzo::Generated::ReadSystemMessagesRequest& req);
    } SystemMessagesRemoteService;
    struct PlayerRemoteServiceStruct {
        FopzoClient* owner_;
        explicit PlayerRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::SetPlayerSettingsResponse> setPlayerSettings2Request(const Fopzo::Generated::SetPlayerSettingsRequest& req);
        std::unique_ptr<Fopzo::Generated::SetDefaultAvatarResponse> setDefaultAvatarRequest(const Fopzo::Generated::SetDefaultAvatarRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerSettingsResponse> getPlayerSettings2Request(const Fopzo::Generated::GetPlayerSettingsRequest& req);
        std::unique_ptr<Fopzo::Generated::SetPlayerAvatarResponse> setPlayerAvatar2Request(const Fopzo::Generated::SetPlayerAvatarRequest& req);
        std::unique_ptr<Fopzo::Generated::SetAwayStatusResponse> setAwayStatus2Request(const Fopzo::Generated::SetAwayStatusRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerResponse> getPlayer2Request(const Fopzo::Generated::GetPlayerRequest& req);
        std::unique_ptr<Fopzo::Generated::SetPlayerFirebaseTokenResponse> setPlayerFirebaseToken2Request(const Fopzo::Generated::SetPlayerFirebaseTokenRequest& req);
        std::unique_ptr<Fopzo::Generated::SetPlayerNameResponse> setPlayerName2Request(const Fopzo::Generated::SetPlayerNameRequest& req);
        std::unique_ptr<Fopzo::Generated::SetOnlineStatusResponse> setOnlineStatus2Request(const Fopzo::Generated::SetOnlineStatusRequest& req);
    } PlayerRemoteService;
    struct MatchesRemoteServiceStruct {
        FopzoClient* owner_;
        explicit MatchesRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        
        std::unique_ptr<Fopzo::Generated::GetMatchResponse> getMatch2Request(const Fopzo::Generated::GetMatchRequest& req);
        
    } MatchesRemoteService;
    struct StorageRemoteServiceStruct {
        FopzoClient* owner_;
        explicit StorageRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::ReadPlayerPublicFilesResponse> readPlayerPublicFilesRequest(const Fopzo::Generated::ReadPlayerPublicFilesRequest& req);
        std::unique_ptr<Fopzo::Generated::ReadPublicFileResponse> readPublicFileRequest(const Fopzo::Generated::ReadPublicFileRequest& req);
        std::unique_ptr<Fopzo::Generated::WriteFileResponse> writeFile2Request(const Fopzo::Generated::WriteFileRequest& req);
        std::unique_ptr<Fopzo::Generated::ReadFilesResponse> readFilesRequest(const Fopzo::Generated::ReadFilesRequest& req);
        std::unique_ptr<Fopzo::Generated::ChangeFileAccessModeResponse> changeFileAccessModeRequest(const Fopzo::Generated::ChangeFileAccessModeRequest& req);
    } StorageRemoteService;
    struct ClanMessagesRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ClanMessagesRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::ReadClanLogMessagesResponse> readClanLogMessages2Request(const Fopzo::Generated::ReadClanLogMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::ReadClanChatMessagesResponse> readClanChatMessages2Request(const Fopzo::Generated::ReadClanChatMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanChatMessagesResponse> getClanChatMessages2Request(const Fopzo::Generated::GetClanChatMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::SendClanChatMessageResponse> sendClanChatMessage2Request(const Fopzo::Generated::SendClanChatMessageRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanLogMessagesResponse> getClanLogMessages2Request(const Fopzo::Generated::GetClanLogMessagesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetUnreadChatMessagesCountResponse> getUnreadChatMessagesCount2Request(const Fopzo::Generated::GetUnreadChatMessagesCountRequest& req);
        std::unique_ptr<Fopzo::Generated::GetUnreadLogMessagesCountResponse> getUnreadLogMessagesCount2Request(const Fopzo::Generated::GetUnreadLogMessagesCountRequest& req);
    } ClanMessagesRemoteService;
    struct AvatarRemoteServiceStruct {
        FopzoClient* owner_;
        explicit AvatarRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetDefaultAvatarsResponse> getDefaultAvatarsRequest(const Fopzo::Generated::GetDefaultAvatarsRequest& req);
    } AvatarRemoteService;
    struct GameServerInventoryRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerInventoryRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerInventoryRemoteService;
    struct GameServerPlayerRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerPlayerRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerPlayerRemoteService;
    struct ClanStatsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ClanStatsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetClanStatsResponse> getClanStatsRequest(const Fopzo::Generated::GetClanStatsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetCurrentClanStatsResponse> getCurrentClanStatsRequest(const Fopzo::Generated::GetCurrentClanStatsRequest& req);
    } ClanStatsRemoteService;
    struct UgcRemoteServiceStruct {
        FopzoClient* owner_;
        explicit UgcRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } UgcRemoteService;
    struct AchievementRemoteServiceStruct {
        FopzoClient* owner_;
        explicit AchievementRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetAchievementDefinitionsResponse> getAchievementDefinitionsRequest(const Fopzo::Generated::GetAchievementDefinitionsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetCurrentPlayerAchievementsResponse> getCurrentPlayerAchievementsRequest(const Fopzo::Generated::GetCurrentPlayerAchievementsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerAchievementsResponse> getPlayerAchievementsRequest(const Fopzo::Generated::GetPlayerAchievementsRequest& req);
    } AchievementRemoteService;
    struct GameAnnouncementRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameAnnouncementRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetAllGameAnnouncementsResponse> getAllAnnouncementsRequest(const Fopzo::Generated::GetAllGameAnnouncementsRequest& req);
    } GameAnnouncementRemoteService;
    struct BoltIdAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit BoltIdAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::BoltIdUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::BoltIdUnLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::BoltIdAuthResponse> encryptedAuth2Request(const Fopzo::Generated::BoltIdAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::BoltIdLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::BoltIdLinkAuthRequest& req);
    } BoltIdAuthRemoteService;
    struct AccountLinkRemoteServiceStruct {
        FopzoClient* owner_;
        explicit AccountLinkRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetLinkedAuthResponse> getLinkedAuthRequest(const Fopzo::Generated::GetLinkedAuthRequest& req);
    } AccountLinkRemoteService;
    struct ReferralRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ReferralRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::FindReferralStateResponse> findPlayerStateRequest(const Fopzo::Generated::FindReferralStateRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRecruitByIdResponse> getRecruitByIdRequest(const Fopzo::Generated::GetRecruitByIdRequest& req);
        std::unique_ptr<Fopzo::Generated::GetReferralPlayerStateResponse> getPlayerStateRequest(const Fopzo::Generated::GetReferralPlayerStateRequest& req);
        std::unique_ptr<Fopzo::Generated::SubscribeToCommanderResponse> subscribeToCommanderRequest(const Fopzo::Generated::SubscribeToCommanderRequest& req);
        std::unique_ptr<Fopzo::Generated::GetReferralSystemSettingsResponse> getSettingsRequest(const Fopzo::Generated::GetReferralSystemSettingsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRecruitsByOffsetResponse> getRecruitsRequest(const Fopzo::Generated::GetRecruitsByOffsetRequest& req);
    } ReferralRemoteService;
    struct TwitchAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit TwitchAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::TwitchUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::TwitchUnLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::TwitchLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::TwitchLinkAuthRequest& req);
    } TwitchAuthRemoteService;
    struct DlcRemoteServiceStruct {
        FopzoClient* owner_;
        explicit DlcRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::DlcResponse> getAllReleasedDlcRequest(const Fopzo::Generated::ReleasedDlcRequest& req);
        std::unique_ptr<Fopzo::Generated::DlcResponse> getAllDlcRequest(const Fopzo::Generated::PreviewDlcRequest& req);
    } DlcRemoteService;
    struct RentMarketRemoteServiceStruct {
        FopzoClient* owner_;
        explicit RentMarketRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse> getFilteredRentTradeOpenSaleRequestsRequest(const Fopzo::Generated::GetRentTradeOpenSaleRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateRentSaleResponse> createRentSaleRequest(const Fopzo::Generated::CreateRentSaleRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRentTradesResponse> getRentTradesRequest(const Fopzo::Generated::GetRentTradesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRentMarketSettingsResponse> getRentMarketSettingsRequest(const Fopzo::Generated::GetRentMarketSettingsRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateRentPurchaseRequestResponse> createRentPurchaseRequestRequest(const Fopzo::Generated::CreateRentPurchaseRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerRentOpenRequestsResponse> getPlayerRentOpenRequestsRequest(const Fopzo::Generated::GetPlayerRentOpenRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerRentClosedRequestsCountResponse> getPlayerRentClosedRequestsCountRequest(const Fopzo::Generated::GetPlayerRentClosedRequestsCountRequest& req);
        std::unique_ptr<Fopzo::Generated::CancelRentRequestResponse> cancelRentRequestRequest(const Fopzo::Generated::CancelRentRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateRentPurchaseRequestBySaleResponse> createRentPurchaseRequestBySaleRequest(const Fopzo::Generated::CreateRentPurchaseRequestBySaleRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse> getRentTradeOpenSaleRequestsRequest(const Fopzo::Generated::GetRentTradeOpenSaleRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerRentProcessingRequestsResponse> getPlayerRentProcessingRequestsRequest(const Fopzo::Generated::GetPlayerRentProcessingRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRentTradeOpenPurchaseRequestsResponse> getRentTradeOpenPurchaseRequestsRequest(const Fopzo::Generated::GetRentTradeOpenPurchaseRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerRentClosedRequestsResponse> getPlayerRentClosedRequestsRequest(const Fopzo::Generated::GetPlayerRentClosedRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRentTradeResponse> getRentTradeRequest(const Fopzo::Generated::GetRentTradeRequest& req);
    } RentMarketRemoteService;
    struct HandshakeRemoteServiceStruct {
        FopzoClient* owner_;
        explicit HandshakeRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::HandshakeResponse> encryptedHandshakeRequest(const Fopzo::Generated::Handshake& req);
    } HandshakeRemoteService;
    struct GameSeasonRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameSeasonRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameSeasonRemoteService;
    struct FriendsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit FriendsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetPlayerFriendsResponse> getPlayerFriends2Request(const Fopzo::Generated::GetPlayerFriendsRequest& req);
        std::unique_ptr<Fopzo::Generated::IgnoreAllFriendRequestsResponse> ignoreAllFriendRequestsRequest(const Fopzo::Generated::IgnoreAllFriendRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::SearchPlayersResponse> searchPlayers2Request(const Fopzo::Generated::SearchPlayersRequest& req);
        std::unique_ptr<Fopzo::Generated::RemoveFriendResponse> removeFriend2Request(const Fopzo::Generated::RemoveFriendRequest& req);
        std::unique_ptr<Fopzo::Generated::IgnoreFriendRequestResponse> ignoreFriendRequest2Request(const Fopzo::Generated::IgnoreFriendRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::SendFriendRequestResponse> sendFriendRequest2Request(const Fopzo::Generated::SendFriendRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerFriendByIdResponse> getPlayerFriendById2Request(const Fopzo::Generated::GetPlayerFriendByIdRequest& req);
        std::unique_ptr<Fopzo::Generated::AcceptFriendRequestResponse> acceptFriendRequest2Request(const Fopzo::Generated::AcceptFriendRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerFriendByUidResponse> getPlayerFriendByUid2Request(const Fopzo::Generated::GetPlayerFriendByUidRequest& req);
        std::unique_ptr<Fopzo::Generated::BlockFriendResponse> blockFriend2Request(const Fopzo::Generated::BlockFriendRequest& req);
        std::unique_ptr<Fopzo::Generated::UnblockFriendResponse> unblockFriend2Request(const Fopzo::Generated::UnblockFriendRequest& req);
        std::unique_ptr<Fopzo::Generated::RevokeFriendRequestResponse> revokeFriendRequest2Request(const Fopzo::Generated::RevokeFriendRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerFriendsIdsResponse> getPlayerFriendsIds2Request(const Fopzo::Generated::GetPlayerFriendsIdsRequest& req);
    } FriendsRemoteService;
    struct GSMatchesRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GSMatchesRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GSMatchesRemoteService;
    struct AppleIdAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit AppleIdAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::AppleIdLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::AppleIdLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::AppleIdAuthResponse> encryptedAuth2Request(const Fopzo::Generated::AppleIdAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::AppleIdUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::AppleIdUnLinkAuthRequest& req);
    } AppleIdAuthRemoteService;
    struct GuestAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GuestAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GuestAuthRemoteService;
    struct LeaderboardRemoteServiceStruct {
        FopzoClient* owner_;
        explicit LeaderboardRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } LeaderboardRemoteService;
    struct GameEventRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameEventRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::ProgressChallengeResponse> processChallengeRequest(const Fopzo::Generated::ProgressChallengeRequest& req);
        std::unique_ptr<Fopzo::Generated::GetCachedPlayerGameEventsResponse> getCachedPlayerGameEventsRequest(const Fopzo::Generated::GetCachedPlayerGameEventsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerGameEventProgressResponse> getPlayerGameEventProgressRequest(const Fopzo::Generated::GetPlayerGameEventProgressRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerGameEventsProgressesResponse> getPlayerGameEventsProgressesRequest(const Fopzo::Generated::GetPlayerGameEventsProgressesRequest& req);
    } GameEventRemoteService;
    struct GlobalChatRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GlobalChatRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GlobalChatRemoteService;
    struct GameServerAchievementRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerAchievementRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerAchievementRemoteService;
    struct PlayerStatsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit PlayerStatsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::StorePlayerStatsResponse> storeStats2Request(const Fopzo::Generated::StorePlayerStatsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetCurrentStatsResponse> getCurrentStatsRequest(const Fopzo::Generated::GetCurrentStatsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerStatsResponse> getPlayerStats2Request(const Fopzo::Generated::GetPlayerStatsRequest& req);
    } PlayerStatsRemoteService;
    struct VkAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit VkAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::VkAuthResponse> encryptedAuth2Request(const Fopzo::Generated::VkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::VkLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::VkLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::VkUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::VkUnLinkAuthRequest& req);
    } VkAuthRemoteService;
    struct ChatRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ChatRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::SendFriendMsgResponse> sendFriendMsg2Request(const Fopzo::Generated::SendFriendMsgRequest& req);
        std::unique_ptr<Fopzo::Generated::DeleteFriendMsgsResponse> deleteFriendMsgs2Request(const Fopzo::Generated::DeleteFriendMsgsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetFriendMsgsByOffsetResponse> getFriendMsgsByOffset2Request(const Fopzo::Generated::GetFriendMsgsByOffsetRequest& req);
        std::unique_ptr<Fopzo::Generated::ReadFriendMsgsResponse> readFriendMsgs2Request(const Fopzo::Generated::ReadFriendMsgsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetChatUserResponse> getChatUserRequest(const Fopzo::Generated::GetChatUserRequest& req);
        std::unique_ptr<Fopzo::Generated::GetChatUsersLiteResponse> getChatUsersLiteRequest(const Fopzo::Generated::GetChatUsersLiteRequest& req);
    } ChatRemoteService;
    struct SeasonalStatsRemoteServiceStruct {
        FopzoClient* owner_;
        explicit SeasonalStatsRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetPlayerStatsForSeasonResponse> getPlayerStatsForSeasonRequest(const Fopzo::Generated::GetPlayerStatsForSeasonRequest& req);
        std::unique_ptr<Fopzo::Generated::GetCurrentClanStatsForSeasonResponse> getCurrentClanStatsForSeasonRequest(const Fopzo::Generated::GetCurrentClanStatsForSeasonRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerStatsForSeasonResponse> getStatsForSeasonRequest(const Fopzo::Generated::GetStatsForSeasonRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanStatsForSeasonResponse> getClanStatsForSeasonRequest(const Fopzo::Generated::GetClanStatsForSeasonRequest& req);
    } SeasonalStatsRemoteService;
    struct GetAppsInAppRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GetAppsInAppRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetAppsBuyInappResponse> buyInAppRequest(const Fopzo::Generated::GetAppsBuyInappRequest& req);
    } GetAppsInAppRemoteService;
    struct RateGameRemoteServiceStruct {
        FopzoClient* owner_;
        explicit RateGameRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::RateGameResponse> rateGameRequest(const Fopzo::Generated::RateGameRequest& req);
        std::unique_ptr<Fopzo::Generated::AskLaterResponse> askLaterRequest(const Fopzo::Generated::AskLaterRequest& req);
        std::unique_ptr<Fopzo::Generated::GetLastRateGameResponse> getLastRateGameRequest(const Fopzo::Generated::GetLastRateGameRequest& req);
        std::unique_ptr<Fopzo::Generated::DontAskLaterResponse> dontAskLaterRequest(const Fopzo::Generated::DontAskLaterRequest& req);
    } RateGameRemoteService;
    struct GoogleInAppRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GoogleInAppRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GoogleBuyInappResponse> buyInApp2Request(const Fopzo::Generated::GoogleBuyInappRequest& req);
    } GoogleInAppRemoteService;
    struct ClanRemoteServiceStruct {
        FopzoClient* owner_;
        explicit ClanRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetPlayerInviteRequestsResponse> getPlayerInviteRequests2Request(const Fopzo::Generated::GetPlayerInviteRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanInviteRequestsResponse> getClanInviteRequests2Request(const Fopzo::Generated::GetClanInviteRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::AssignRoleToMemberResponse> assignRoleToMember2Request(const Fopzo::Generated::AssignRoleToMemberRequest& req);
        std::unique_ptr<Fopzo::Generated::CancelJoinRequestResponse> cancelJoinRequest2Request(const Fopzo::Generated::CancelJoinRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::FindClanResponse> findClan2Request(const Fopzo::Generated::FindClanRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanByIdResponse> getClanById2Request(const Fopzo::Generated::GetClanByIdRequest& req);
        std::unique_ptr<Fopzo::Generated::LeaveClanResponse> leaveClan2Request(const Fopzo::Generated::LeaveClanRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanClosedInviteRequestsCountResponse> getClanClosedInviteRequestsCount2Request(const Fopzo::Generated::GetClanClosedInviteRequestsCountRequest& req);
        std::unique_ptr<Fopzo::Generated::DeclineJoinRequestResponse> declineJoinRequest2Request(const Fopzo::Generated::DeclineJoinRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanByTagResponse> getClanByTagRequest(const Fopzo::Generated::GetClanByTagRequest& req);
        std::unique_ptr<Fopzo::Generated::ChangeClanTypeResponse> changeClanType2Request(const Fopzo::Generated::ChangeClanTypeRequest& req);
        std::unique_ptr<Fopzo::Generated::CancelInviteRequestResponse> cancelInviteRequest2Request(const Fopzo::Generated::CancelInviteRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::AssignLeaderRoleResponse> assignLeaderRole2Request(const Fopzo::Generated::AssignLeaderRoleRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanMembersResponse> getClanMembers2Request(const Fopzo::Generated::GetClanMembersRequest& req);
        std::unique_ptr<Fopzo::Generated::CreateClanResponse> createClan2Request(const Fopzo::Generated::CreateClanRequest& req);
        std::unique_ptr<Fopzo::Generated::SetClanAvatarResponse> setClanAvatar2Request(const Fopzo::Generated::SetClanAvatarRequest& req);
        std::unique_ptr<Fopzo::Generated::ValidateClanNameResponse> validateClanName2Request(const Fopzo::Generated::ValidateClanNameRequest& req);
        std::unique_ptr<Fopzo::Generated::RequestToJoinClanResponse> requestToJoinClan2Request(const Fopzo::Generated::RequestToJoinClanRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerClosedJoinRequestsCountResponse> getPlayerClosedJoinRequestsCount2Request(const Fopzo::Generated::GetPlayerClosedJoinRequestsCountRequest& req);
        std::unique_ptr<Fopzo::Generated::KickMemberResponse> kickMember2Request(const Fopzo::Generated::KickMemberRequest& req);
        std::unique_ptr<Fopzo::Generated::DeleteClosedInviteRequestResponse> deleteClosedInviteRequest2Request(const Fopzo::Generated::DeleteClosedInviteRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanJoinRequestsResponse> getClanJoinRequests2Request(const Fopzo::Generated::GetClanJoinRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRecommendedClansResponse> getRecommendedClans2Request(const Fopzo::Generated::GetRecommendedClansRequest& req);
        std::unique_ptr<Fopzo::Generated::DeleteClosedJoinRequestResponse> deleteClosedJoinRequest2Request(const Fopzo::Generated::DeleteClosedJoinRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanResponse> getClan2Request(const Fopzo::Generated::GetClanRequest& req);
        std::unique_ptr<Fopzo::Generated::GetRolesResponse> getRoles2Request(const Fopzo::Generated::GetRolesRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanSettingsResponse> getClanSettings2Request(const Fopzo::Generated::GetClanSettingsRequest& req);
        std::unique_ptr<Fopzo::Generated::InviteToClanResponse> inviteToClan2Request(const Fopzo::Generated::InviteToClanRequest& req);
        std::unique_ptr<Fopzo::Generated::ValidateClanTagResponse> validateClanTag2Request(const Fopzo::Generated::ValidateClanTagRequest& req);
        std::unique_ptr<Fopzo::Generated::SetClanDescriptionResponse> setClanDescription2Request(const Fopzo::Generated::SetClanDescriptionRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerJoinRequestsResponse> getPlayerJoinRequests2Request(const Fopzo::Generated::GetPlayerJoinRequestsRequest& req);
        std::unique_ptr<Fopzo::Generated::DeclineInviteRequestResponse> declineInviteRequest2Request(const Fopzo::Generated::DeclineInviteRequestRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanMembersByIdResponse> getClanMembersById2Request(const Fopzo::Generated::GetClanMembersByIdRequest& req);
        std::unique_ptr<Fopzo::Generated::GetClanJoinRequestsCountResponse> getClanJoinRequestsCount2Request(const Fopzo::Generated::GetClanJoinRequestsCountRequest& req);
        std::unique_ptr<Fopzo::Generated::GetPlayerInviteRequestsCountResponse> getPlayerInviteRequestsCount2Request(const Fopzo::Generated::GetPlayerInviteRequestsCountRequest& req);
    } ClanRemoteService;
    struct NewsFeedRemoteServiceStruct {
        FopzoClient* owner_;
        explicit NewsFeedRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GetItemsResponse> getItems2Request(const Fopzo::Generated::GetItemsRequest& req);
    } NewsFeedRemoteService;
    struct GameServerAccusationRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameServerAccusationRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
    } GameServerAccusationRemoteService;
    struct GameCenterAuthRemoteServiceStruct {
        FopzoClient* owner_;
        explicit GameCenterAuthRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::GameCenterLinkAuthResponse> linkAuthRequest(const Fopzo::Generated::GameCenterLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::GameCenterUnLinkAuthResponse> unLinkAuthRequest(const Fopzo::Generated::GameCenterUnLinkAuthRequest& req);
        std::unique_ptr<Fopzo::Generated::GameCenterAuthResponse> encryptedAuth2Request(const Fopzo::Generated::GameCenterAuthRequest& req);
    } GameCenterAuthRemoteService;
    struct AppStoreInAppRemoteServiceStruct {
        FopzoClient* owner_;
        explicit AppStoreInAppRemoteServiceStruct(FopzoClient* owner) : owner_(owner) {}
        std::unique_ptr<Fopzo::Generated::AppStoreBuyInappResponse> buyInApp2Request(const Fopzo::Generated::AppStoreBuyInappRequest& req);
    } AppStoreInAppRemoteService;
};