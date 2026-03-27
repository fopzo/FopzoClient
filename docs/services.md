# Services Reference

This page contains all available RPC methods grouped by their respective services.

## `encryptedAuth2Request`

Request type: [`FacebookAuthRequest`](schemes.md#facebookauthrequest)

**Returns:** [`Fopzo::Generated::FacebookAuthResponse`](schemes.md#facebookauthresponse)

### Example code
```cpp
Fopzo::Generated::FacebookAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `unLinkAuthRequest`

Request type: [`FacebookUnLinkAuthRequest`](schemes.md#facebookunlinkauthrequest)

**Returns:** [`Fopzo::Generated::FacebookUnLinkAuthResponse`](schemes.md#facebookunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::FacebookUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `linkAuthRequest`

Request type: [`FacebookLinkAuthRequest`](schemes.md#facebooklinkauthrequest)

**Returns:** [`Fopzo::Generated::FacebookLinkAuthResponse`](schemes.md#facebooklinkauthresponse)

### Example code
```cpp
Fopzo::Generated::FacebookLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `encryptedAuth2Request`

Request type: [`GoogleAuthRequest`](schemes.md#googleauthrequest)

**Returns:** [`Fopzo::Generated::GoogleAuthResponse`](schemes.md#googleauthresponse)

### Example code
```cpp
Fopzo::Generated::GoogleAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `linkAuthRequest`

Request type: [`GoogleLinkAuthRequest`](schemes.md#googlelinkauthrequest)

**Returns:** [`Fopzo::Generated::GoogleLinkAuthResponse`](schemes.md#googlelinkauthresponse)

### Example code
```cpp
Fopzo::Generated::GoogleLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `unLinkAuthRequest`

Request type: [`GoogleUnLinkAuthRequest`](schemes.md#googleunlinkauthrequest)

**Returns:** [`Fopzo::Generated::GoogleUnLinkAuthResponse`](schemes.md#googleunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::GoogleUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `buyInAppRequest`

Request type: [`AppGalleryBuyInappRequest`](schemes.md#appgallerybuyinapprequest)

**Returns:** [`Fopzo::Generated::AppGalleryBuyInappResponse`](schemes.md#appgallerybuyinappresponse)

### Example code
```cpp
Fopzo::Generated::AppGalleryBuyInappRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AppGalleryInAppRemoteService.buyInAppRequest(req);
```

---

## `createRequestEncryptedRequest`

Request type: [`CreateRequestEncryptedRequest`](schemes.md#createrequestencryptedrequest)

**Returns:** [`Fopzo::Generated::CreateRequestEncryptedResponse`](schemes.md#createrequestencryptedresponse)

### Example code
```cpp
Fopzo::Generated::CreateRequestEncryptedRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GdprRemoteService.createRequestEncryptedRequest(req);
```

---

## `deleteAccountRequest`

Request type: [`DeleteAccountRequest`](schemes.md#deleteaccountrequest)

**Returns:** [`Fopzo::Generated::DeleteAccountResponse`](schemes.md#deleteaccountresponse)

### Example code
```cpp
Fopzo::Generated::DeleteAccountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GdprRemoteService.deleteAccountRequest(req);
```

---

## `recoverAccountRequest`

Request type: [`RecoverAccountRequest`](schemes.md#recoveraccountrequest)

**Returns:** [`Fopzo::Generated::RecoverAccountResponse`](schemes.md#recoveraccountresponse)

### Example code
```cpp
Fopzo::Generated::RecoverAccountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GdprRemoteService.recoverAccountRequest(req);
```

---

## `getIdTokenRequest`

Request type: [`GetIdTokenRequest`](schemes.md#getidtokenrequest)

**Returns:** [`Fopzo::Generated::GetIdTokenResponse`](schemes.md#getidtokenresponse)

### Example code
```cpp
Fopzo::Generated::GetIdTokenRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->IdTokenRemoteService.getIdTokenRequest(req);
```

---

## `unsubscribeCreatorRequest`

Request type: [`UnsubscribeCreatorRequest`](schemes.md#unsubscribecreatorrequest)

**Returns:** [`Fopzo::Generated::UnsubscribeCreatorResponse`](schemes.md#unsubscribecreatorresponse)

### Example code
```cpp
Fopzo::Generated::UnsubscribeCreatorRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ContentCreatorRemoteService.unsubscribeCreatorRequest(req);
```

---

## `findCreatorRequest`

Request type: [`FindCreatorRequest`](schemes.md#findcreatorrequest)

**Returns:** [`Fopzo::Generated::FindCreatorResponse`](schemes.md#findcreatorresponse)

### Example code
```cpp
Fopzo::Generated::FindCreatorRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ContentCreatorRemoteService.findCreatorRequest(req);
```

---

## `findCreatorSubscriptionRequest`

Request type: [`GetSubscribedCreatorRequest`](schemes.md#getsubscribedcreatorrequest)

**Returns:** [`Fopzo::Generated::GetSubscribedCreatorResponse`](schemes.md#getsubscribedcreatorresponse)

### Example code
```cpp
Fopzo::Generated::GetSubscribedCreatorRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ContentCreatorRemoteService.findCreatorSubscriptionRequest(req);
```

---

## `subscribeCreatorRequest`

Request type: [`SubscribeCreatorRequest`](schemes.md#subscribecreatorrequest)

**Returns:** [`Fopzo::Generated::SubscribeCreatorResponse`](schemes.md#subscribecreatorresponse)

### Example code
```cpp
Fopzo::Generated::SubscribeCreatorRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ContentCreatorRemoteService.subscribeCreatorRequest(req);
```

---

## `subscribe2Request`

Request type: [`SubscribeRequest`](schemes.md#subscriberequest)

**Returns:** [`Fopzo::Generated::SubscribeResponse`](schemes.md#subscriberesponse)

### Example code
```cpp
Fopzo::Generated::SubscribeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->BoltRemoteService.subscribe2Request(req);
```

---

## `unsubscribe2Request`

Request type: [`UnsubscribeRequest`](schemes.md#unsubscriberequest)

**Returns:** [`Fopzo::Generated::UnsubscribeResponse`](schemes.md#unsubscriberesponse)

### Example code
```cpp
Fopzo::Generated::UnsubscribeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->BoltRemoteService.unsubscribe2Request(req);
```

---

## `encryptedAuth2Request`

Request type: [`TestAuthRequest`](schemes.md#testauthrequest)

**Returns:** [`Fopzo::Generated::TestAuthResponse`](schemes.md#testauthresponse)

### Example code
```cpp
Fopzo::Generated::TestAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `unLinkAuthRequest`

Request type: [`HuaweiUnLinkAuthRequest`](schemes.md#huaweiunlinkauthrequest)

**Returns:** [`Fopzo::Generated::HuaweiUnLinkAuthResponse`](schemes.md#huaweiunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::HuaweiUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `linkAuthRequest`

Request type: [`HuaweiLinkAuthRequest`](schemes.md#huaweilinkauthrequest)

**Returns:** [`Fopzo::Generated::HuaweiLinkAuthResponse`](schemes.md#huaweilinkauthresponse)

### Example code
```cpp
Fopzo::Generated::HuaweiLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `encryptedAuth2Request`

Request type: [`HuaweiAuthRequest`](schemes.md#huaweiauthrequest)

**Returns:** [`Fopzo::Generated::HuaweiAuthResponse`](schemes.md#huaweiauthresponse)

### Example code
```cpp
Fopzo::Generated::HuaweiAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `getOtherPlayerPublicItemsEncryptedRequest`

Request type: [`GetAllOtherPlayerPublicItemsRequest`](schemes.md#getallotherplayerpublicitemsrequest)

**Returns:** [`Fopzo::Generated::GetAllOtherPlayerPublicItemsResponse`](schemes.md#getallotherplayerpublicitemsresponse)

### Example code
```cpp
Fopzo::Generated::GetAllOtherPlayerPublicItemsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.getOtherPlayerPublicItemsEncryptedRequest(req);
```

---

## `activateCouponEncryptedRequest`

Request type: [`ActivateCouponRequest`](schemes.md#activatecouponrequest)

**Returns:** [`Fopzo::Generated::ActivateCouponResponse`](schemes.md#activatecouponresponse)

### Example code
```cpp
Fopzo::Generated::ActivateCouponRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.activateCouponEncryptedRequest(req);
```

---

## `setInventoryItemPublicityRequest`

Request type: [`SetInventoryItemPublicityRequest`](schemes.md#setinventoryitempublicityrequest)

**Returns:** [`Fopzo::Generated::SetInventoryItemPublicityResponse`](schemes.md#setinventoryitempublicityresponse)

### Example code
```cpp
Fopzo::Generated::SetInventoryItemPublicityRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.setInventoryItemPublicityRequest(req);
```

---

## `executeRecipeEncrypted2Request`

Request type: [`ExecuteRecipeRequest`](schemes.md#executereciperequest)

**Returns:** [`Fopzo::Generated::ExecuteRecipeEncrypted2Response`](schemes.md#executerecipeencrypted2response)

### Example code
```cpp
Fopzo::Generated::ExecuteRecipeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.executeRecipeEncrypted2Request(req);
```

---

## `setInventoryItemFlagsEncryptedRequest`

Request type: [`SetInventoryItemFlagsRequest`](schemes.md#setinventoryitemflagsrequest)

**Returns:** [`Fopzo::Generated::SetInventoryItemFlagsResponse`](schemes.md#setinventoryitemflagsresponse)

### Example code
```cpp
Fopzo::Generated::SetInventoryItemFlagsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.setInventoryItemFlagsEncryptedRequest(req);
```

---

## `getPlayerInventoryEncryptedRequest`

Request type: [`GetPlayerInventoryRequest`](schemes.md#getplayerinventoryrequest)

**Returns:** [`Fopzo::Generated::GetPlayerInventoryResponse`](schemes.md#getplayerinventoryresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerInventoryRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.getPlayerInventoryEncryptedRequest(req);
```

---

## `unmountInventoryItemEncryptedRequest`

Request type: [`UnmountInventoryItemRequest`](schemes.md#unmountinventoryitemrequest)

**Returns:** [`Fopzo::Generated::UnmountInventoryItemResponse`](schemes.md#unmountinventoryitemresponse)

### Example code
```cpp
Fopzo::Generated::UnmountInventoryItemRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.unmountInventoryItemEncryptedRequest(req);
```

---

## `getInventoryItemDefinitionsEncryptedRequest`

Request type: [`GetInventoryItemDefinitionsRequest`](schemes.md#getinventoryitemdefinitionsrequest)

**Returns:** [`Fopzo::Generated::GetInventoryItemDefinitionsResponse`](schemes.md#getinventoryitemdefinitionsresponse)

### Example code
```cpp
Fopzo::Generated::GetInventoryItemDefinitionsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.getInventoryItemDefinitionsEncryptedRequest(req);
```

---

## `mountInventoryItemEncryptedRequest`

Request type: [`MountInventoryItemRequest`](schemes.md#mountinventoryitemrequest)

**Returns:** [`Fopzo::Generated::MountInventoryItemResponse`](schemes.md#mountinventoryitemresponse)

### Example code
```cpp
Fopzo::Generated::MountInventoryItemRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.mountInventoryItemEncryptedRequest(req);
```

---

## `getRecipeInfoRequest`

Request type: [`GetRecipeInfoRequest`](schemes.md#getrecipeinforequest)

**Returns:** [`Fopzo::Generated::GetRecipeInfoResponse`](schemes.md#getrecipeinforesponse)

### Example code
```cpp
Fopzo::Generated::GetRecipeInfoRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.getRecipeInfoRequest(req);
```

---

## `setInventoryItemsPropertiesEncryptedRequest`

Request type: [`SetItemsModificationsRequest`](schemes.md#setitemsmodificationsrequest)

**Returns:** [`Fopzo::Generated::SetItemsModificationsResponse`](schemes.md#setitemsmodificationsresponse)

### Example code
```cpp
Fopzo::Generated::SetItemsModificationsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.setInventoryItemsPropertiesEncryptedRequest(req);
```

---

## `buyInventoryItemEncryptedRequest`

Request type: [`BuyInventoryItemRequest`](schemes.md#buyinventoryitemrequest)

**Returns:** [`Fopzo::Generated::BuyInventoryItemResponse`](schemes.md#buyinventoryitemresponse)

### Example code
```cpp
Fopzo::Generated::BuyInventoryItemRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.buyInventoryItemEncryptedRequest(req);
```

---

## `getInventoryItemPropertyDefinitionsEncryptedRequest`

Request type: [`GetInventoryItemPropertyDefinitionsRequest`](schemes.md#getinventoryitempropertydefinitionsrequest)

**Returns:** [`Fopzo::Generated::GetInventoryItemPropertyDefinitionsResponse`](schemes.md#getinventoryitempropertydefinitionsresponse)

### Example code
```cpp
Fopzo::Generated::GetInventoryItemPropertyDefinitionsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->InventoryRemoteService.getInventoryItemPropertyDefinitionsEncryptedRequest(req);
```

---

## `getGameSettingsEncrypted2Request`

Request type: [`GetGameSettingsEncryptedRequest`](schemes.md#getgamesettingsencryptedrequest)

**Returns:** [`Fopzo::Generated::GetGameSettingsEncryptedResponse`](schemes.md#getgamesettingsencryptedresponse)

### Example code
```cpp
Fopzo::Generated::GetGameSettingsEncryptedRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GameSettingsRemoteService.getGameSettingsEncrypted2Request(req);
```

---

## `getSpecialOffersRequest`

Request type: [`GetSpecialOffersRequest`](schemes.md#getspecialoffersrequest)

**Returns:** [`Fopzo::Generated::GetSpecialOffersResponse`](schemes.md#getspecialoffersresponse)

### Example code
```cpp
Fopzo::Generated::GetSpecialOffersRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->OffersRemoteService.getSpecialOffersRequest(req);
```

---

## `changeLobbyOtherPlayerType2Request`

Request type: [`ChangeLobbyOtherPlayerTypeRequest`](schemes.md#changelobbyotherplayertyperequest)

**Returns:** [`Fopzo::Generated::ChangeLobbyOtherPlayerTypeResponse`](schemes.md#changelobbyotherplayertyperesponse)

### Example code
```cpp
Fopzo::Generated::ChangeLobbyOtherPlayerTypeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.changeLobbyOtherPlayerType2Request(req);
```

---

## `getInvitesToLobby2Request`

Request type: [`GetInvitesToLobbyRequest`](schemes.md#getinvitestolobbyrequest)

**Returns:** [`Fopzo::Generated::GetInvitesToLobbyResponse`](schemes.md#getinvitestolobbyresponse)

### Example code
```cpp
Fopzo::Generated::GetInvitesToLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.getInvitesToLobby2Request(req);
```

---

## `getLobby2Request`

Request type: [`GetLobbyRequest`](schemes.md#getlobbyrequest)

**Returns:** [`Fopzo::Generated::GetLobbyResponse`](schemes.md#getlobbyresponse)

### Example code
```cpp
Fopzo::Generated::GetLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.getLobby2Request(req);
```

---

## `sendLobbyChatMsg2Request`

Request type: [`SendLobbyChatMsgRequest`](schemes.md#sendlobbychatmsgrequest)

**Returns:** [`Fopzo::Generated::SendLobbyChatMsgResponse`](schemes.md#sendlobbychatmsgresponse)

### Example code
```cpp
Fopzo::Generated::SendLobbyChatMsgRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.sendLobbyChatMsg2Request(req);
```

---

## `refuseInvitationToLobby2Request`

Request type: [`RefuseInvitationToLobbyRequest`](schemes.md#refuseinvitationtolobbyrequest)

**Returns:** [`Fopzo::Generated::RefuseInvitationToLobbyResponse`](schemes.md#refuseinvitationtolobbyresponse)

### Example code
```cpp
Fopzo::Generated::RefuseInvitationToLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.refuseInvitationToLobby2Request(req);
```

---

## `kickPlayerFromLobby2Request`

Request type: [`KickPlayerFromLobbyRequest`](schemes.md#kickplayerfromlobbyrequest)

**Returns:** [`Fopzo::Generated::KickPlayerFromLobbyResponse`](schemes.md#kickplayerfromlobbyresponse)

### Example code
```cpp
Fopzo::Generated::KickPlayerFromLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.kickPlayerFromLobby2Request(req);
```

---

## `setLobbyType2Request`

Request type: [`SetLobbyTypeRequest`](schemes.md#setlobbytyperequest)

**Returns:** [`Fopzo::Generated::SetLobbyTypeResponse`](schemes.md#setlobbytyperesponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyTypeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyType2Request(req);
```

---

## `invitePlayerToLobbyAs2Request`

Request type: [`InvitePlayerToLobbyAsRequest`](schemes.md#inviteplayertolobbyasrequest)

**Returns:** [`Fopzo::Generated::InvitePlayerToLobbyAsResponse`](schemes.md#inviteplayertolobbyasresponse)

### Example code
```cpp
Fopzo::Generated::InvitePlayerToLobbyAsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.invitePlayerToLobbyAs2Request(req);
```

---

## `setLobbyJoinable2Request`

Request type: [`SetLobbyJoinableRequest`](schemes.md#setlobbyjoinablerequest)

**Returns:** [`Fopzo::Generated::SetLobbyJoinableResponse`](schemes.md#setlobbyjoinableresponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyJoinableRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyJoinable2Request(req);
```

---

## `setLobbyData2Request`

Request type: [`SetLobbyDataRequest`](schemes.md#setlobbydatarequest)

**Returns:** [`Fopzo::Generated::SetLobbyDataResponse`](schemes.md#setlobbydataresponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyDataRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyData2Request(req);
```

---

## `joinLobbyAs2Request`

Request type: [`JoinLobbyAsRequest`](schemes.md#joinlobbyasrequest)

**Returns:** [`Fopzo::Generated::JoinLobbyAsResponse`](schemes.md#joinlobbyasresponse)

### Example code
```cpp
Fopzo::Generated::JoinLobbyAsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.joinLobbyAs2Request(req);
```

---

## `setLobbyOwner2Request`

Request type: [`SetLobbyOwnerRequest`](schemes.md#setlobbyownerrequest)

**Returns:** [`Fopzo::Generated::SetLobbyOwnerResponse`](schemes.md#setlobbyownerresponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyOwnerRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyOwner2Request(req);
```

---

## `revokePlayerInvitationToLobby2Request`

Request type: [`RevokePlayerInvitationToLobbyRequest`](schemes.md#revokeplayerinvitationtolobbyrequest)

**Returns:** [`Fopzo::Generated::RevokePlayerInvitationToLobbyResponse`](schemes.md#revokeplayerinvitationtolobbyresponse)

### Example code
```cpp
Fopzo::Generated::RevokePlayerInvitationToLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.revokePlayerInvitationToLobby2Request(req);
```

---

## `leaveLobby2Request`

Request type: [`LeaveLobbyRequest`](schemes.md#leavelobbyrequest)

**Returns:** [`Fopzo::Generated::LeaveLobbyResponse`](schemes.md#leavelobbyresponse)

### Example code
```cpp
Fopzo::Generated::LeaveLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.leaveLobby2Request(req);
```

---

## `createLobbyWithSpectators2Request`

Request type: [`CreateLobbyWithSpectatorsRequest`](schemes.md#createlobbywithspectatorsrequest)

**Returns:** [`Fopzo::Generated::CreateLobbyWithSpectatorsResponse`](schemes.md#createlobbywithspectatorsresponse)

### Example code
```cpp
Fopzo::Generated::CreateLobbyWithSpectatorsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.createLobbyWithSpectators2Request(req);
```

---

## `setLobbyMaxSpectators2Request`

Request type: [`SetLobbyMaxSpectatorsRequest`](schemes.md#setlobbymaxspectatorsrequest)

**Returns:** [`Fopzo::Generated::SetLobbyMaxSpectatorsResponse`](schemes.md#setlobbymaxspectatorsresponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyMaxSpectatorsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyMaxSpectators2Request(req);
```

---

## `setLobbyMaxMembers2Request`

Request type: [`SetLobbyMaxMembersRequest`](schemes.md#setlobbymaxmembersrequest)

**Returns:** [`Fopzo::Generated::SetLobbyMaxMembersResponse`](schemes.md#setlobbymaxmembersresponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyMaxMembersRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyMaxMembers2Request(req);
```

---

## `searchLobbyRequest`

Request type: [`SearchLobbyRequest`](schemes.md#searchlobbyrequest)

**Returns:** [`Fopzo::Generated::SearchLobbyResponse`](schemes.md#searchlobbyresponse)

### Example code
```cpp
Fopzo::Generated::SearchLobbyRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.searchLobbyRequest(req);
```

---

## `setLobbyPhotonGame2Request`

Request type: [`SetLobbyPhotonGameRequest`](schemes.md#setlobbyphotongamerequest)

**Returns:** [`Fopzo::Generated::SetLobbyPhotonGameResponse`](schemes.md#setlobbyphotongameresponse)

### Example code
```cpp
Fopzo::Generated::SetLobbyPhotonGameRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchmakingRemoteService.setLobbyPhotonGame2Request(req);
```

---

## `getPlayerProcessingRequests2Request`

Request type: [`GetPlayerProcessingRequestRequest`](schemes.md#getplayerprocessingrequestrequest)

**Returns:** [`Fopzo::Generated::GetPlayerProcessingRequestResponse`](schemes.md#getplayerprocessingrequestresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerProcessingRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getPlayerProcessingRequests2Request(req);
```

---

## `getFilteredTradeOpenSaleRequestsRequest`

Request type: [`GetTradeOpenSaleRequestsRequest`](schemes.md#gettradeopensalerequestsrequest)

**Returns:** [`Fopzo::Generated::GetTradeOpenSaleRequestsResponse`](schemes.md#gettradeopensalerequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetTradeOpenSaleRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getFilteredTradeOpenSaleRequestsRequest(req);
```

---

## `createPurchaseRequestBySale2Request`

Request type: [`CreatePurchaseRequestBySaleRequest`](schemes.md#createpurchaserequestbysalerequest)

**Returns:** [`Fopzo::Generated::CreatePurchaseRequestBySaleResponse`](schemes.md#createpurchaserequestbysaleresponse)

### Example code
```cpp
Fopzo::Generated::CreatePurchaseRequestBySaleRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.createPurchaseRequestBySale2Request(req);
```

---

## `getTrades2Request`

Request type: [`GetTradesRequest`](schemes.md#gettradesrequest)

**Returns:** [`Fopzo::Generated::GetTradesResponse`](schemes.md#gettradesresponse)

### Example code
```cpp
Fopzo::Generated::GetTradesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getTrades2Request(req);
```

---

## `getPlayerOpenRequests2Request`

Request type: [`GetPlayerOpenRequestsRequest`](schemes.md#getplayeropenrequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerOpenRequestsResponse`](schemes.md#getplayeropenrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerOpenRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getPlayerOpenRequests2Request(req);
```

---

## `cancelRequest2Request`

Request type: [`CancelRequestRequest`](schemes.md#cancelrequestrequest)

**Returns:** [`Fopzo::Generated::CancelRequestResponse`](schemes.md#cancelrequestresponse)

### Example code
```cpp
Fopzo::Generated::CancelRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.cancelRequest2Request(req);
```

---

## `getTradeOpenSaleRequests2Request`

Request type: [`GetTradeOpenSaleRequestsRequest`](schemes.md#gettradeopensalerequestsrequest)

**Returns:** [`Fopzo::Generated::GetTradeOpenSaleRequestsResponse`](schemes.md#gettradeopensalerequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetTradeOpenSaleRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getTradeOpenSaleRequests2Request(req);
```

---

## `createSaleRequest`

Request type: [`CreateSaleRequest`](schemes.md#createsalerequest)

**Returns:** [`Fopzo::Generated::CreateSaleResponse`](schemes.md#createsaleresponse)

### Example code
```cpp
Fopzo::Generated::CreateSaleRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.createSaleRequest(req);
```

---

## `createPurchaseRequest2Request`

Request type: [`CreatePurchaseRequestRequest`](schemes.md#createpurchaserequestrequest)

**Returns:** [`Fopzo::Generated::CreatePurchaseRequestResponse`](schemes.md#createpurchaserequestresponse)

### Example code
```cpp
Fopzo::Generated::CreatePurchaseRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.createPurchaseRequest2Request(req);
```

---

## `getMarketplaceSettings2Request`

Request type: [`GetMarketplaceSettingsRequest`](schemes.md#getmarketplacesettingsrequest)

**Returns:** [`Fopzo::Generated::GetMarketplaceSettingsResponse`](schemes.md#getmarketplacesettingsresponse)

### Example code
```cpp
Fopzo::Generated::GetMarketplaceSettingsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getMarketplaceSettings2Request(req);
```

---

## `createMultipleSalesRequest`

Request type: [`CreateMultipleSalesRequest`](schemes.md#createmultiplesalesrequest)

**Returns:** [`Fopzo::Generated::CreateMultipleSalesResponse`](schemes.md#createmultiplesalesresponse)

### Example code
```cpp
Fopzo::Generated::CreateMultipleSalesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.createMultipleSalesRequest(req);
```

---

## `getTrade2Request`

Request type: [`GetTradeRequest`](schemes.md#gettraderequest)

**Returns:** [`Fopzo::Generated::GetTradeResponse`](schemes.md#gettraderesponse)

### Example code
```cpp
Fopzo::Generated::GetTradeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getTrade2Request(req);
```

---

## `getPlayerClosedRequests2Request`

Request type: [`GetPlayerClosedRequestsRequest`](schemes.md#getplayerclosedrequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerClosedRequestsResponse`](schemes.md#getplayerclosedrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerClosedRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MarketplaceRemoteService.getPlayerClosedRequests2Request(req);
```

---

## `getSystemMessageDetailsRequest`

Request type: [`GetSystemMessageDetailsRequest`](schemes.md#getsystemmessagedetailsrequest)

**Returns:** [`Fopzo::Generated::GetSystemMessageDetailsResponse`](schemes.md#getsystemmessagedetailsresponse)

### Example code
```cpp
Fopzo::Generated::GetSystemMessageDetailsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SystemMessagesRemoteService.getSystemMessageDetailsRequest(req);
```

---

## `countUnreadSystemMessagesRequest`

Request type: [`CountUnreadSystemMessagesRequest`](schemes.md#countunreadsystemmessagesrequest)

**Returns:** [`Fopzo::Generated::CountUnreadSystemMessagesResponse`](schemes.md#countunreadsystemmessagesresponse)

### Example code
```cpp
Fopzo::Generated::CountUnreadSystemMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SystemMessagesRemoteService.countUnreadSystemMessagesRequest(req);
```

---

## `deleteSystemMessagesRequest`

Request type: [`DeleteSystemMessagesRequest`](schemes.md#deletesystemmessagesrequest)

**Returns:** [`Fopzo::Generated::DeleteSystemMessagesResponse`](schemes.md#deletesystemmessagesresponse)

### Example code
```cpp
Fopzo::Generated::DeleteSystemMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SystemMessagesRemoteService.deleteSystemMessagesRequest(req);
```

---

## `getSystemMessagesRequest`

Request type: [`GetSystemMessagesRequest`](schemes.md#getsystemmessagesrequest)

**Returns:** [`Fopzo::Generated::GetSystemMessagesResponse`](schemes.md#getsystemmessagesresponse)

### Example code
```cpp
Fopzo::Generated::GetSystemMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SystemMessagesRemoteService.getSystemMessagesRequest(req);
```

---

## `readSystemMessagesRequest`

Request type: [`ReadSystemMessagesRequest`](schemes.md#readsystemmessagesrequest)

**Returns:** [`Fopzo::Generated::ReadSystemMessagesResponse`](schemes.md#readsystemmessagesresponse)

### Example code
```cpp
Fopzo::Generated::ReadSystemMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SystemMessagesRemoteService.readSystemMessagesRequest(req);
```

---

## `setPlayerSettings2Request`

Request type: [`SetPlayerSettingsRequest`](schemes.md#setplayersettingsrequest)

**Returns:** [`Fopzo::Generated::SetPlayerSettingsResponse`](schemes.md#setplayersettingsresponse)

### Example code
```cpp
Fopzo::Generated::SetPlayerSettingsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setPlayerSettings2Request(req);
```

---

## `setDefaultAvatarRequest`

Request type: [`SetDefaultAvatarRequest`](schemes.md#setdefaultavatarrequest)

**Returns:** [`Fopzo::Generated::SetDefaultAvatarResponse`](schemes.md#setdefaultavatarresponse)

### Example code
```cpp
Fopzo::Generated::SetDefaultAvatarRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setDefaultAvatarRequest(req);
```

---

## `getPlayerSettings2Request`

Request type: [`GetPlayerSettingsRequest`](schemes.md#getplayersettingsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerSettingsResponse`](schemes.md#getplayersettingsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerSettingsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.getPlayerSettings2Request(req);
```

---

## `setPlayerAvatar2Request`

Request type: [`SetPlayerAvatarRequest`](schemes.md#setplayeravatarrequest)

**Returns:** [`Fopzo::Generated::SetPlayerAvatarResponse`](schemes.md#setplayeravatarresponse)

### Example code
```cpp
Fopzo::Generated::SetPlayerAvatarRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setPlayerAvatar2Request(req);
```

---

## `setAwayStatus2Request`

Request type: [`SetAwayStatusRequest`](schemes.md#setawaystatusrequest)

**Returns:** [`Fopzo::Generated::SetAwayStatusResponse`](schemes.md#setawaystatusresponse)

### Example code
```cpp
Fopzo::Generated::SetAwayStatusRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setAwayStatus2Request(req);
```

---

## `getPlayer2Request`

Request type: [`GetPlayerRequest`](schemes.md#getplayerrequest)

**Returns:** [`Fopzo::Generated::GetPlayerResponse`](schemes.md#getplayerresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.getPlayer2Request(req);
```

---

## `setPlayerFirebaseToken2Request`

Request type: [`SetPlayerFirebaseTokenRequest`](schemes.md#setplayerfirebasetokenrequest)

**Returns:** [`Fopzo::Generated::SetPlayerFirebaseTokenResponse`](schemes.md#setplayerfirebasetokenresponse)

### Example code
```cpp
Fopzo::Generated::SetPlayerFirebaseTokenRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setPlayerFirebaseToken2Request(req);
```

---

## `setPlayerName2Request`

Request type: [`SetPlayerNameRequest`](schemes.md#setplayernamerequest)

**Returns:** [`Fopzo::Generated::SetPlayerNameResponse`](schemes.md#setplayernameresponse)

### Example code
```cpp
Fopzo::Generated::SetPlayerNameRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setPlayerName2Request(req);
```

---

## `setOnlineStatus2Request`

Request type: [`SetOnlineStatusRequest`](schemes.md#setonlinestatusrequest)

**Returns:** [`Fopzo::Generated::SetOnlineStatusResponse`](schemes.md#setonlinestatusresponse)

### Example code
```cpp
Fopzo::Generated::SetOnlineStatusRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerRemoteService.setOnlineStatus2Request(req);
```

---

## `readPlayerPublicFilesRequest`

Request type: [`ReadPlayerPublicFilesRequest`](schemes.md#readplayerpublicfilesrequest)

**Returns:** [`Fopzo::Generated::ReadPlayerPublicFilesResponse`](schemes.md#readplayerpublicfilesresponse)

### Example code
```cpp
Fopzo::Generated::ReadPlayerPublicFilesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->StorageRemoteService.readPlayerPublicFilesRequest(req);
```

---

## `readPublicFileRequest`

Request type: [`ReadPublicFileRequest`](schemes.md#readpublicfilerequest)

**Returns:** [`Fopzo::Generated::ReadPublicFileResponse`](schemes.md#readpublicfileresponse)

### Example code
```cpp
Fopzo::Generated::ReadPublicFileRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->StorageRemoteService.readPublicFileRequest(req);
```

---

## `writeFile2Request`

Request type: [`WriteFileRequest`](schemes.md#writefilerequest)

**Returns:** [`Fopzo::Generated::WriteFileResponse`](schemes.md#writefileresponse)

### Example code
```cpp
Fopzo::Generated::WriteFileRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->StorageRemoteService.writeFile2Request(req);
```

---

## `readFilesRequest`

Request type: [`ReadFilesRequest`](schemes.md#readfilesrequest)

**Returns:** [`Fopzo::Generated::ReadFilesResponse`](schemes.md#readfilesresponse)

### Example code
```cpp
Fopzo::Generated::ReadFilesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->StorageRemoteService.readFilesRequest(req);
```

---

## `changeFileAccessModeRequest`

Request type: [`ChangeFileAccessModeRequest`](schemes.md#changefileaccessmoderequest)

**Returns:** [`Fopzo::Generated::ChangeFileAccessModeResponse`](schemes.md#changefileaccessmoderesponse)

### Example code
```cpp
Fopzo::Generated::ChangeFileAccessModeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->StorageRemoteService.changeFileAccessModeRequest(req);
```

---

## `readClanLogMessages2Request`

Request type: [`ReadClanLogMessagesRequest`](schemes.md#readclanlogmessagesrequest)

**Returns:** [`Fopzo::Generated::ReadClanLogMessagesResponse`](schemes.md#readclanlogmessagesresponse)

### Example code
```cpp
Fopzo::Generated::ReadClanLogMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.readClanLogMessages2Request(req);
```

---

## `readClanChatMessages2Request`

Request type: [`ReadClanChatMessagesRequest`](schemes.md#readclanchatmessagesrequest)

**Returns:** [`Fopzo::Generated::ReadClanChatMessagesResponse`](schemes.md#readclanchatmessagesresponse)

### Example code
```cpp
Fopzo::Generated::ReadClanChatMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.readClanChatMessages2Request(req);
```

---

## `getClanChatMessages2Request`

Request type: [`GetClanChatMessagesRequest`](schemes.md#getclanchatmessagesrequest)

**Returns:** [`Fopzo::Generated::GetClanChatMessagesResponse`](schemes.md#getclanchatmessagesresponse)

### Example code
```cpp
Fopzo::Generated::GetClanChatMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.getClanChatMessages2Request(req);
```

---

## `sendClanChatMessage2Request`

Request type: [`SendClanChatMessageRequest`](schemes.md#sendclanchatmessagerequest)

**Returns:** [`Fopzo::Generated::SendClanChatMessageResponse`](schemes.md#sendclanchatmessageresponse)

### Example code
```cpp
Fopzo::Generated::SendClanChatMessageRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.sendClanChatMessage2Request(req);
```

---

## `getClanLogMessages2Request`

Request type: [`GetClanLogMessagesRequest`](schemes.md#getclanlogmessagesrequest)

**Returns:** [`Fopzo::Generated::GetClanLogMessagesResponse`](schemes.md#getclanlogmessagesresponse)

### Example code
```cpp
Fopzo::Generated::GetClanLogMessagesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.getClanLogMessages2Request(req);
```

---

## `getUnreadChatMessagesCount2Request`

Request type: [`GetUnreadChatMessagesCountRequest`](schemes.md#getunreadchatmessagescountrequest)

**Returns:** [`Fopzo::Generated::GetUnreadChatMessagesCountResponse`](schemes.md#getunreadchatmessagescountresponse)

### Example code
```cpp
Fopzo::Generated::GetUnreadChatMessagesCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.getUnreadChatMessagesCount2Request(req);
```

---

## `getUnreadLogMessagesCount2Request`

Request type: [`GetUnreadLogMessagesCountRequest`](schemes.md#getunreadlogmessagescountrequest)

**Returns:** [`Fopzo::Generated::GetUnreadLogMessagesCountResponse`](schemes.md#getunreadlogmessagescountresponse)

### Example code
```cpp
Fopzo::Generated::GetUnreadLogMessagesCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanMessagesRemoteService.getUnreadLogMessagesCount2Request(req);
```

---

## `getDefaultAvatarsRequest`

Request type: [`GetDefaultAvatarsRequest`](schemes.md#getdefaultavatarsrequest)

**Returns:** [`Fopzo::Generated::GetDefaultAvatarsResponse`](schemes.md#getdefaultavatarsresponse)

### Example code
```cpp
Fopzo::Generated::GetDefaultAvatarsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AvatarRemoteService.getDefaultAvatarsRequest(req);
```

---

## `getClanStatsRequest`

Request type: [`GetClanStatsRequest`](schemes.md#getclanstatsrequest)

**Returns:** [`Fopzo::Generated::GetClanStatsResponse`](schemes.md#getclanstatsresponse)

### Example code
```cpp
Fopzo::Generated::GetClanStatsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanStatsRemoteService.getClanStatsRequest(req);
```

---

## `getCurrentClanStatsRequest`

Request type: [`GetCurrentClanStatsRequest`](schemes.md#getcurrentclanstatsrequest)

**Returns:** [`Fopzo::Generated::GetCurrentClanStatsResponse`](schemes.md#getcurrentclanstatsresponse)

### Example code
```cpp
Fopzo::Generated::GetCurrentClanStatsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanStatsRemoteService.getCurrentClanStatsRequest(req);
```

---

## `getAchievementDefinitionsRequest`

Request type: [`GetAchievementDefinitionsRequest`](schemes.md#getachievementdefinitionsrequest)

**Returns:** [`Fopzo::Generated::GetAchievementDefinitionsResponse`](schemes.md#getachievementdefinitionsresponse)

### Example code
```cpp
Fopzo::Generated::GetAchievementDefinitionsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AchievementRemoteService.getAchievementDefinitionsRequest(req);
```

---

## `getCurrentPlayerAchievementsRequest`

Request type: [`GetCurrentPlayerAchievementsRequest`](schemes.md#getcurrentplayerachievementsrequest)

**Returns:** [`Fopzo::Generated::GetCurrentPlayerAchievementsResponse`](schemes.md#getcurrentplayerachievementsresponse)

### Example code
```cpp
Fopzo::Generated::GetCurrentPlayerAchievementsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AchievementRemoteService.getCurrentPlayerAchievementsRequest(req);
```

---

## `getPlayerAchievementsRequest`

Request type: [`GetPlayerAchievementsRequest`](schemes.md#getplayerachievementsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerAchievementsResponse`](schemes.md#getplayerachievementsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerAchievementsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AchievementRemoteService.getPlayerAchievementsRequest(req);
```

---

## `getAllAnnouncementsRequest`

Request type: [`GetAllGameAnnouncementsRequest`](schemes.md#getallgameannouncementsrequest)

**Returns:** [`Fopzo::Generated::GetAllGameAnnouncementsResponse`](schemes.md#getallgameannouncementsresponse)

### Example code
```cpp
Fopzo::Generated::GetAllGameAnnouncementsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GameAnnouncementRemoteService.getAllAnnouncementsRequest(req);
```

---

## `unLinkAuthRequest`

Request type: [`BoltIdUnLinkAuthRequest`](schemes.md#boltidunlinkauthrequest)

**Returns:** [`Fopzo::Generated::BoltIdUnLinkAuthResponse`](schemes.md#boltidunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::BoltIdUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `encryptedAuth2Request`

Request type: [`BoltIdAuthRequest`](schemes.md#boltidauthrequest)

**Returns:** [`Fopzo::Generated::BoltIdAuthResponse`](schemes.md#boltidauthresponse)

### Example code
```cpp
Fopzo::Generated::BoltIdAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `linkAuthRequest`

Request type: [`BoltIdLinkAuthRequest`](schemes.md#boltidlinkauthrequest)

**Returns:** [`Fopzo::Generated::BoltIdLinkAuthResponse`](schemes.md#boltidlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::BoltIdLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `getLinkedAuthRequest`

Request type: [`GetLinkedAuthRequest`](schemes.md#getlinkedauthrequest)

**Returns:** [`Fopzo::Generated::GetLinkedAuthResponse`](schemes.md#getlinkedauthresponse)

### Example code
```cpp
Fopzo::Generated::GetLinkedAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AccountLinkRemoteService.getLinkedAuthRequest(req);
```

---

## `findPlayerStateRequest`

Request type: [`FindReferralStateRequest`](schemes.md#findreferralstaterequest)

**Returns:** [`Fopzo::Generated::FindReferralStateResponse`](schemes.md#findreferralstateresponse)

### Example code
```cpp
Fopzo::Generated::FindReferralStateRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ReferralRemoteService.findPlayerStateRequest(req);
```

---

## `getRecruitByIdRequest`

Request type: [`GetRecruitByIdRequest`](schemes.md#getrecruitbyidrequest)

**Returns:** [`Fopzo::Generated::GetRecruitByIdResponse`](schemes.md#getrecruitbyidresponse)

### Example code
```cpp
Fopzo::Generated::GetRecruitByIdRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ReferralRemoteService.getRecruitByIdRequest(req);
```

---

## `getPlayerStateRequest`

Request type: [`GetReferralPlayerStateRequest`](schemes.md#getreferralplayerstaterequest)

**Returns:** [`Fopzo::Generated::GetReferralPlayerStateResponse`](schemes.md#getreferralplayerstateresponse)

### Example code
```cpp
Fopzo::Generated::GetReferralPlayerStateRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ReferralRemoteService.getPlayerStateRequest(req);
```

---

## `subscribeToCommanderRequest`

Request type: [`SubscribeToCommanderRequest`](schemes.md#subscribetocommanderrequest)

**Returns:** [`Fopzo::Generated::SubscribeToCommanderResponse`](schemes.md#subscribetocommanderresponse)

### Example code
```cpp
Fopzo::Generated::SubscribeToCommanderRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ReferralRemoteService.subscribeToCommanderRequest(req);
```

---

## `getSettingsRequest`

Request type: [`GetReferralSystemSettingsRequest`](schemes.md#getreferralsystemsettingsrequest)

**Returns:** [`Fopzo::Generated::GetReferralSystemSettingsResponse`](schemes.md#getreferralsystemsettingsresponse)

### Example code
```cpp
Fopzo::Generated::GetReferralSystemSettingsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ReferralRemoteService.getSettingsRequest(req);
```

---

## `getRecruitsRequest`

Request type: [`GetRecruitsByOffsetRequest`](schemes.md#getrecruitsbyoffsetrequest)

**Returns:** [`Fopzo::Generated::GetRecruitsByOffsetResponse`](schemes.md#getrecruitsbyoffsetresponse)

### Example code
```cpp
Fopzo::Generated::GetRecruitsByOffsetRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ReferralRemoteService.getRecruitsRequest(req);
```

---

## `unLinkAuthRequest`

Request type: [`TwitchUnLinkAuthRequest`](schemes.md#twitchunlinkauthrequest)

**Returns:** [`Fopzo::Generated::TwitchUnLinkAuthResponse`](schemes.md#twitchunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::TwitchUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `linkAuthRequest`

Request type: [`TwitchLinkAuthRequest`](schemes.md#twitchlinkauthrequest)

**Returns:** [`Fopzo::Generated::TwitchLinkAuthResponse`](schemes.md#twitchlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::TwitchLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `getAllReleasedDlcRequest`

Request type: [`ReleasedDlcRequest`](schemes.md#releaseddlcrequest)

**Returns:** [`Fopzo::Generated::DlcResponse`](schemes.md#dlcresponse)

### Example code
```cpp
Fopzo::Generated::ReleasedDlcRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->DlcRemoteService.getAllReleasedDlcRequest(req);
```

---

## `getAllDlcRequest`

Request type: [`PreviewDlcRequest`](schemes.md#previewdlcrequest)

**Returns:** [`Fopzo::Generated::DlcResponse`](schemes.md#dlcresponse)

### Example code
```cpp
Fopzo::Generated::PreviewDlcRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->DlcRemoteService.getAllDlcRequest(req);
```

---

## `getFilteredRentTradeOpenSaleRequestsRequest`

Request type: [`GetRentTradeOpenSaleRequestsRequest`](schemes.md#getrenttradeopensalerequestsrequest)

**Returns:** [`Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse`](schemes.md#getrenttradeopensalerequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetRentTradeOpenSaleRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getFilteredRentTradeOpenSaleRequestsRequest(req);
```

---

## `createRentSaleRequest`

Request type: [`CreateRentSaleRequest`](schemes.md#createrentsalerequest)

**Returns:** [`Fopzo::Generated::CreateRentSaleResponse`](schemes.md#createrentsaleresponse)

### Example code
```cpp
Fopzo::Generated::CreateRentSaleRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.createRentSaleRequest(req);
```

---

## `getRentTradesRequest`

Request type: [`GetRentTradesRequest`](schemes.md#getrenttradesrequest)

**Returns:** [`Fopzo::Generated::GetRentTradesResponse`](schemes.md#getrenttradesresponse)

### Example code
```cpp
Fopzo::Generated::GetRentTradesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getRentTradesRequest(req);
```

---

## `getRentMarketSettingsRequest`

Request type: [`GetRentMarketSettingsRequest`](schemes.md#getrentmarketsettingsrequest)

**Returns:** [`Fopzo::Generated::GetRentMarketSettingsResponse`](schemes.md#getrentmarketsettingsresponse)

### Example code
```cpp
Fopzo::Generated::GetRentMarketSettingsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getRentMarketSettingsRequest(req);
```

---

## `createRentPurchaseRequestRequest`

Request type: [`CreateRentPurchaseRequestRequest`](schemes.md#createrentpurchaserequestrequest)

**Returns:** [`Fopzo::Generated::CreateRentPurchaseRequestResponse`](schemes.md#createrentpurchaserequestresponse)

### Example code
```cpp
Fopzo::Generated::CreateRentPurchaseRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.createRentPurchaseRequestRequest(req);
```

---

## `getPlayerRentOpenRequestsRequest`

Request type: [`GetPlayerRentOpenRequestsRequest`](schemes.md#getplayerrentopenrequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerRentOpenRequestsResponse`](schemes.md#getplayerrentopenrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerRentOpenRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getPlayerRentOpenRequestsRequest(req);
```

---

## `getPlayerRentClosedRequestsCountRequest`

Request type: [`GetPlayerRentClosedRequestsCountRequest`](schemes.md#getplayerrentclosedrequestscountrequest)

**Returns:** [`Fopzo::Generated::GetPlayerRentClosedRequestsCountResponse`](schemes.md#getplayerrentclosedrequestscountresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerRentClosedRequestsCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getPlayerRentClosedRequestsCountRequest(req);
```

---

## `cancelRentRequestRequest`

Request type: [`CancelRentRequestRequest`](schemes.md#cancelrentrequestrequest)

**Returns:** [`Fopzo::Generated::CancelRentRequestResponse`](schemes.md#cancelrentrequestresponse)

### Example code
```cpp
Fopzo::Generated::CancelRentRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.cancelRentRequestRequest(req);
```

---

## `createRentPurchaseRequestBySaleRequest`

Request type: [`CreateRentPurchaseRequestBySaleRequest`](schemes.md#createrentpurchaserequestbysalerequest)

**Returns:** [`Fopzo::Generated::CreateRentPurchaseRequestBySaleResponse`](schemes.md#createrentpurchaserequestbysaleresponse)

### Example code
```cpp
Fopzo::Generated::CreateRentPurchaseRequestBySaleRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.createRentPurchaseRequestBySaleRequest(req);
```

---

## `getRentTradeOpenSaleRequestsRequest`

Request type: [`GetRentTradeOpenSaleRequestsRequest`](schemes.md#getrenttradeopensalerequestsrequest)

**Returns:** [`Fopzo::Generated::GetRentTradeOpenSaleRequestsResponse`](schemes.md#getrenttradeopensalerequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetRentTradeOpenSaleRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getRentTradeOpenSaleRequestsRequest(req);
```

---

## `getPlayerRentProcessingRequestsRequest`

Request type: [`GetPlayerRentProcessingRequestsRequest`](schemes.md#getplayerrentprocessingrequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerRentProcessingRequestsResponse`](schemes.md#getplayerrentprocessingrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerRentProcessingRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getPlayerRentProcessingRequestsRequest(req);
```

---

## `getRentTradeOpenPurchaseRequestsRequest`

Request type: [`GetRentTradeOpenPurchaseRequestsRequest`](schemes.md#getrenttradeopenpurchaserequestsrequest)

**Returns:** [`Fopzo::Generated::GetRentTradeOpenPurchaseRequestsResponse`](schemes.md#getrenttradeopenpurchaserequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetRentTradeOpenPurchaseRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getRentTradeOpenPurchaseRequestsRequest(req);
```

---

## `getPlayerRentClosedRequestsRequest`

Request type: [`GetPlayerRentClosedRequestsRequest`](schemes.md#getplayerrentclosedrequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerRentClosedRequestsResponse`](schemes.md#getplayerrentclosedrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerRentClosedRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getPlayerRentClosedRequestsRequest(req);
```

---

## `getRentTradeRequest`

Request type: [`GetRentTradeRequest`](schemes.md#getrenttraderequest)

**Returns:** [`Fopzo::Generated::GetRentTradeResponse`](schemes.md#getrenttraderesponse)

### Example code
```cpp
Fopzo::Generated::GetRentTradeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RentMarketRemoteService.getRentTradeRequest(req);
```

---

## `encryptedHandshakeRequest`

Request type: [`Handshake`](schemes.md#handshake)

**Returns:** [`Fopzo::Generated::HandshakeResponse`](schemes.md#handshakeresponse)

### Example code
```cpp
Fopzo::Generated::Handshake req;
// some vars here... (check schemes.proto)
auto response = client->services->HandshakeRemoteService.encryptedHandshakeRequest(req);
```

---

## `getPlayerFriends2Request`

Request type: [`GetPlayerFriendsRequest`](schemes.md#getplayerfriendsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerFriendsResponse`](schemes.md#getplayerfriendsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerFriendsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.getPlayerFriends2Request(req);
```

---

## `ignoreAllFriendRequestsRequest`

Request type: [`IgnoreAllFriendRequestsRequest`](schemes.md#ignoreallfriendrequestsrequest)

**Returns:** [`Fopzo::Generated::IgnoreAllFriendRequestsResponse`](schemes.md#ignoreallfriendrequestsresponse)

### Example code
```cpp
Fopzo::Generated::IgnoreAllFriendRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.ignoreAllFriendRequestsRequest(req);
```

---

## `searchPlayers2Request`

Request type: [`SearchPlayersRequest`](schemes.md#searchplayersrequest)

**Returns:** [`Fopzo::Generated::SearchPlayersResponse`](schemes.md#searchplayersresponse)

### Example code
```cpp
Fopzo::Generated::SearchPlayersRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.searchPlayers2Request(req);
```

---

## `removeFriend2Request`

Request type: [`RemoveFriendRequest`](schemes.md#removefriendrequest)

**Returns:** [`Fopzo::Generated::RemoveFriendResponse`](schemes.md#removefriendresponse)

### Example code
```cpp
Fopzo::Generated::RemoveFriendRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.removeFriend2Request(req);
```

---

## `ignoreFriendRequest2Request`

Request type: [`IgnoreFriendRequestRequest`](schemes.md#ignorefriendrequestrequest)

**Returns:** [`Fopzo::Generated::IgnoreFriendRequestResponse`](schemes.md#ignorefriendrequestresponse)

### Example code
```cpp
Fopzo::Generated::IgnoreFriendRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.ignoreFriendRequest2Request(req);
```

---

## `sendFriendRequest2Request`

Request type: [`SendFriendRequestRequest`](schemes.md#sendfriendrequestrequest)

**Returns:** [`Fopzo::Generated::SendFriendRequestResponse`](schemes.md#sendfriendrequestresponse)

### Example code
```cpp
Fopzo::Generated::SendFriendRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.sendFriendRequest2Request(req);
```

---

## `getPlayerFriendById2Request`

Request type: [`GetPlayerFriendByIdRequest`](schemes.md#getplayerfriendbyidrequest)

**Returns:** [`Fopzo::Generated::GetPlayerFriendByIdResponse`](schemes.md#getplayerfriendbyidresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerFriendByIdRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.getPlayerFriendById2Request(req);
```

---

## `acceptFriendRequest2Request`

Request type: [`AcceptFriendRequestRequest`](schemes.md#acceptfriendrequestrequest)

**Returns:** [`Fopzo::Generated::AcceptFriendRequestResponse`](schemes.md#acceptfriendrequestresponse)

### Example code
```cpp
Fopzo::Generated::AcceptFriendRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.acceptFriendRequest2Request(req);
```

---

## `getPlayerFriendByUid2Request`

Request type: [`GetPlayerFriendByUidRequest`](schemes.md#getplayerfriendbyuidrequest)

**Returns:** [`Fopzo::Generated::GetPlayerFriendByUidResponse`](schemes.md#getplayerfriendbyuidresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerFriendByUidRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.getPlayerFriendByUid2Request(req);
```

---

## `blockFriend2Request`

Request type: [`BlockFriendRequest`](schemes.md#blockfriendrequest)

**Returns:** [`Fopzo::Generated::BlockFriendResponse`](schemes.md#blockfriendresponse)

### Example code
```cpp
Fopzo::Generated::BlockFriendRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.blockFriend2Request(req);
```

---

## `unblockFriend2Request`

Request type: [`UnblockFriendRequest`](schemes.md#unblockfriendrequest)

**Returns:** [`Fopzo::Generated::UnblockFriendResponse`](schemes.md#unblockfriendresponse)

### Example code
```cpp
Fopzo::Generated::UnblockFriendRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.unblockFriend2Request(req);
```

---

## `revokeFriendRequest2Request`

Request type: [`RevokeFriendRequestRequest`](schemes.md#revokefriendrequestrequest)

**Returns:** [`Fopzo::Generated::RevokeFriendRequestResponse`](schemes.md#revokefriendrequestresponse)

### Example code
```cpp
Fopzo::Generated::RevokeFriendRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.revokeFriendRequest2Request(req);
```

---

## `getPlayerFriendsIds2Request`

Request type: [`GetPlayerFriendsIdsRequest`](schemes.md#getplayerfriendsidsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerFriendsIdsResponse`](schemes.md#getplayerfriendsidsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerFriendsIdsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FriendsRemoteService.getPlayerFriendsIds2Request(req);
```

---

## `linkAuthRequest`

Request type: [`AppleIdLinkAuthRequest`](schemes.md#appleidlinkauthrequest)

**Returns:** [`Fopzo::Generated::AppleIdLinkAuthResponse`](schemes.md#appleidlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::AppleIdLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `encryptedAuth2Request`

Request type: [`AppleIdAuthRequest`](schemes.md#appleidauthrequest)

**Returns:** [`Fopzo::Generated::AppleIdAuthResponse`](schemes.md#appleidauthresponse)

### Example code
```cpp
Fopzo::Generated::AppleIdAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `unLinkAuthRequest`

Request type: [`AppleIdUnLinkAuthRequest`](schemes.md#appleidunlinkauthrequest)

**Returns:** [`Fopzo::Generated::AppleIdUnLinkAuthResponse`](schemes.md#appleidunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::AppleIdUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `processChallengeRequest`

Request type: [`ProgressChallengeRequest`](schemes.md#progresschallengerequest)

**Returns:** [`Fopzo::Generated::ProgressChallengeResponse`](schemes.md#progresschallengeresponse)

### Example code
```cpp
Fopzo::Generated::ProgressChallengeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GameEventRemoteService.processChallengeRequest(req);
```

---

## `getCachedPlayerGameEventsRequest`

Request type: [`GetCachedPlayerGameEventsRequest`](schemes.md#getcachedplayergameeventsrequest)

**Returns:** [`Fopzo::Generated::GetCachedPlayerGameEventsResponse`](schemes.md#getcachedplayergameeventsresponse)

### Example code
```cpp
Fopzo::Generated::GetCachedPlayerGameEventsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GameEventRemoteService.getCachedPlayerGameEventsRequest(req);
```

---

## `getPlayerGameEventProgressRequest`

Request type: [`GetPlayerGameEventProgressRequest`](schemes.md#getplayergameeventprogressrequest)

**Returns:** [`Fopzo::Generated::GetPlayerGameEventProgressResponse`](schemes.md#getplayergameeventprogressresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerGameEventProgressRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GameEventRemoteService.getPlayerGameEventProgressRequest(req);
```

---

## `getPlayerGameEventsProgressesRequest`

Request type: [`GetPlayerGameEventsProgressesRequest`](schemes.md#getplayergameeventsprogressesrequest)

**Returns:** [`Fopzo::Generated::GetPlayerGameEventsProgressesResponse`](schemes.md#getplayergameeventsprogressesresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerGameEventsProgressesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GameEventRemoteService.getPlayerGameEventsProgressesRequest(req);
```

---

## `storeStats2Request`

Request type: [`StorePlayerStatsRequest`](schemes.md#storeplayerstatsrequest)

**Returns:** [`Fopzo::Generated::StorePlayerStatsResponse`](schemes.md#storeplayerstatsresponse)

### Example code
```cpp
Fopzo::Generated::StorePlayerStatsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerStatsRemoteService.storeStats2Request(req);
```

---

## `getCurrentStatsRequest`

Request type: [`GetCurrentStatsRequest`](schemes.md#getcurrentstatsrequest)

**Returns:** [`Fopzo::Generated::GetCurrentStatsResponse`](schemes.md#getcurrentstatsresponse)

### Example code
```cpp
Fopzo::Generated::GetCurrentStatsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerStatsRemoteService.getCurrentStatsRequest(req);
```

---

## `getPlayerStats2Request`

Request type: [`GetPlayerStatsRequest`](schemes.md#getplayerstatsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerStatsResponse`](schemes.md#getplayerstatsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerStatsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->PlayerStatsRemoteService.getPlayerStats2Request(req);
```

---

## `encryptedAuth2Request`

Request type: [`VkAuthRequest`](schemes.md#vkauthrequest)

**Returns:** [`Fopzo::Generated::VkAuthResponse`](schemes.md#vkauthresponse)

### Example code
```cpp
Fopzo::Generated::VkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `linkAuthRequest`

Request type: [`VkLinkAuthRequest`](schemes.md#vklinkauthrequest)

**Returns:** [`Fopzo::Generated::VkLinkAuthResponse`](schemes.md#vklinkauthresponse)

### Example code
```cpp
Fopzo::Generated::VkLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `unLinkAuthRequest`

Request type: [`VkUnLinkAuthRequest`](schemes.md#vkunlinkauthrequest)

**Returns:** [`Fopzo::Generated::VkUnLinkAuthResponse`](schemes.md#vkunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::VkUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `sendFriendMsg2Request`

Request type: [`SendFriendMsgRequest`](schemes.md#sendfriendmsgrequest)

**Returns:** [`Fopzo::Generated::SendFriendMsgResponse`](schemes.md#sendfriendmsgresponse)

### Example code
```cpp
Fopzo::Generated::SendFriendMsgRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ChatRemoteService.sendFriendMsg2Request(req);
```

---

## `deleteFriendMsgs2Request`

Request type: [`DeleteFriendMsgsRequest`](schemes.md#deletefriendmsgsrequest)

**Returns:** [`Fopzo::Generated::DeleteFriendMsgsResponse`](schemes.md#deletefriendmsgsresponse)

### Example code
```cpp
Fopzo::Generated::DeleteFriendMsgsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ChatRemoteService.deleteFriendMsgs2Request(req);
```

---

## `getFriendMsgsByOffset2Request`

Request type: [`GetFriendMsgsByOffsetRequest`](schemes.md#getfriendmsgsbyoffsetrequest)

**Returns:** [`Fopzo::Generated::GetFriendMsgsByOffsetResponse`](schemes.md#getfriendmsgsbyoffsetresponse)

### Example code
```cpp
Fopzo::Generated::GetFriendMsgsByOffsetRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ChatRemoteService.getFriendMsgsByOffset2Request(req);
```

---

## `readFriendMsgs2Request`

Request type: [`ReadFriendMsgsRequest`](schemes.md#readfriendmsgsrequest)

**Returns:** [`Fopzo::Generated::ReadFriendMsgsResponse`](schemes.md#readfriendmsgsresponse)

### Example code
```cpp
Fopzo::Generated::ReadFriendMsgsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ChatRemoteService.readFriendMsgs2Request(req);
```

---

## `getChatUserRequest`

Request type: [`GetChatUserRequest`](schemes.md#getchatuserrequest)

**Returns:** [`Fopzo::Generated::GetChatUserResponse`](schemes.md#getchatuserresponse)

### Example code
```cpp
Fopzo::Generated::GetChatUserRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ChatRemoteService.getChatUserRequest(req);
```

---

## `getChatUsersLiteRequest`

Request type: [`GetChatUsersLiteRequest`](schemes.md#getchatusersliterequest)

**Returns:** [`Fopzo::Generated::GetChatUsersLiteResponse`](schemes.md#getchatusersliteresponse)

### Example code
```cpp
Fopzo::Generated::GetChatUsersLiteRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ChatRemoteService.getChatUsersLiteRequest(req);
```

---

## `getPlayerStatsForSeasonRequest`

Request type: [`GetPlayerStatsForSeasonRequest`](schemes.md#getplayerstatsforseasonrequest)

**Returns:** [`Fopzo::Generated::GetPlayerStatsForSeasonResponse`](schemes.md#getplayerstatsforseasonresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerStatsForSeasonRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SeasonalStatsRemoteService.getPlayerStatsForSeasonRequest(req);
```

---

## `getCurrentClanStatsForSeasonRequest`

Request type: [`GetCurrentClanStatsForSeasonRequest`](schemes.md#getcurrentclanstatsforseasonrequest)

**Returns:** [`Fopzo::Generated::GetCurrentClanStatsForSeasonResponse`](schemes.md#getcurrentclanstatsforseasonresponse)

### Example code
```cpp
Fopzo::Generated::GetCurrentClanStatsForSeasonRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SeasonalStatsRemoteService.getCurrentClanStatsForSeasonRequest(req);
```

---

## `getStatsForSeasonRequest`

Request type: [`GetStatsForSeasonRequest`](schemes.md#getstatsforseasonrequest)

**Returns:** [`Fopzo::Generated::GetPlayerStatsForSeasonResponse`](schemes.md#getplayerstatsforseasonresponse)

### Example code
```cpp
Fopzo::Generated::GetStatsForSeasonRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SeasonalStatsRemoteService.getStatsForSeasonRequest(req);
```

---

## `getClanStatsForSeasonRequest`

Request type: [`GetClanStatsForSeasonRequest`](schemes.md#getclanstatsforseasonrequest)

**Returns:** [`Fopzo::Generated::GetClanStatsForSeasonResponse`](schemes.md#getclanstatsforseasonresponse)

### Example code
```cpp
Fopzo::Generated::GetClanStatsForSeasonRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->SeasonalStatsRemoteService.getClanStatsForSeasonRequest(req);
```

---

## `buyInAppRequest`

Request type: [`GetAppsBuyInappRequest`](schemes.md#getappsbuyinapprequest)

**Returns:** [`Fopzo::Generated::GetAppsBuyInappResponse`](schemes.md#getappsbuyinappresponse)

### Example code
```cpp
Fopzo::Generated::GetAppsBuyInappRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->AppGalleryInAppRemoteService.buyInAppRequest(req);
```

---

## `rateGameRequest`

Request type: [`RateGameRequest`](schemes.md#rategamerequest)

**Returns:** [`Fopzo::Generated::RateGameResponse`](schemes.md#rategameresponse)

### Example code
```cpp
Fopzo::Generated::RateGameRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RateGameRemoteService.rateGameRequest(req);
```

---

## `askLaterRequest`

Request type: [`AskLaterRequest`](schemes.md#asklaterrequest)

**Returns:** [`Fopzo::Generated::AskLaterResponse`](schemes.md#asklaterresponse)

### Example code
```cpp
Fopzo::Generated::AskLaterRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RateGameRemoteService.askLaterRequest(req);
```

---

## `getLastRateGameRequest`

Request type: [`GetLastRateGameRequest`](schemes.md#getlastrategamerequest)

**Returns:** [`Fopzo::Generated::GetLastRateGameResponse`](schemes.md#getlastrategameresponse)

### Example code
```cpp
Fopzo::Generated::GetLastRateGameRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RateGameRemoteService.getLastRateGameRequest(req);
```

---

## `dontAskLaterRequest`

Request type: [`DontAskLaterRequest`](schemes.md#dontasklaterrequest)

**Returns:** [`Fopzo::Generated::DontAskLaterResponse`](schemes.md#dontasklaterresponse)

### Example code
```cpp
Fopzo::Generated::DontAskLaterRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->RateGameRemoteService.dontAskLaterRequest(req);
```

---

## `buyInApp2Request`

Request type: [`GoogleBuyInappRequest`](schemes.md#googlebuyinapprequest)

**Returns:** [`Fopzo::Generated::GoogleBuyInappResponse`](schemes.md#googlebuyinappresponse)

### Example code
```cpp
Fopzo::Generated::GoogleBuyInappRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GoogleInAppRemoteService.buyInApp2Request(req);
```

---

## `getPlayerInviteRequests2Request`

Request type: [`GetPlayerInviteRequestsRequest`](schemes.md#getplayerinviterequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerInviteRequestsResponse`](schemes.md#getplayerinviterequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerInviteRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getPlayerInviteRequests2Request(req);
```

---

## `getClanInviteRequests2Request`

Request type: [`GetClanInviteRequestsRequest`](schemes.md#getclaninviterequestsrequest)

**Returns:** [`Fopzo::Generated::GetClanInviteRequestsResponse`](schemes.md#getclaninviterequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetClanInviteRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanInviteRequests2Request(req);
```

---

## `assignRoleToMember2Request`

Request type: [`AssignRoleToMemberRequest`](schemes.md#assignroletomemberrequest)

**Returns:** [`Fopzo::Generated::AssignRoleToMemberResponse`](schemes.md#assignroletomemberresponse)

### Example code
```cpp
Fopzo::Generated::AssignRoleToMemberRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.assignRoleToMember2Request(req);
```

---

## `cancelJoinRequest2Request`

Request type: [`CancelJoinRequestRequest`](schemes.md#canceljoinrequestrequest)

**Returns:** [`Fopzo::Generated::CancelJoinRequestResponse`](schemes.md#canceljoinrequestresponse)

### Example code
```cpp
Fopzo::Generated::CancelJoinRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.cancelJoinRequest2Request(req);
```

---

## `findClan2Request`

Request type: [`FindClanRequest`](schemes.md#findclanrequest)

**Returns:** [`Fopzo::Generated::FindClanResponse`](schemes.md#findclanresponse)

### Example code
```cpp
Fopzo::Generated::FindClanRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.findClan2Request(req);
```

---

## `getClanById2Request`

Request type: [`GetClanByIdRequest`](schemes.md#getclanbyidrequest)

**Returns:** [`Fopzo::Generated::GetClanByIdResponse`](schemes.md#getclanbyidresponse)

### Example code
```cpp
Fopzo::Generated::GetClanByIdRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanById2Request(req);
```

---

## `leaveClan2Request`

Request type: [`LeaveClanRequest`](schemes.md#leaveclanrequest)

**Returns:** [`Fopzo::Generated::LeaveClanResponse`](schemes.md#leaveclanresponse)

### Example code
```cpp
Fopzo::Generated::LeaveClanRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.leaveClan2Request(req);
```

---

## `getClanClosedInviteRequestsCount2Request`

Request type: [`GetClanClosedInviteRequestsCountRequest`](schemes.md#getclanclosedinviterequestscountrequest)

**Returns:** [`Fopzo::Generated::GetClanClosedInviteRequestsCountResponse`](schemes.md#getclanclosedinviterequestscountresponse)

### Example code
```cpp
Fopzo::Generated::GetClanClosedInviteRequestsCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanClosedInviteRequestsCount2Request(req);
```

---

## `declineJoinRequest2Request`

Request type: [`DeclineJoinRequestRequest`](schemes.md#declinejoinrequestrequest)

**Returns:** [`Fopzo::Generated::DeclineJoinRequestResponse`](schemes.md#declinejoinrequestresponse)

### Example code
```cpp
Fopzo::Generated::DeclineJoinRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.declineJoinRequest2Request(req);
```

---

## `getClanByTagRequest`

Request type: [`GetClanByTagRequest`](schemes.md#getclanbytagrequest)

**Returns:** [`Fopzo::Generated::GetClanByTagResponse`](schemes.md#getclanbytagresponse)

### Example code
```cpp
Fopzo::Generated::GetClanByTagRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanByTagRequest(req);
```

---

## `changeClanType2Request`

Request type: [`ChangeClanTypeRequest`](schemes.md#changeclantyperequest)

**Returns:** [`Fopzo::Generated::ChangeClanTypeResponse`](schemes.md#changeclantyperesponse)

### Example code
```cpp
Fopzo::Generated::ChangeClanTypeRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.changeClanType2Request(req);
```

---

## `cancelInviteRequest2Request`

Request type: [`CancelInviteRequestRequest`](schemes.md#cancelinviterequestrequest)

**Returns:** [`Fopzo::Generated::CancelInviteRequestResponse`](schemes.md#cancelinviterequestresponse)

### Example code
```cpp
Fopzo::Generated::CancelInviteRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.cancelInviteRequest2Request(req);
```

---

## `assignLeaderRole2Request`

Request type: [`AssignLeaderRoleRequest`](schemes.md#assignleaderrolerequest)

**Returns:** [`Fopzo::Generated::AssignLeaderRoleResponse`](schemes.md#assignleaderroleresponse)

### Example code
```cpp
Fopzo::Generated::AssignLeaderRoleRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.assignLeaderRole2Request(req);
```

---

## `getClanMembers2Request`

Request type: [`GetClanMembersRequest`](schemes.md#getclanmembersrequest)

**Returns:** [`Fopzo::Generated::GetClanMembersResponse`](schemes.md#getclanmembersresponse)

### Example code
```cpp
Fopzo::Generated::GetClanMembersRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanMembers2Request(req);
```

---

## `createClan2Request`

Request type: [`CreateClanRequest`](schemes.md#createclanrequest)

**Returns:** [`Fopzo::Generated::CreateClanResponse`](schemes.md#createclanresponse)

### Example code
```cpp
Fopzo::Generated::CreateClanRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.createClan2Request(req);
```

---

## `setClanAvatar2Request`

Request type: [`SetClanAvatarRequest`](schemes.md#setclanavatarrequest)

**Returns:** [`Fopzo::Generated::SetClanAvatarResponse`](schemes.md#setclanavatarresponse)

### Example code
```cpp
Fopzo::Generated::SetClanAvatarRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.setClanAvatar2Request(req);
```

---

## `validateClanName2Request`

Request type: [`ValidateClanNameRequest`](schemes.md#validateclannamerequest)

**Returns:** [`Fopzo::Generated::ValidateClanNameResponse`](schemes.md#validateclannameresponse)

### Example code
```cpp
Fopzo::Generated::ValidateClanNameRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.validateClanName2Request(req);
```

---

## `requestToJoinClan2Request`

Request type: [`RequestToJoinClanRequest`](schemes.md#requesttojoinclanrequest)

**Returns:** [`Fopzo::Generated::RequestToJoinClanResponse`](schemes.md#requesttojoinclanresponse)

### Example code
```cpp
Fopzo::Generated::RequestToJoinClanRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.requestToJoinClan2Request(req);
```

---

## `getPlayerClosedJoinRequestsCount2Request`

Request type: [`GetPlayerClosedJoinRequestsCountRequest`](schemes.md#getplayerclosedjoinrequestscountrequest)

**Returns:** [`Fopzo::Generated::GetPlayerClosedJoinRequestsCountResponse`](schemes.md#getplayerclosedjoinrequestscountresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerClosedJoinRequestsCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getPlayerClosedJoinRequestsCount2Request(req);
```

---

## `kickMember2Request`

Request type: [`KickMemberRequest`](schemes.md#kickmemberrequest)

**Returns:** [`Fopzo::Generated::KickMemberResponse`](schemes.md#kickmemberresponse)

### Example code
```cpp
Fopzo::Generated::KickMemberRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.kickMember2Request(req);
```

---

## `deleteClosedInviteRequest2Request`

Request type: [`DeleteClosedInviteRequestRequest`](schemes.md#deleteclosedinviterequestrequest)

**Returns:** [`Fopzo::Generated::DeleteClosedInviteRequestResponse`](schemes.md#deleteclosedinviterequestresponse)

### Example code
```cpp
Fopzo::Generated::DeleteClosedInviteRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.deleteClosedInviteRequest2Request(req);
```

---

## `getClanJoinRequests2Request`

Request type: [`GetClanJoinRequestsRequest`](schemes.md#getclanjoinrequestsrequest)

**Returns:** [`Fopzo::Generated::GetClanJoinRequestsResponse`](schemes.md#getclanjoinrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetClanJoinRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanJoinRequests2Request(req);
```

---

## `getRecommendedClans2Request`

Request type: [`GetRecommendedClansRequest`](schemes.md#getrecommendedclansrequest)

**Returns:** [`Fopzo::Generated::GetRecommendedClansResponse`](schemes.md#getrecommendedclansresponse)

### Example code
```cpp
Fopzo::Generated::GetRecommendedClansRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getRecommendedClans2Request(req);
```

---

## `deleteClosedJoinRequest2Request`

Request type: [`DeleteClosedJoinRequestRequest`](schemes.md#deleteclosedjoinrequestrequest)

**Returns:** [`Fopzo::Generated::DeleteClosedJoinRequestResponse`](schemes.md#deleteclosedjoinrequestresponse)

### Example code
```cpp
Fopzo::Generated::DeleteClosedJoinRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.deleteClosedJoinRequest2Request(req);
```

---

## `getClan2Request`

Request type: [`GetClanRequest`](schemes.md#getclanrequest)

**Returns:** [`Fopzo::Generated::GetClanResponse`](schemes.md#getclanresponse)

### Example code
```cpp
Fopzo::Generated::GetClanRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClan2Request(req);
```

---

## `getRoles2Request`

Request type: [`GetRolesRequest`](schemes.md#getrolesrequest)

**Returns:** [`Fopzo::Generated::GetRolesResponse`](schemes.md#getrolesresponse)

### Example code
```cpp
Fopzo::Generated::GetRolesRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getRoles2Request(req);
```

---

## `getClanSettings2Request`

Request type: [`GetClanSettingsRequest`](schemes.md#getclansettingsrequest)

**Returns:** [`Fopzo::Generated::GetClanSettingsResponse`](schemes.md#getclansettingsresponse)

### Example code
```cpp
Fopzo::Generated::GetClanSettingsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanSettings2Request(req);
```

---

## `inviteToClan2Request`

Request type: [`InviteToClanRequest`](schemes.md#invitetoclanrequest)

**Returns:** [`Fopzo::Generated::InviteToClanResponse`](schemes.md#invitetoclanresponse)

### Example code
```cpp
Fopzo::Generated::InviteToClanRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.inviteToClan2Request(req);
```

---

## `validateClanTag2Request`

Request type: [`ValidateClanTagRequest`](schemes.md#validateclantagrequest)

**Returns:** [`Fopzo::Generated::ValidateClanTagResponse`](schemes.md#validateclantagresponse)

### Example code
```cpp
Fopzo::Generated::ValidateClanTagRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.validateClanTag2Request(req);
```

---

## `setClanDescription2Request`

Request type: [`SetClanDescriptionRequest`](schemes.md#setclandescriptionrequest)

**Returns:** [`Fopzo::Generated::SetClanDescriptionResponse`](schemes.md#setclandescriptionresponse)

### Example code
```cpp
Fopzo::Generated::SetClanDescriptionRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.setClanDescription2Request(req);
```

---

## `getPlayerJoinRequests2Request`

Request type: [`GetPlayerJoinRequestsRequest`](schemes.md#getplayerjoinrequestsrequest)

**Returns:** [`Fopzo::Generated::GetPlayerJoinRequestsResponse`](schemes.md#getplayerjoinrequestsresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerJoinRequestsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getPlayerJoinRequests2Request(req);
```

---

## `declineInviteRequest2Request`

Request type: [`DeclineInviteRequestRequest`](schemes.md#declineinviterequestrequest)

**Returns:** [`Fopzo::Generated::DeclineInviteRequestResponse`](schemes.md#declineinviterequestresponse)

### Example code
```cpp
Fopzo::Generated::DeclineInviteRequestRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.declineInviteRequest2Request(req);
```

---

## `getClanMembersById2Request`

Request type: [`GetClanMembersByIdRequest`](schemes.md#getclanmembersbyidrequest)

**Returns:** [`Fopzo::Generated::GetClanMembersByIdResponse`](schemes.md#getclanmembersbyidresponse)

### Example code
```cpp
Fopzo::Generated::GetClanMembersByIdRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanMembersById2Request(req);
```

---

## `getClanJoinRequestsCount2Request`

Request type: [`GetClanJoinRequestsCountRequest`](schemes.md#getclanjoinrequestscountrequest)

**Returns:** [`Fopzo::Generated::GetClanJoinRequestsCountResponse`](schemes.md#getclanjoinrequestscountresponse)

### Example code
```cpp
Fopzo::Generated::GetClanJoinRequestsCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getClanJoinRequestsCount2Request(req);
```

---

## `getPlayerInviteRequestsCount2Request`

Request type: [`GetPlayerInviteRequestsCountRequest`](schemes.md#getplayerinviterequestscountrequest)

**Returns:** [`Fopzo::Generated::GetPlayerInviteRequestsCountResponse`](schemes.md#getplayerinviterequestscountresponse)

### Example code
```cpp
Fopzo::Generated::GetPlayerInviteRequestsCountRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->ClanRemoteService.getPlayerInviteRequestsCount2Request(req);
```

---

## `getItems2Request`

Request type: [`GetItemsRequest`](schemes.md#getitemsrequest)

**Returns:** [`Fopzo::Generated::GetItemsResponse`](schemes.md#getitemsresponse)

### Example code
```cpp
Fopzo::Generated::GetItemsRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->NewsFeedRemoteService.getItems2Request(req);
```

---

## `linkAuthRequest`

Request type: [`GameCenterLinkAuthRequest`](schemes.md#gamecenterlinkauthrequest)

**Returns:** [`Fopzo::Generated::GameCenterLinkAuthResponse`](schemes.md#gamecenterlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::GameCenterLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.linkAuthRequest(req);
```

---

## `unLinkAuthRequest`

Request type: [`GameCenterUnLinkAuthRequest`](schemes.md#gamecenterunlinkauthrequest)

**Returns:** [`Fopzo::Generated::GameCenterUnLinkAuthResponse`](schemes.md#gamecenterunlinkauthresponse)

### Example code
```cpp
Fopzo::Generated::GameCenterUnLinkAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.unLinkAuthRequest(req);
```

---

## `encryptedAuth2Request`

Request type: [`GameCenterAuthRequest`](schemes.md#gamecenterauthrequest)

**Returns:** [`Fopzo::Generated::GameCenterAuthResponse`](schemes.md#gamecenterauthresponse)

### Example code
```cpp
Fopzo::Generated::GameCenterAuthRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->FacebookAuthRemoteService.encryptedAuth2Request(req);
```

---

## `buyInApp2Request`

Request type: [`AppStoreBuyInappRequest`](schemes.md#appstorebuyinapprequest)

**Returns:** [`Fopzo::Generated::AppStoreBuyInappResponse`](schemes.md#appstorebuyinappresponse)

### Example code
```cpp
Fopzo::Generated::AppStoreBuyInappRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->GoogleInAppRemoteService.buyInApp2Request(req);
```

---

## `getMatch2Request`

Request type: [`GetMatchRequest`](schemes.md#getmatchrequest)

**Returns:** [`Fopzo::Generated::GetMatchResponse`](schemes.md#getmatchresponse)

### Example code
```cpp
Fopzo::Generated::GetMatchRequest req;
// some vars here... (check schemes.proto)
auto response = client->services->MatchesRemoteService.getMatch2Request(req);
```

---

