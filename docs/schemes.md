# Schemes Reference

## Enums

<a name="joinclantype"></a>
### enum `JoinClanType`
* `JOIN_CLAN_TYPE_BYACCEPTINVITEREQUEST`
* `JOIN_CLAN_TYPE_BYACCEPTJOINREQUEST`
* `JOIN_CLAN_TYPE_JOINTOOPENCLAN`
* `JOIN_CLAN_TYPE_NONEJOINTYPE`

---

<a name="progressgameeventtype"></a>
### enum `ProgressGameEventType`
* `PROGRESS_GAME_EVENT_TYPE_UNSPECIFIED`
* `PROGRESS_GAME_EVENT_TYPE_GAMEPASSBOUGHT`
* `PROGRESS_GAME_EVENT_TYPE_EVENTPOINTSBOUGHT`
* `PROGRESS_GAME_EVENT_TYPE_GAMEPASSANDEVENTPOINTSBOUGHT`
* `PROGRESS_GAME_EVENT_TYPE_REFERRALPOINTSRECEIVED`

---

<a name="clanmemberrolepermission"></a>
### enum `ClanMemberRolePermission`
* `CLAN_MEMBER_ROLE_PERMISSION_CHANGECLANSETTINGS`
* `CLAN_MEMBER_ROLE_PERMISSION_ACCEPTMEMBER`
* `CLAN_MEMBER_ROLE_PERMISSION_INVITEMEMBER`
* `CLAN_MEMBER_ROLE_PERMISSION_KICKMEMBERLESS`
* `CLAN_MEMBER_ROLE_PERMISSION_KICKMEMBEREQUAL`
* `CLAN_MEMBER_ROLE_PERMISSION_ASSIGNROLELESS`
* `CLAN_MEMBER_ROLE_PERMISSION_ASSIGNROLEEQUAL`
* `CLAN_MEMBER_ROLE_PERMISSION_CREATECLANBATTLE`
* `CLAN_MEMBER_ROLE_PERMISSION_JOINCLANBATTLE`
* `CLAN_MEMBER_ROLE_PERMISSION_UPGRADECLANMEMBERSCOUNT`

---

<a name="requesttype"></a>
### enum `RequestType`
* `REQUEST_TYPE_NONETYPEREQUEST`
* `REQUEST_TYPE_OPENREQUEST`
* `REQUEST_TYPE_CLOSEDREQUEST`

---

<a name="clantype"></a>
### enum `ClanType`
* `CLAN_TYPE_CLOSED`
* `CLAN_TYPE_BYREQUEST`
* `CLAN_TYPE_OPENED`

---

<a name="referralcashbackpaymentstatus"></a>
### enum `ReferralCashbackPaymentStatus`
* `REFERRAL_CASHBACK_PAYMENT_STATUS_AWAITSPAYMENT`
* `REFERRAL_CASHBACK_PAYMENT_STATUS_PAID`
* `REFERRAL_CASHBACK_PAYMENT_STATUS_PAYMENTCANCELLED`

---

<a name="referralstate"></a>
### enum `ReferralState`
* `REFERRAL_STATE_RECRUIT`
* `REFERRAL_STATE_COMMANDER`

---

<a name="authtype"></a>
### enum `AuthType`
* `AUTH_TYPE_TEST`
* `AUTH_TYPE_GUEST`
* `AUTH_TYPE_GOOGLEPLAY`
* `AUTH_TYPE_FACEBOOK`
* `AUTH_TYPE_GAMECENTER`
* `AUTH_TYPE_APPLEID`
* `AUTH_TYPE_HUAWEI`
* `AUTH_TYPE_VK`
* `AUTH_TYPE_BOLTID`
* `AUTH_TYPE_TWITCH`

---

<a name="messagetype"></a>
### enum `MessageType`
* `MESSAGE_TYPE_CLANSNONETYPE`
* `MESSAGE_TYPE_CHATMESSAGE`
* `MESSAGE_TYPE_LOGMESSAGE`

---

<a name="fileaccessmode"></a>
### enum `FileAccessMode`
* `FILE_ACCESS_MODE_PRIVATEACCESSMODE`
* `FILE_ACCESS_MODE_BYTOKENACCESSMODE`
* `FILE_ACCESS_MODE_PUBLICACCESSMODE`

---

<a name="rewardsource"></a>
### enum `RewardSource`
* `REWARD_SOURCE_SOURCEUNSPECIFIED`
* `REWARD_SOURCE_SOURCETWITCH`

---

<a name="matchstate"></a>
### enum `MatchState`
* `MATCH_STATE_FINISHED`
* `MATCH_STATE_CANCELED`
* `MATCH_STATE_ANNULLED`

---

<a name="matchtype"></a>
### enum `MatchType`
* `MATCH_TYPE_REGULAR`
* `MATCH_TYPE_CLANBATTLE`

---

<a name="systemmessagetype"></a>
### enum `SystemMessageType`
* `SYSTEM_MESSAGE_TYPE_MATCHESCANCELED`
* `SYSTEM_MESSAGE_TYPE_REPORTEDPLAYERSBANNED`
* `SYSTEM_MESSAGE_TYPE_FRIENDSHIPREQUESTACCEPTED`
* `SYSTEM_MESSAGE_TYPE_CLANMEMBERSHIPACCEPTED`
* `SYSTEM_MESSAGE_TYPE_CLANMEMBERSHIPENDED`
* `SYSTEM_MESSAGE_TYPE_ACHIEVEMENTUNLOCKED`
* `SYSTEM_MESSAGE_TYPE_GIFTRECEIVED`
* `SYSTEM_MESSAGE_TYPE_SEASONFINISHED`
* `SYSTEM_MESSAGE_TYPE_AVATARREJECTED`
* `SYSTEM_MESSAGE_TYPE_GLOBALBANRECEIVED`
* `SYSTEM_MESSAGE_TYPE_MARKETPLACETRANSACTIONREVERTED`
* `SYSTEM_MESSAGE_TYPE_DEVELOPERMESSAGE`
* `SYSTEM_MESSAGE_TYPE_MARKETPLACEBANRECEIVED`
* `SYSTEM_MESSAGE_TYPE_CHATBANRECEIVED`
* `SYSTEM_MESSAGE_TYPE_INAPPSUCCEED`
* `SYSTEM_MESSAGE_TYPE_NEWDEVICELOGINED`
* `SYSTEM_MESSAGE_TYPE_MATCHESRESTORED`
* `SYSTEM_MESSAGE_TYPE_RECRUITSUBSCRIBED`
* `SYSTEM_MESSAGE_TYPE_COMMANDERCASHBACKRECEIVED`
* `SYSTEM_MESSAGE_TYPE_REWARDPROCESSED`
* `SYSTEM_MESSAGE_TYPE_STOREGIFTRECEIVED`

---

<a name="closingreason"></a>
### enum `ClosingReason`
* `CLOSING_REASON_NONEREASON`
* `CLOSING_REASON_SUCCESSTRANSACTION`
* `CLOSING_REASON_NOTENOUGHFUNDS`
* `CLOSING_REASON_CANCELLED`
* `CLOSING_REASON_SALEREQUESTNOTFOUND`
* `CLOSING_REASON_EXPIRED`
* `CLOSING_REASON_INVENTORYSIZEEXCEEDED`

---

<a name="operationvaluepair_types_operation"></a>
### enum `OperationValuePair_Types_Operation`
* `OPERATION_VALUE_PAIR_TYPES_OPERATION_DEFAULT`
* `OPERATION_VALUE_PAIR_TYPES_OPERATION_EXIST`
* `OPERATION_VALUE_PAIR_TYPES_OPERATION_EQUALS`

---

<a name="processingstate"></a>
### enum `ProcessingState`
* `PROCESSING_STATE_CREATING`
* `PROCESSING_STATE_CANCELLING`
* `PROCESSING_STATE_EXPIRING`

---

<a name="marketrequesttype"></a>
### enum `MarketRequestType`
* `MARKET_REQUEST_TYPE_MPNONETYPE`
* `MARKET_REQUEST_TYPE_SALEREQUEST`
* `MARKET_REQUEST_TYPE_PURCHASEREQUEST`

---

<a name="comparison"></a>
### enum `Comparison`
* `COMPARISON_EQUALTOORLESSTHAN`
* `COMPARISON_LESSTHAN`
* `COMPARISON_EQUAL`
* `COMPARISON_GREATERTHAN`
* `COMPARISON_EQUALTOORGREATERTHAN`
* `COMPARISON_NOTEQUAL`
* `COMPARISON_STARTWITH`
* `COMPARISON_IN`
* `COMPARISON_INORNULL`

---

<a name="lobbydistancefilter"></a>
### enum `LobbyDistanceFilter`
* `LOBBY_DISTANCE_FILTER_CLOSE`
* `LOBBY_DISTANCE_FILTER_DEFAULT`
* `LOBBY_DISTANCE_FILTER_FAR`
* `LOBBY_DISTANCE_FILTER_WORLDWIDE`

---

<a name="lobbytype"></a>
### enum `LobbyType`
* `LOBBY_TYPE_DEFAULT`
* `LOBBY_TYPE_SQLLOBBY`
* `LOBBY_TYPE_ASYNCRANDOMLOBBY`

---

<a name="relationshipstatus"></a>
### enum `RelationshipStatus`
* `RELATIONSHIP_STATUS_NONE`
* `RELATIONSHIP_STATUS_BLOCKED`
* `RELATIONSHIP_STATUS_INITIATOR`
* `RELATIONSHIP_STATUS_FRIEND`
* `RELATIONSHIP_STATUS_RECIPIENT`
* `RELATIONSHIP_STATUS_IGNORED`

---

<a name="lobbyplayertype"></a>
### enum `LobbyPlayerType`
* `LOBBY_PLAYER_TYPE_ANY`
* `LOBBY_PLAYER_TYPE_MEMBER`
* `LOBBY_PLAYER_TYPE_SPECTATOR`

---

<a name="offertype"></a>
### enum `OfferType`
* `OFFER_TYPE_INAPPPURCHASE`
* `OFFER_TYPE_STORE`

---

<a name="settingtype"></a>
### enum `SettingType`
* `SETTING_TYPE_STRING`
* `SETTING_TYPE_INTEGER`
* `SETTING_TYPE_FLOAT`
* `SETTING_TYPE_BOOL`
* `SETTING_TYPE_LONG`

---

<a name="banscope"></a>
### enum `BanScope`
* `BAN_SCOPE_GLOBAL`
* `BAN_SCOPE_MARKETPLACE`
* `BAN_SCOPE_MARKETPLACESPECIAL`
* `BAN_SCOPE_CHAT`

---

<a name="onlinestatus"></a>
### enum `OnlineStatus`
* `ONLINE_STATUS_STATEOFFLINE`
* `ONLINE_STATUS_STATEONLINE`
* `ONLINE_STATUS_STATEBUSY`
* `ONLINE_STATUS_STATEAWAY`
* `ONLINE_STATUS_STATESNOOZE`
* `ONLINE_STATUS_STATELOOKINGTOTRADE`
* `ONLINE_STATUS_STATELOOKINGTOPLAY`

---

<a name="retrievabletype"></a>
### enum `RetrievableType`
* `RETRIEVABLE_TYPE_UNREMOVABLE`
* `RETRIEVABLE_TYPE_REMOVABLE`
* `RETRIEVABLE_TYPE_RETRIEVABLE`

---

<a name="propertysetbytype"></a>
### enum `PropertySetByType`
* `PROPERTY_SET_BY_TYPE_GAMESERVER`
* `PROPERTY_SET_BY_TYPE_CLIENT`

---

<a name="flagfilter_types_maskoperation"></a>
### enum `FlagFilter_Types_MaskOperation`
* `FLAG_FILTER_TYPES_MASK_OPERATION_EQUALS`
* `FLAG_FILTER_TYPES_MASK_OPERATION_BITSANYSET`
* `FLAG_FILTER_TYPES_MASK_OPERATION_BITSALLSET`

---

<a name="requeststatus"></a>
### enum `RequestStatus`
* `REQUEST_STATUS_PENDING`
* `REQUEST_STATUS_DONE`

---

<a name="propertytype"></a>
### enum `PropertyType`
* `PROPERTY_TYPE_INT`
* `PROPERTY_TYPE_FLOAT`
* `PROPERTY_TYPE_STRING`
* `PROPERTY_TYPE_BOOLEAN`
* `PROPERTY_TYPE_LONG`
* `PROPERTY_TYPE_ITEMID`
* `PROPERTY_TYPE_IMAGEURL`
* `PROPERTY_TYPE_JSON`
* `PROPERTY_TYPE_RANDOMUNIFORM`
* `PROPERTY_TYPE_DATE`

---

<a name="purchasestatus"></a>
### enum `PurchaseStatus`
* `PURCHASE_STATUS_UNKNOWNSTATUS`
* `PURCHASE_STATUS_PURCHASED`
* `PURCHASE_STATUS_CANCELED`
* `PURCHASE_STATUS_REFUNDED`
* `PURCHASE_STATUS_PENDING`
* `PURCHASE_STATUS_REFUNDPENDING`

---

<a name="statdeftype"></a>
### enum `StatDefType`
* `STAT_DEF_TYPE_INT`
* `STAT_DEF_TYPE_FLOAT`
* `STAT_DEF_TYPE_LONG`

---

<a name="store"></a>
### enum `Store`
* `STORE_GOOGLEPLAY`
* `STORE_APPSTORE`
* `STORE_APPGALLERY`
* `STORE_AMAZON`
* `STORE_DEV`
* `STORE_YOO`
* `STORE_GETAPPS`

---

<a name="platform"></a>
### enum `Platform`
* `PLATFORM_UNKNOWN`
* `PLATFORM_ANDROID`
* `PLATFORM_IOS`

---

<a name="side"></a>
### enum `Side`
* `SIDE_RED`
* `SIDE_BLUE`

---

<a name="state"></a>
### enum `State`
* `STATE_PREPARING`
* `STATE_READY`
* `STATE_STARTED`
* `STATE_FINISHED`
* `STATE_CANCELED`

---

## Messages

<a name="serverhandshakeresponse"></a>
### message `ServerHandshakeResponse`
**Fields:**

*No fields*

---

<a name="serverhandshake"></a>
### message `ServerHandshake`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | apiKey |
| **string** | version |

---

<a name="serverlogoutresponse"></a>
### message `ServerLogoutResponse`
**Fields:**

*No fields*

---

<a name="serverlogoutrequest"></a>
### message `ServerLogoutRequest`
**Fields:**

*No fields*

---

<a name="playtournamentgameresponse"></a>
### message `PlayTournamentGameResponse`
**Fields:**

*No fields*

---

<a name="playtournamentgamerequest"></a>
### message `PlayTournamentGameRequest`
**Fields:**

*No fields*

---

<a name="leavetournamentresponse"></a>
### message `LeaveTournamentResponse`
**Fields:**

*No fields*

---

<a name="leavetournamentrequest"></a>
### message `LeaveTournamentRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tournamentId |

---

<a name="jointournamentresponse"></a>
### message `JoinTournamentResponse`
**Fields:**

*No fields*

---

<a name="team"></a>
### message `Team`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **string** | gpid |
| **string** | gpids |

---

<a name="jointournamentrequest"></a>
### message `JoinTournamentRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tournamentId |
| [`Team`](#team) | team |

---

<a name="tournament"></a>
### message `Tournament`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **int32** | version |
| **string** | minGameVersion |
| **string** | downloadUrl |
| **int64** | date |

---

<a name="tournamentsresponse"></a>
### message `TournamentsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Tournament`](#tournament) | tournaments |

---

<a name="tournamentsrequest"></a>
### message `TournamentsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`State`](#state) | state |

---

<a name="announcetournamentresponse"></a>
### message `AnnounceTournamentResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Tournament`](#tournament) | tournament |

---

<a name="announcetournamentrequest"></a>
### message `AnnounceTournamentRequest`
**Fields:**

*No fields*

---

<a name="gettournamentresponse"></a>
### message `GetTournamentResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Tournament`](#tournament) | tournament |

---

<a name="gettournamentrequest"></a>
### message `GetTournamentRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |

---

<a name="finishtournamentresponse"></a>
### message `FinishTournamentResponse`
**Fields:**

*No fields*

---

<a name="finishtournamentrequest"></a>
### message `FinishTournamentRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tournamentId |
| **string** | gameId |
| [`Side`](#side) | winner |

---

<a name="starttournamentresponse"></a>
### message `StartTournamentResponse`
**Fields:**

*No fields*

---

<a name="starttournamentrequest"></a>
### message `StartTournamentRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tournamentId |

---

<a name="facebookauthresponse"></a>
### message `FacebookAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authfacebook"></a>
### message `AuthFacebook`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | token |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="environmentinfo"></a>
### message `EnvironmentInfo`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | version |
| **bytes** | environment |

---

<a name="appverification"></a>
### message `AppVerification`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | isRooted |
| **string** | apkHash |
| **string** | jsonForbiddenApps |
| **string** | path |
| **string** | contentHash |
| **bytes** | n |
| **bytes** | e |
| [`EnvironmentInfo`](#environmentinfo) | environment |
| **string** | token |

---

<a name="deviceinfo"></a>
### message `DeviceInfo`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | deviceId |
| **string** | deviceModel |
| **string** | adsId |

---

<a name="facebookauthrequest"></a>
### message `FacebookAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthFacebook`](#authfacebook) | authFacebook |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="facebookunlinkauthresponse"></a>
### message `FacebookUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="facebookunlinkauthrequest"></a>
### message `FacebookUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="facebooklinkauthresponse"></a>
### message `FacebookLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="facebooklinkauthrequest"></a>
### message `FacebookLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthFacebook`](#authfacebook) | authFacebook |

---

<a name="savecurrentclanmemberstatsresponse"></a>
### message `SaveCurrentClanMemberStatsResponse`
**Fields:**

*No fields*

---

<a name="clanmemberstat"></a>
### message `ClanMemberStat`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | statId |
| [`StatDefType`](#statdeftype) | type |
| **int32** | intValue |
| **float** | floatValue |
| **int64** | longValue |

---

<a name="currentclanmemberstats"></a>
### message `CurrentClanMemberStats`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanMemberStat`](#clanmemberstat) | stats |

---

<a name="savecurrentclanmemberstatsrequest"></a>
### message `SaveCurrentClanMemberStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrentClanMemberStats`](#currentclanmemberstats) | clanMemberStats |

---

<a name="getcurrentclanmemberstatsresponse"></a>
### message `GetCurrentClanMemberStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| [`CurrentClanMemberStats`](#currentclanmemberstats) | clanMemberStats |

---

<a name="getcurrentclanmemberstatsrequest"></a>
### message `GetCurrentClanMemberStatsRequest`
**Fields:**

*No fields*

---

<a name="clanmemberstats"></a>
### message `ClanMemberStats`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`ClanMemberStat`](#clanmemberstat) | stats |
| **int64** | version |

---

<a name="getclanmembersstatsresponse"></a>
### message `GetClanMembersStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| [`ClanMemberStats`](#clanmemberstats) | clanMembersStats |

---

<a name="getclanmembersstatsrequest"></a>
### message `GetClanMembersStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |

---

<a name="googleauthresponse"></a>
### message `GoogleAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authgoogle"></a>
### message `AuthGoogle`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | authCode |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="googleauthrequest"></a>
### message `GoogleAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthGoogle`](#authgoogle) | authGoogle |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="googlelinkauthresponse"></a>
### message `GoogleLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="googlelinkauthrequest"></a>
### message `GoogleLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthGoogle`](#authgoogle) | authGoogle |

---

<a name="googleunlinkauthresponse"></a>
### message `GoogleUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="googleunlinkauthrequest"></a>
### message `GoogleUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="playerinapppurchasebyserver"></a>
### message `PlayerInAppPurchaseByServer`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PurchaseStatus`](#purchasestatus) | status |
| **float** | price |
| **int64** | purchaseDate |

---

<a name="getplayersinapppurchasesbyserverresult"></a>
### message `GetPlayersInAppPurchasesByServerResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`PlayerInAppPurchaseByServer`](#playerinapppurchasebyserver) | purchases |

---

<a name="getplayersinapppurchasesbyserverresponse"></a>
### message `GetPlayersInAppPurchasesByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GetPlayersInAppPurchasesByServerResult`](#getplayersinapppurchasesbyserverresult) | results |

---

<a name="getplayersinapppurchasesbyserverfilters"></a>
### message `GetPlayersInAppPurchasesByServerFilters`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int64** | minDate |

---

<a name="getplayersinapppurchasesbyserverrequest"></a>
### message `GetPlayersInAppPurchasesByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpids |
| [`GetPlayersInAppPurchasesByServerFilters`](#getplayersinapppurchasesbyserverfilters) | filters |

---

<a name="itemmodificationvalue"></a>
### message `ItemModificationValue`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PropertyType`](#propertytype) | type |
| **int32** | intValue |
| **float** | floatValue |
| **string** | stringValue |
| **bool** | booleanValue |
| **int64** | longValue |

---

<a name="blockedaction"></a>
### message `BlockedAction`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | blockMarketplace |
| **int64** | blockMarketplaceUntil |
| **int64** | blockedAndExpiresAt |
| **int64** | blockedAndHiddenUntil |

---

<a name="playerinventoryitem"></a>
### message `PlayerInventoryItem`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | itemDefinitionId |
| **int32** | quantity |
| **int32** | flags |
| **int64** | date |
| [`BlockedAction`](#blockedaction) | block |
| **bool** | isPublic |

---

<a name="currencyamount"></a>
### message `CurrencyAmount`
**Fields:**

*No fields*

---

<a name="statamount"></a>
### message `StatAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | statId |
| [`PropertyType`](#propertytype) | propertyType |
| **int32** | intValue |
| **float** | floatValue |
| **int64** | longValue |

---

<a name="givenreward"></a>
### message `GivenReward`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | changedItems |
| [`StatAmount`](#statamount) | stats |

---

<a name="appgallerybuyinappresponse"></a>
### message `AppGalleryBuyInappResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GivenReward`](#givenreward) | reward |

---

<a name="appgallerybuyinapprequest"></a>
### message `AppGalleryBuyInappRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | productId |
| **string** | purchaseToken |

---

<a name="playerstat"></a>
### message `PlayerStat`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **int32** | intValue |
| **float** | floatValue |
| **float** | window |
| [`StatDefType`](#statdeftype) | type |
| **int64** | longValue |

---

<a name="stats"></a>
### message `Stats`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStat`](#playerstat) | stat |
| **string** | seasonId |
| **int64** | updatedDate |

---

<a name="getstatsresponse"></a>
### message `GetStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Stats`](#stats) | stats |

---

<a name="getstatsrequest"></a>
### message `GetStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | apiNames |

---

<a name="storeplayerstatsresponse"></a>
### message `StorePlayerStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **int64** | updatedDate |

---

<a name="storeplayersstatsresponse"></a>
### message `StorePlayersStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`StorePlayerStatsResponse`](#storeplayerstatsresponse) | storePlayerStatsResponse |

---

<a name="storeplayerstat"></a>
### message `StorePlayerStat`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **int32** | storeInt |
| **float** | storeFloat |
| **int64** | storeLong |

---

<a name="storeplayerstats"></a>
### message `StorePlayerStats`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`StorePlayerStat`](#storeplayerstat) | stats |
| **string** | seasonId |

---

<a name="storeplayersstatsrequest"></a>
### message `StorePlayersStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`StorePlayerStats`](#storeplayerstats) | storePlayersStats |

---

<a name="playerstats"></a>
### message `PlayerStats`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`Stats`](#stats) | stats |

---

<a name="getplayerstatsresponse"></a>
### message `GetPlayerStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStats`](#playerstats) | playerStats |

---

<a name="getplayerstatsrequest"></a>
### message `GetPlayerStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | apiNames |
| **bool** | addLeaderboardStats |

---

<a name="storestatsresponse"></a>
### message `StoreStatsResponse`
**Fields:**

*No fields*

---

<a name="storestatsrequest"></a>
### message `StoreStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`StorePlayerStats`](#storeplayerstats) | stats |

---

<a name="getplayersstatsresponse"></a>
### message `GetPlayersStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStats`](#playerstats) | playersStats |

---

<a name="getplayersstatsrequest"></a>
### message `GetPlayersStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpids |
| **string** | apiNames |
| **bool** | addLeaderboardStats |

---

<a name="storeplayerstatsrequest"></a>
### message `StorePlayerStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`StorePlayerStats`](#storeplayerstats) | storePlayerStats |

---

<a name="request"></a>
### message `Request`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| [`RequestStatus`](#requeststatus) | status |
| **string** | email |
| **int64** | created |
| **int64** | sent |

---

<a name="getrequestsencryptedresponse"></a>
### message `GetRequestsEncryptedResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Request`](#request) | requests |

---

<a name="getrequestsencryptedrequest"></a>
### message `GetRequestsEncryptedRequest`
**Fields:**

*No fields*

---

<a name="createrequestencryptedresponse"></a>
### message `CreateRequestEncryptedResponse`
**Fields:**

*No fields*

---

<a name="createrequestencryptedrequest"></a>
### message `CreateRequestEncryptedRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | email |

---

<a name="deleteaccountresponse"></a>
### message `DeleteAccountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | email |
| **int32** | daysLeft |

---

<a name="deleteaccountrequest"></a>
### message `DeleteAccountRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | email |

---

<a name="recoveraccountresponse"></a>
### message `RecoverAccountResponse`
**Fields:**

*No fields*

---

<a name="recoveraccountrequest"></a>
### message `RecoverAccountRequest`
**Fields:**

*No fields*

---

<a name="getidtokenresponse"></a>
### message `GetIdTokenResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | token |

---

<a name="getidtokenrequest"></a>
### message `GetIdTokenRequest`
**Fields:**

*No fields*

---

<a name="unsubscribecreatorresponse"></a>
### message `UnsubscribeCreatorResponse`
**Fields:**

*No fields*

---

<a name="unsubscribecreatorrequest"></a>
### message `UnsubscribeCreatorRequest`
**Fields:**

*No fields*

---

<a name="creator"></a>
### message `Creator`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | code |
| **string** | nickName |
| **int64** | until |

---

<a name="findcreatorresponse"></a>
### message `FindCreatorResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Creator`](#creator) | creator |

---

<a name="findcreatorrequest"></a>
### message `FindCreatorRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | code |

---

<a name="getsubscribedcreatorresponse"></a>
### message `GetSubscribedCreatorResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Creator`](#creator) | creator |

---

<a name="getsubscribedcreatorrequest"></a>
### message `GetSubscribedCreatorRequest`
**Fields:**

*No fields*

---

<a name="subscribecreatorresponse"></a>
### message `SubscribeCreatorResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Creator`](#creator) | creator |

---

<a name="subscribecreatorrequest"></a>
### message `SubscribeCreatorRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | code |

---

<a name="subscriberesponse"></a>
### message `SubscribeResponse`
**Fields:**

*No fields*

---

<a name="subscriberequest"></a>
### message `SubscribeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | topic |

---

<a name="unsubscriberesponse"></a>
### message `UnsubscribeResponse`
**Fields:**

*No fields*

---

<a name="unsubscriberequest"></a>
### message `UnsubscribeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | topic |

---

<a name="progressgameeventbyserverresponse"></a>
### message `ProgressGameEventByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | points |
| [`GivenReward`](#givenreward) | reward |

---

<a name="progressgameeventsbyserverresult"></a>
### message `ProgressGameEventsByServerResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **bool** | success |
| [`ProgressGameEventByServerResponse`](#progressgameeventbyserverresponse) | result |

---

<a name="progressgameeventsbyserverresponse"></a>
### message `ProgressGameEventsByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ProgressGameEventsByServerResult`](#progressgameeventsbyserverresult) | results |

---

<a name="progressgameeventbyserverrequest"></a>
### message `ProgressGameEventByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | gameEventId |
| **int32** | points |

---

<a name="progressgameeventsbyserverrequest"></a>
### message `ProgressGameEventsByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ProgressGameEventByServerRequest`](#progressgameeventbyserverrequest) | requests |

---

<a name="inventoryitemamount"></a>
### message `InventoryItemAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | inventoryItemDefinitionId |
| **int32** | value |

---

<a name="exchangeentity"></a>
### message `ExchangeEntity`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryItemAmount`](#inventoryitemamount) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |

---

<a name="expiringruleinfo"></a>
### message `ExpiringRuleInfo`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | expiresAfter |
| **int32** | expiresAt |

---

<a name="propertybasedamount"></a>
### message `PropertyBasedAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | amount |

---

<a name="resultpropertybasedamount"></a>
### message `ResultPropertyBasedAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PropertyBasedAmount`](#propertybasedamount) | propertyBasedAmount |
| **string** | computableProperty |

---

<a name="progressgameeventamount"></a>
### message `ProgressGameEventAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | eventCode |
| **int32** | points |

---

<a name="reciperesult"></a>
### message `RecipeResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryItemAmount`](#inventoryitemamount) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`ResultPropertyBasedAmount`](#resultpropertybasedamount) | propertyBasedAmounts |
| [`ProgressGameEventAmount`](#progressgameeventamount) | progressGameEventAmounts |
| [`StatAmount`](#statamount) | statAmounts |
| **string** | recipes |

---

<a name="recipeinfolite"></a>
### message `RecipeInfoLite`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipe |
| [`ExchangeEntity`](#exchangeentity) | entities |
| [`ExpiringRuleInfo`](#expiringruleinfo) | expiringRule |
| [`RecipeResult`](#reciperesult) | results |

---

<a name="rewardinfo"></a>
### message `RewardInfo`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryItemAmount`](#inventoryitemamount) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`RecipeInfoLite`](#recipeinfolite) | recipes |
| [`ExpiringRuleInfo`](#expiringruleinfo) | expiringRule |

---

<a name="gamepasslevel"></a>
### message `GamePassLevel`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | level |
| **int32** | minPoints |
| [`RewardInfo`](#rewardinfo) | reward |
| **int32** | reoccurringPoints |

---

<a name="gamepass"></a>
### message `GamePass`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | code |
| **int32** | keyItemDefinitionId |
| [`GamePassLevel`](#gamepasslevel) | levels |
| **int32** | currentLevel |
| **int32** | levelsToClaimReward |

---

<a name="property"></a>
### message `Property`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| [`PropertyType`](#propertytype) | type |
| **int32** | intValue |
| **int32** | floatValue |
| **int32** | longValue |
| **int32** | stringValue |
| **int32** | booleanValue |

---

<a name="localizedtitle"></a>
### message `LocalizedTitle`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **string** | description |
| **string** | resourceUrl |

---

<a name="currentgameevent"></a>
### message `CurrentGameEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | code |
| **int64** | dateSince |
| **int64** | dateUntil |
| **int32** | durationDays |
| [`GamePass`](#gamepass) | gamePasses |
| **int32** | points |
| **int32** | currentDay |
| [`Property`](#property) | settings |
| [`LocalizedTitle`](#localizedtitle) | title |
| **string** | action |
| **bool** | isProgressShared |

---

<a name="getcurrentgameeventsbyserverresponse"></a>
### message `GetCurrentGameEventsByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrentGameEvent`](#currentgameevent) | gameEvents |

---

<a name="getcurrentgameeventsbyserverrequest"></a>
### message `GetCurrentGameEventsByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameVersion |

---

<a name="progresschallengebyserverresponse"></a>
### message `ProgressChallengeByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | completed |
| **int32** | challengePoints |
| [`GivenReward`](#givenreward) | challengeReward |
| **int32** | eventPoints |
| [`GivenReward`](#givenreward) | eventReward |

---

<a name="progresschallengesbyserverresult"></a>
### message `ProgressChallengesByServerResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **bool** | success |
| [`ProgressChallengeByServerResponse`](#progresschallengebyserverresponse) | result |
| **string** | gameEventChallengeId |
| **string** | gameEventChallengeProgressId |

---

<a name="progresschallengesbyserverresponse"></a>
### message `ProgressChallengesByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ProgressChallengesByServerResult`](#progresschallengesbyserverresult) | results |

---

<a name="progresschallengebyserverrequest"></a>
### message `ProgressChallengeByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventChallengeId |
| **int32** | points |
| **string** | gpid |
| **string** | gameEventChallengeProgressId |

---

<a name="progresschallengesbyserverrequest"></a>
### message `ProgressChallengesByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ProgressChallengeByServerRequest`](#progresschallengebyserverrequest) | requests |

---

<a name="dayrange"></a>
### message `DayRange`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | from |
| **int32** | to |

---

<a name="currentchallenge"></a>
### message `CurrentChallenge`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventChallengeId |
| **string** | code |
| **int32** | keyItemDefinitionId |
| [`LocalizedTitle`](#localizedtitle) | localizedTitle |
| **string** | action |
| [`DayRange`](#dayrange) | dayRange |
| **string** | type |
| **int32** | eventPoints |
| **int32** | targetPoints |
| **int32** | currentPoints |
| [`RewardInfo`](#rewardinfo) | reward |
| **bool** | completed |
| **string** | gameEventId |
| **bool** | rewardsObtained |
| **string** | gameEventChallengeProgressId |

---

<a name="getallchallengesbyserverresponse"></a>
### message `GetAllChallengesByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrentChallenge`](#currentchallenge) | challenges |

---

<a name="getallchallengesbyserverrequest"></a>
### message `GetAllChallengesByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventIds |

---

<a name="clanstat"></a>
### message `ClanStat`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`StatDefType`](#statdeftype) | type |
| **int32** | intValue |
| **float** | floatValue |
| **int64** | longValue |
| **string** | statId |

---

<a name="clanstats"></a>
### message `ClanStats`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| [`ClanStat`](#clanstat) | stats |
| **string** | seasonId |

---

<a name="gsgetclanstatsresponse"></a>
### message `GSGetClanStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |
| **int64** | version |

---

<a name="gsgetclanstatsrequest"></a>
### message `GSGetClanStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| **string** | clanStatIds |
| **string** | clanMemberIds |
| **string** | clanMemberStatIds |

---

<a name="gssaveclanstatsresponse"></a>
### message `GSSaveClanStatsResponse`
**Fields:**

*No fields*

---

<a name="gssaveclanstatsrequest"></a>
### message `GSSaveClanStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |
| **int64** | version |

---

<a name="testauthresponse"></a>
### message `TestAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authtest"></a>
### message `AuthTest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | token |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="testauthrequest"></a>
### message `TestAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthTest`](#authtest) | authTest |
| [`AppVerification`](#appverification) | verification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="huaweiunlinkauthresponse"></a>
### message `HuaweiUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="huaweiunlinkauthrequest"></a>
### message `HuaweiUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="huaweiauthresponse"></a>
### message `HuaweiAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authhuawei"></a>
### message `AuthHuawei`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | idToken |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="huaweiauthrequest"></a>
### message `HuaweiAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthHuawei`](#authhuawei) | authHuawei |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="huaweilinkauthresponse"></a>
### message `HuaweiLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="huaweilinkauthrequest"></a>
### message `HuaweiLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthHuawei`](#authhuawei) | authHuawei |

---

<a name="transferinventoryitemsresponse"></a>
### message `TransferInventoryItemsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItems |

---

<a name="transferinventoryitemsrequest"></a>
### message `TransferInventoryItemsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | fromItemId |
| **int32** | toItemId |
| **int32** | quantity |

---

<a name="getallotherplayerpublicitemsresponse"></a>
### message `GetAllOtherPlayerPublicItemsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItems |

---

<a name="flagfilter"></a>
### message `FlagFilter`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | mask |
| [`FlagFilter_Types_MaskOperation`](#flagfilter_types_maskoperation) | operation |

---

<a name="getallotherplayerpublicitemsrequest"></a>
### message `GetAllOtherPlayerPublicItemsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`FlagFilter`](#flagfilter) | flagFilter |

---

<a name="tradeinventoryitemsresponse"></a>
### message `TradeInventoryItemsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItems |

---

<a name="tradeinventoryitemsrequest"></a>
### message `TradeInventoryItemsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | localItemId |
| [`CurrencyAmount`](#currencyamount) | localCurrencyAmount |
| **int64** | remoteGpid |
| **int32** | remoteItemId |
| [`CurrencyAmount`](#currencyamount) | remoteCurrencyAmount |

---

<a name="activatecouponresponse"></a>
### message `ActivateCouponResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | inventoryItems |

---

<a name="activatecouponrequest"></a>
### message `ActivateCouponRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | couponId |

---

<a name="setinventoryitempublicityresponse"></a>
### message `SetInventoryItemPublicityResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | items |

---

<a name="changepublicityitem"></a>
### message `ChangePublicityItem`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | inventoryItemId |
| **int32** | itemDefinitionId |
| **bool** | public |

---

<a name="setinventoryitempublicityrequest"></a>
### message `SetInventoryItemPublicityRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ChangePublicityItem`](#changepublicityitem) | items |

---

<a name="exchangereciperesult"></a>
### message `ExchangeRecipeResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | addedItems |
| [`PlayerInventoryItem`](#playerinventoryitem) | changedItems |
| [`StatAmount`](#statamount) | stats |

---

<a name="executerecipeencrypted2response"></a>
### message `ExecuteRecipeEncrypted2Response`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ExchangeRecipeResult`](#exchangereciperesult) | exchangeResult |

---

<a name="executereciperequest"></a>
### message `ExecuteRecipeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipeCode |
| **int32** | inventoryItemIds |
| **int32** | executionMultiplier |

---

<a name="setinventoryitemflagsresponse"></a>
### message `SetInventoryItemFlagsResponse`
**Fields:**

*No fields*

---

<a name="itemflags"></a>
### message `ItemFlags`
**Fields:**

*No fields*

---

<a name="setinventoryitemflagsrequest"></a>
### message `SetInventoryItemFlagsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ItemFlags`](#itemflags) | itemFlags |

---

<a name="resultsuite"></a>
### message `ResultSuite`
**Fields:**

| Type | Name |
| :--- | :--- |
| **float** | probability |
| **int32** | itemDefinitionIds |

---

<a name="getrecipestateresponse"></a>
### message `GetRecipeStateResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`ResultSuite`](#resultsuite) | resultSuites |
| **int32** | currentExecutionCount |

---

<a name="getrecipestaterequest"></a>
### message `GetRecipeStateRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipeCode |

---

<a name="playerinventory"></a>
### message `PlayerInventory`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | inventoryItems |

---

<a name="getplayerinventoryresponse"></a>
### message `GetPlayerInventoryResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventory`](#playerinventory) | playerInventory |

---

<a name="getplayerinventoryrequest"></a>
### message `GetPlayerInventoryRequest`
**Fields:**

*No fields*

---

<a name="unmountinventoryitemresponse"></a>
### message `UnmountInventoryItemResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | unmountedItem |

---

<a name="unmountinventoryitemrequest"></a>
### message `UnmountInventoryItemRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | modifiedItemId |
| **string** | modificationName |

---

<a name="inventoryitempropertydefinition"></a>
### message `InventoryItemPropertyDefinition`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| [`PropertyType`](#propertytype) | propertyType |
| **bool** | saveInTrade |
| [`PropertySetByType`](#propertysetbytype) | setByType |
| [`RetrievableType`](#retrievabletype) | retrievable |
| **int32** | boundExclusive |

---

<a name="inventoryitemdefinition"></a>
### message `InventoryItemDefinition`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **string** | displayName |
| [`CurrencyAmount`](#currencyamount) | buyPrice |
| [`CurrencyAmount`](#currencyamount) | sellPrice |
| **bool** | canBeTraded |
| **int32** | maxStackSize |
| **bool** | canBeRented |
| **int64** | marketAvailableFromDate |

---

<a name="getinventoryitemdefinitionsresponse"></a>
### message `GetInventoryItemDefinitionsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryItemDefinition`](#inventoryitemdefinition) | inventoryItemDefinitions |
| **string** | lastUpdated |

---

<a name="getinventoryitemdefinitionsrequest"></a>
### message `GetInventoryItemDefinitionsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lastUpdated |

---

<a name="removeitemmodificationresponse"></a>
### message `RemoveItemModificationResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItem |

---

<a name="removeitemmodificationrequest"></a>
### message `RemoveItemModificationRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemId |
| **string** | propertyName |
| **int32** | itemDefinitionId |

---

<a name="consumeinventoryitemresponse"></a>
### message `ConsumeInventoryItemResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItem |

---

<a name="consumeinventoryitemrequest"></a>
### message `ConsumeInventoryItemRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | inventoryItemId |
| **int32** | quantity |
| **int32** | itemDefinitionId |

---

<a name="mountinventoryitemresponse"></a>
### message `MountInventoryItemResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | modifiedItem |
| [`PlayerInventoryItem`](#playerinventoryitem) | unmountedItem |

---

<a name="mountinventoryitemrequest"></a>
### message `MountInventoryItemRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | consumedItemId |
| **int32** | modifiedItemId |
| **string** | modificationName |

---

<a name="recipecomponents"></a>
### message `RecipeComponents`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryItemAmount`](#inventoryitemamount) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PropertyBasedAmount`](#propertybasedamount) | propertyBasedAmounts |

---

<a name="regularresult"></a>
### message `RegularResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RecipeResult`](#reciperesult) | result |
| **int32** | step |

---

<a name="guaranteedresult"></a>
### message `GuaranteedResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RegularResult`](#regularresult) | regularResult |

---

<a name="recipeinforesponse"></a>
### message `RecipeInfoResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipe |
| [`RecipeComponents`](#recipecomponents) | components |
| [`RecipeResult`](#reciperesult) | results |
| [`GuaranteedResult`](#guaranteedresult) | guaranteedResult |
| [`ExpiringRuleInfo`](#expiringruleinfo) | expiringRule |

---

<a name="getrecipeinforesponse"></a>
### message `GetRecipeInfoResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RecipeInfoResponse`](#recipeinforesponse) | recipeInfos |

---

<a name="getrecipeinforequest"></a>
### message `GetRecipeInfoRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipeCodes |

---

<a name="setitemsmodificationsresponse"></a>
### message `SetItemsModificationsResponse`
**Fields:**

*No fields*

---

<a name="itemmodifications"></a>
### message `ItemModifications`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | itemDefinitionId |

---

<a name="setitemsmodificationsrequest"></a>
### message `SetItemsModificationsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ItemModifications`](#itemmodifications) | itemsModifications |

---

<a name="getrecipestatusresponse"></a>
### message `GetRecipeStatusResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | executionIntervalOk |
| **bool** | executionTimingOk |
| **int32** | timesExecutedTotal |
| **int64** | msUntilNextExecution |

---

<a name="getrecipestatusrequest"></a>
### message `GetRecipeStatusRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipeCode |

---

<a name="sellinventoryitemresponse"></a>
### message `SellInventoryItemResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItem |

---

<a name="sellinventoryitemrequest"></a>
### message `SellInventoryItemRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | inventoryItemId |
| **int32** | quantity |
| **int32** | currencyId |
| **int32** | itemDefinitionId |

---

<a name="buyinventoryitemresponse"></a>
### message `BuyInventoryItemResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItems |

---

<a name="buyinventoryitemrequest"></a>
### message `BuyInventoryItemRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionId |
| **int32** | quantity |
| **int32** | currencyId |
| **bool** | toManyItems |

---

<a name="inventoryitempropertydefinitions"></a>
### message `InventoryItemPropertyDefinitions`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionId |

---

<a name="getinventoryitempropertydefinitionsresponse"></a>
### message `GetInventoryItemPropertyDefinitionsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryItemPropertyDefinitions`](#inventoryitempropertydefinitions) | inventoryItemPropertyDefinitions |
| **string** | lastUpdated |

---

<a name="getinventoryitempropertydefinitionsrequest"></a>
### message `GetInventoryItemPropertyDefinitionsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lastUpdated |

---

<a name="photongame"></a>
### message `PhotonGame`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | region |
| **string** | roomId |
| **string** | appVersion |

---

<a name="playingame"></a>
### message `PlayInGame`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameCode |
| **string** | gameVersion |
| **string** | lobbyId |
| [`PhotonGame`](#photongame) | photonGame |
| **string** | lobbyName |

---

<a name="playerstatus"></a>
### message `PlayerStatus`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`PlayInGame`](#playingame) | playInGame |
| [`OnlineStatus`](#onlinestatus) | onlineStatus |

---

<a name="attribute"></a>
### message `Attribute`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PropertyType`](#propertytype) | type |
| **int32** | int |
| **float** | float |
| **string** | string |
| **bool** | boolean |

---

<a name="attributes"></a>
### message `Attributes`
**Fields:**

*No fields*

---

<a name="playerban"></a>
### message `PlayerBan`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | banCode |
| **string** | message |
| **int64** | until |
| [`BanScope`](#banscope) | banScope |

---

<a name="player"></a>
### message `Player`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | uid |
| **string** | name |
| **string** | avatarId |
| **int32** | timeInGame |
| [`PlayerStatus`](#playerstatus) | playerStatus |
| **int64** | logoutDate |
| **int64** | registrationDate |
| [`Attributes`](#attributes) | attributes |
| **string** | testerRole |
| [`PlayerBan`](#playerban) | bans |
| **bool** | deleted |
| **int32** | tags |
| **bool** | guest |

---

<a name="group"></a>
### message `Group`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | name |
| **string** | avatarId |
| [`Player`](#player) | players |

---

<a name="joingroupresponse"></a>
### message `JoinGroupResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Group`](#group) | group |

---

<a name="joingrouprequest"></a>
### message `JoinGroupRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | groupId |

---

<a name="leavegroupresponse"></a>
### message `LeaveGroupResponse`
**Fields:**

*No fields*

---

<a name="leavegrouprequest"></a>
### message `LeaveGroupRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | groupId |

---

<a name="creategroupresponse"></a>
### message `CreateGroupResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Group`](#group) | group |

---

<a name="creategrouprequest"></a>
### message `CreateGroupRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendIds |

---

<a name="gamesetting"></a>
### message `GameSetting`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | key |
| **string** | value |
| **int32** | intValue |
| **float** | floatValue |
| **bool** | boolValue |
| [`SettingType`](#settingtype) | type |
| **int64** | longValue |

---

<a name="getgamesettingsencryptedresponse"></a>
### message `GetGameSettingsEncryptedResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameSetting`](#gamesetting) | gameSettings |
| **bool** | settingsExist |

---

<a name="getgamesettingsencryptedrequest"></a>
### message `GetGameSettingsEncryptedRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bytes** | checksum |

---

<a name="inappoffer"></a>
### message `InAppOffer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | productId |
| [`RewardInfo`](#rewardinfo) | reward |

---

<a name="storeoffer"></a>
### message `StoreOffer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | itemPackId |
| [`CurrencyAmount`](#currencyamount) | currencyAmounts |
| [`RewardInfo`](#rewardinfo) | reward |

---

<a name="specialoffer_types_specialoffergloballimit"></a>
### message `SpecialOffer_Types_SpecialOfferGlobalLimit`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | total |
| **int32** | remainder |

---

<a name="specialoffer"></a>
### message `SpecialOffer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | title |
| **string** | body |
| **string** | resourceUrl |
| [`OfferType`](#offertype) | type |
| [`InAppOffer`](#inappoffer) | inappOffer |
| [`StoreOffer`](#storeoffer) | storeOffer |
| **int64** | dateUntil |
| **int32** | offersCount |
| **int64** | dateSince |
| [`Property`](#property) | settings |
| **string** | key |
| [`SpecialOffer_Types_SpecialOfferGlobalLimit`](#specialoffer_types_specialoffergloballimit) | globalLimit |

---

<a name="getspecialoffersresponse"></a>
### message `GetSpecialOffersResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SpecialOffer`](#specialoffer) | specialOffers |

---

<a name="getspecialoffersrequest"></a>
### message `GetSpecialOffersRequest`
**Fields:**

*No fields*

---

<a name="changelobbyotherplayertyperesponse"></a>
### message `ChangeLobbyOtherPlayerTypeResponse`
**Fields:**

*No fields*

---

<a name="changelobbyotherplayertyperequest"></a>
### message `ChangeLobbyOtherPlayerTypeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`LobbyPlayerType`](#lobbyplayertype) | playerType |

---

<a name="playerfriend"></a>
### message `PlayerFriend`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |
| **int64** | lastRelationshipUpdate |
| **string** | msg |

---

<a name="lobbyinvite"></a>
### message `LobbyInvite`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |
| [`PlayerFriend`](#playerfriend) | inviteSender |
| **int64** | date |
| [`LobbyPlayerType`](#lobbyplayertype) | playerType |
| **string** | lobbyName |

---

<a name="getinvitestolobbyresponse"></a>
### message `GetInvitesToLobbyResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyInvite`](#lobbyinvite) | lobbyInvites |

---

<a name="getinvitestolobbyrequest"></a>
### message `GetInvitesToLobbyRequest`
**Fields:**

*No fields*

---

<a name="gameserver"></a>
### message `GameServer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | ip |
| **int32** | port |

---

<a name="lobby"></a>
### message `Lobby`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | ownerGpid |
| **string** | name |
| [`LobbyType`](#lobbytype) | lobbyType |
| **bool** | joinable |
| **int32** | maxMembers |
| [`PlayerFriend`](#playerfriend) | members |
| [`PlayerFriend`](#playerfriend) | invites |
| [`GameServer`](#gameserver) | gameServer |
| [`PhotonGame`](#photongame) | photonGame |
| **int32** | maxSpectators |
| [`PlayerFriend`](#playerfriend) | spectators |
| [`PlayerFriend`](#playerfriend) | spectatorInvites |
| **int32** | numberOfMembers |
| **int32** | numberOfSpectators |
| **string** | token |

---

<a name="getlobbyresponse"></a>
### message `GetLobbyResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Lobby`](#lobby) | lobby |

---

<a name="getlobbyrequest"></a>
### message `GetLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="sendlobbychatmsgresponse"></a>
### message `SendLobbyChatMsgResponse`
**Fields:**

*No fields*

---

<a name="sendlobbychatmsgrequest"></a>
### message `SendLobbyChatMsgRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | message |

---

<a name="refuseinvitationtolobbyresponse"></a>
### message `RefuseInvitationToLobbyResponse`
**Fields:**

*No fields*

---

<a name="refuseinvitationtolobbyrequest"></a>
### message `RefuseInvitationToLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="gameserverdetails"></a>
### message `GameServerDetails`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| [`GameServer`](#gameserver) | gameServer |
| **string** | map |
| **int32** | currentPlayers |
| **int32** | maxPlayers |
| **int32** | botPlayers |
| **bool** | requirePassword |
| **string** | version |
| **bool** | successfulResponse |
| **bool** | doNotRefresh |

---

<a name="getgameserverdetailsresponse"></a>
### message `GetGameServerDetailsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameServerDetails`](#gameserverdetails) | gameServerDetails |

---

<a name="getgameserverdetailsrequest"></a>
### message `GetGameServerDetailsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameServerId |

---

<a name="kickplayerfromlobbyresponse"></a>
### message `KickPlayerFromLobbyResponse`
**Fields:**

*No fields*

---

<a name="kickplayerfromlobbyrequest"></a>
### message `KickPlayerFromLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | kickedGpid |

---

<a name="setlobbytyperesponse"></a>
### message `SetLobbyTypeResponse`
**Fields:**

*No fields*

---

<a name="setlobbytyperequest"></a>
### message `SetLobbyTypeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyType`](#lobbytype) | lobbyType |

---

<a name="changelobbyplayertyperesponse"></a>
### message `ChangeLobbyPlayerTypeResponse`
**Fields:**

*No fields*

---

<a name="changelobbyplayertyperequest"></a>
### message `ChangeLobbyPlayerTypeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyPlayerType`](#lobbyplayertype) | playerType |

---

<a name="deletelobbydataresponse"></a>
### message `DeleteLobbyDataResponse`
**Fields:**

*No fields*

---

<a name="deletelobbydatarequest"></a>
### message `DeleteLobbyDataRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | keys |

---

<a name="inviteplayertolobbyasresponse"></a>
### message `InvitePlayerToLobbyAsResponse`
**Fields:**

*No fields*

---

<a name="inviteplayertolobbyasrequest"></a>
### message `InvitePlayerToLobbyAsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | invitedGpid |
| [`LobbyPlayerType`](#lobbyplayertype) | playerType |

---

<a name="setlobbyjoinableresponse"></a>
### message `SetLobbyJoinableResponse`
**Fields:**

*No fields*

---

<a name="setlobbyjoinablerequest"></a>
### message `SetLobbyJoinableRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | joinable |

---

<a name="setlobbydataresponse"></a>
### message `SetLobbyDataResponse`
**Fields:**

*No fields*

---

<a name="dictionary"></a>
### message `Dictionary`
**Fields:**

*No fields*

---

<a name="setlobbydatarequest"></a>
### message `SetLobbyDataRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Dictionary`](#dictionary) | data |

---

<a name="inviteplayertolobbyresponse"></a>
### message `InvitePlayerToLobbyResponse`
**Fields:**

*No fields*

---

<a name="inviteplayertolobbyrequest"></a>
### message `InvitePlayerToLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | invitedGpid |

---

<a name="requestlobbylistresponse"></a>
### message `RequestLobbyListResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Lobby`](#lobby) | lobbies |

---

<a name="filter"></a>
### message `Filter`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| [`Comparison`](#comparison) | comparison |
| **int32** | intValue |
| **int32** | floatValue |
| **int32** | stringValue |
| **int32** | strings |

---

<a name="requestlobbylistrequest"></a>
### message `RequestLobbyListRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyDistanceFilter`](#lobbydistancefilter) | distanceFilter |
| [`Filter`](#filter) | filters |

---

<a name="joinlobbyasresponse"></a>
### message `JoinLobbyAsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Lobby`](#lobby) | lobby |

---

<a name="joinlobbyasrequest"></a>
### message `JoinLobbyAsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |
| [`LobbyPlayerType`](#lobbyplayertype) | playerType |
| **string** | token |

---

<a name="getgameserverplayersresponse"></a>
### message `GetGameServerPlayersResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | players |

---

<a name="getgameserverplayersrequest"></a>
### message `GetGameServerPlayersRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameServerId |

---

<a name="setlobbyownerresponse"></a>
### message `SetLobbyOwnerResponse`
**Fields:**

*No fields*

---

<a name="setlobbyownerrequest"></a>
### message `SetLobbyOwnerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |

---

<a name="revokeplayerinvitationtolobbyresponse"></a>
### message `RevokePlayerInvitationToLobbyResponse`
**Fields:**

*No fields*

---

<a name="revokeplayerinvitationtolobbyrequest"></a>
### message `RevokePlayerInvitationToLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | revokedGpid |

---

<a name="getlobbyownerresponse"></a>
### message `GetLobbyOwnerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | owner |

---

<a name="getlobbyownerrequest"></a>
### message `GetLobbyOwnerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="leavelobbyresponse"></a>
### message `LeaveLobbyResponse`
**Fields:**

*No fields*

---

<a name="leavelobbyrequest"></a>
### message `LeaveLobbyRequest`
**Fields:**

*No fields*

---

<a name="createlobbywithspectatorsresponse"></a>
### message `CreateLobbyWithSpectatorsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Lobby`](#lobby) | lobby |

---

<a name="createlobbywithspectatorsrequest"></a>
### message `CreateLobbyWithSpectatorsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| [`LobbyType`](#lobbytype) | lobbyType |
| **int32** | maxMembers |
| **int32** | maxSpectators |
| **string** | dataVisibleInSearch |
| [`Dictionary`](#dictionary) | data |

---

<a name="setlobbynameresponse"></a>
### message `SetLobbyNameResponse`
**Fields:**

*No fields*

---

<a name="setlobbynamerequest"></a>
### message `SetLobbyNameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |

---

<a name="getlobbygameserverresponse"></a>
### message `GetLobbyGameServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameServerDetails`](#gameserverdetails) | gameServerDetails |

---

<a name="getlobbygameserverrequest"></a>
### message `GetLobbyGameServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="setlobbymaxspectatorsresponse"></a>
### message `SetLobbyMaxSpectatorsResponse`
**Fields:**

*No fields*

---

<a name="setlobbymaxspectatorsrequest"></a>
### message `SetLobbyMaxSpectatorsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | maxSpectators |

---

<a name="setlobbymaxmembersresponse"></a>
### message `SetLobbyMaxMembersResponse`
**Fields:**

*No fields*

---

<a name="setlobbymaxmembersrequest"></a>
### message `SetLobbyMaxMembersRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | maxMembers |

---

<a name="setlobbygameserverresponse"></a>
### message `SetLobbyGameServerResponse`
**Fields:**

*No fields*

---

<a name="setlobbygameserverrequest"></a>
### message `SetLobbyGameServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameServerId |

---

<a name="joinlobbyresponse"></a>
### message `JoinLobbyResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Lobby`](#lobby) | lobby |

---

<a name="joinlobbyrequest"></a>
### message `JoinLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="searchlobbyresponse"></a>
### message `SearchLobbyResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Lobby`](#lobby) | lobbies |

---

<a name="searchlobbyrequest"></a>
### message `SearchLobbyRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | amount |
| [`Filter`](#filter) | filters |
| **int32** | version |

---

<a name="getlobbyphotongameresponse"></a>
### message `GetLobbyPhotonGameResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PhotonGame`](#photongame) | photonGame |

---

<a name="getlobbyphotongamerequest"></a>
### message `GetLobbyPhotonGameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="setlobbyphotongameresponse"></a>
### message `SetLobbyPhotonGameResponse`
**Fields:**

*No fields*

---

<a name="setlobbyphotongamerequest"></a>
### message `SetLobbyPhotonGameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PhotonGame`](#photongame) | photonGame |

---

<a name="requestinternetserverlistresponse"></a>
### message `RequestInternetServerListResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameServer`](#gameserver) | gameServers |

---

<a name="requestinternetserverlistrequest"></a>
### message `RequestInternetServerListRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | map |
| **int32** | freePlayerSlots |
| **int32** | maxPlayers |
| **bool** | withPassword |

---

<a name="getlobbymembersresponse"></a>
### message `GetLobbyMembersResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | players |

---

<a name="getlobbymembersrequest"></a>
### message `GetLobbyMembersRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyId |

---

<a name="processingrequest"></a>
### message `ProcessingRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **int32** | itemDefinitionId |
| **float** | price |
| **int64** | createDate |
| [`MarketRequestType`](#marketrequesttype) | type |
| **string** | saleRequestId |
| [`ProcessingState`](#processingstate) | state |
| **int32** | quantity |

---

<a name="getplayerprocessingrequestresponse"></a>
### message `GetPlayerProcessingRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ProcessingRequest`](#processingrequest) | processingRequests |

---

<a name="getplayerprocessingrequestrequest"></a>
### message `GetPlayerProcessingRequestRequest`
**Fields:**

*No fields*

---

<a name="openrequest"></a>
### message `OpenRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| [`Player`](#player) | creator |
| **int32** | itemDefinitionId |
| **float** | price |
| **int64** | createDate |
| [`MarketRequestType`](#marketrequesttype) | type |
| **int32** | quantity |
| **bool** | isCreator |

---

<a name="gettradeopensalerequestsresponse"></a>
### message `GetTradeOpenSaleRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OpenRequest`](#openrequest) | openRequests |

---

<a name="operationvaluepair"></a>
### message `OperationValuePair`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OperationValuePair_Types_Operation`](#operationvaluepair_types_operation) | operation |
| **int32** | intValue |
| **int32** | boolValue |

---

<a name="tradefilters"></a>
### message `TradeFilters`
**Fields:**

*No fields*

---

<a name="gettradeopensalerequestsrequest"></a>
### message `GetTradeOpenSaleRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | page |
| **int32** | size |
| [`TradeFilters`](#tradefilters) | tradeFilters |

---

<a name="createpurchaserequestbysaleresponse"></a>
### message `CreatePurchaseRequestBySaleResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | purchaseRequestId |

---

<a name="createpurchaserequestbysalerequest"></a>
### message `CreatePurchaseRequestBySaleRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | saleId |

---

<a name="trade"></a>
### message `Trade`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | salesCount |
| **int32** | purchasesCount |
| **float** | salesPrice |
| **float** | purchasesPrice |

---

<a name="gettradesresponse"></a>
### message `GetTradesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Trade`](#trade) | trades |

---

<a name="gettradesrequest"></a>
### message `GetTradesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionIds |

---

<a name="gettradeopenpurchaserequestsresponse"></a>
### message `GetTradeOpenPurchaseRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OpenRequest`](#openrequest) | openRequests |

---

<a name="gettradeopenpurchaserequestsrequest"></a>
### message `GetTradeOpenPurchaseRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | page |
| **int32** | size |

---

<a name="getplayeropenrequestsresponse"></a>
### message `GetPlayerOpenRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OpenRequest`](#openrequest) | openRequests |

---

<a name="getplayeropenrequestsrequest"></a>
### message `GetPlayerOpenRequestsRequest`
**Fields:**

*No fields*

---

<a name="cancelrequestresponse"></a>
### message `CancelRequestResponse`
**Fields:**

*No fields*

---

<a name="cancelrequestrequest"></a>
### message `CancelRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="createsaleresponse"></a>
### message `CreateSaleResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="createsalerequest"></a>
### message `CreateSaleRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemId |
| **float** | price |
| **int32** | itemDefinitionId |

---

<a name="createpurchaserequestresponse"></a>
### message `CreatePurchaseRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | purchaseRequestId |

---

<a name="createpurchaserequestrequest"></a>
### message `CreatePurchaseRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionId |
| **float** | price |
| **int32** | quantity |

---

<a name="banned"></a>
### message `Banned`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | banned_ |
| **int64** | untilDate |

---

<a name="marketplacesettings"></a>
### message `MarketplaceSettings`
**Fields:**

| Type | Name |
| :--- | :--- |
| **float** | commissionPercent |
| **float** | minCommission |
| **int32** | currencyId |
| **bool** | enabled |
| [`Banned`](#banned) | banned |

---

<a name="getmarketplacesettingsresponse"></a>
### message `GetMarketplaceSettingsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`MarketplaceSettings`](#marketplacesettings) | marketplaceSettings |

---

<a name="getmarketplacesettingsrequest"></a>
### message `GetMarketplaceSettingsRequest`
**Fields:**

*No fields*

---

<a name="createmultiplesalesresponse"></a>
### message `CreateMultipleSalesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestIds |

---

<a name="inventorystackamount"></a>
### message `InventoryStackAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | inventoryItemStackId |
| **int32** | value |

---

<a name="createmultiplesalesrequest"></a>
### message `CreateMultipleSalesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`InventoryStackAmount`](#inventorystackamount) | stacks |
| **float** | price |
| **int32** | itemDefinitionId |

---

<a name="gettraderesponse"></a>
### message `GetTradeResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Trade`](#trade) | trade |

---

<a name="gettraderequest"></a>
### message `GetTradeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |

---

<a name="getplayerclosedrequestscountresponse"></a>
### message `GetPlayerClosedRequestsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getplayerclosedrequestscountrequest"></a>
### message `GetPlayerClosedRequestsCountRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`MarketRequestType`](#marketrequesttype) | type |
| [`ClosingReason`](#closingreason) | reason |

---

<a name="closedrequest"></a>
### message `ClosedRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | originId |
| [`Player`](#player) | creator |
| **int32** | itemDefinitionId |
| **float** | price |
| **int64** | createDate |
| **int64** | closeDate |
| [`MarketRequestType`](#marketrequesttype) | type |
| [`Player`](#player) | partner |
| **string** | partnerRequestId |
| [`ClosingReason`](#closingreason) | reason |
| **int32** | quantity |

---

<a name="getplayerclosedrequestsresponse"></a>
### message `GetPlayerClosedRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClosedRequest`](#closedrequest) | closedRequests |

---

<a name="getplayerclosedrequestsrequest"></a>
### message `GetPlayerClosedRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`MarketRequestType`](#marketrequesttype) | type |
| [`ClosingReason`](#closingreason) | reason |
| **int32** | page |
| **int32** | size |

---

<a name="smachievementunlocked"></a>
### message `SMAchievementUnlocked`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | key |
| **string** | imageUnlocked |
| [`LocalizedTitle`](#localizedtitle) | title |

---

<a name="smavatarrejected"></a>
### message `SMAvatarRejected`
**Fields:**

*No fields*

---

<a name="smclanmembershipaccepted"></a>
### message `SMClanMembershipAccepted`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tag |
| **string** | name |
| **string** | avatarId |
| **bool** | clanAlreadyDeleted |

---

<a name="smclanmembershipended"></a>
### message `SMClanMembershipEnded`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tag |
| **string** | name |
| **string** | avatarId |
| **bool** | clanAlreadyDeleted |

---

<a name="smdevelopersmessagereceived"></a>
### message `SMDevelopersMessageReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | message |

---

<a name="smfriendshiprequestaccepted"></a>
### message `SMFriendshipRequestAccepted`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | playerId |
| **string** | uid |
| **string** | name |
| **string** | avatarId |
| **bool** | playerAlreadyDeleted |

---

<a name="smgiftreceived"></a>
### message `SMGiftReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | playerInventoryItem |
| [`CurrencyAmount`](#currencyamount) | currencyAmount |

---

<a name="smmarketplacetransactionreverted"></a>
### message `SMMarketplaceTransactionReverted`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`MarketRequestType`](#marketrequesttype) | requestType |
| **int32** | itemDefinitionId |
| **int32** | quantity |
| **float** | price |
| **int64** | closeDate |

---

<a name="matchplayerreward"></a>
### message `MatchPlayerReward`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStat`](#playerstat) | stats |

---

<a name="matchplayer"></a>
### message `MatchPlayer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | uid |
| **string** | name |
| **string** | avatarId |
| [`Property`](#property) | properties |
| [`MatchPlayerReward`](#matchplayerreward) | reward |
| **bool** | deleted |

---

<a name="matchclanreward"></a>
### message `MatchClanReward`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanStats`](#clanstats) | stats |

---

<a name="matchclan"></a>
### message `MatchClan`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| **string** | clanName |
| **string** | clanTag |
| **string** | avatarId |
| [`MatchPlayer`](#matchplayer) | players |
| [`Property`](#property) | properties |
| [`MatchClanReward`](#matchclanreward) | reward |

---

<a name="finishedmatch"></a>
### message `FinishedMatch`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | matchId |
| [`MatchType`](#matchtype) | matchType |
| **string** | creatorGpid |
| **string** | region |
| **string** | version |
| **int64** | startDate |
| **int64** | finishDate |
| **string** | seasonId |
| [`MatchState`](#matchstate) | state |
| [`Property`](#property) | properties |
| [`MatchPlayer`](#matchplayer) | players |
| [`MatchClan`](#matchclan) | clans |

---

<a name="smmatchescanceled"></a>
### message `SMMatchesCanceled`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | matches |

---

<a name="smglobalbanreceived"></a>
### message `SMGlobalBanReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | code |
| **string** | message |
| **int64** | until |

---

<a name="smreportedplayersbanned"></a>
### message `SMReportedPlayersBanned`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="smseasonfinished"></a>
### message `SMSeasonFinished`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | seasonId |
| [`PlayerInventoryItem`](#playerinventoryitem) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerStat`](#playerstat) | playerStats |
| [`ClanStat`](#clanstat) | clanStats |
| [`ClanMemberStat`](#clanmemberstat) | clanMemberStats |

---

<a name="smmarketplacebanreceived"></a>
### message `SMMarketplaceBanReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | code |
| **string** | message |
| **int64** | until |

---

<a name="smchatbanreceived"></a>
### message `SMChatBanReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | code |
| **string** | message |
| **int64** | until |

---

<a name="smmatchesrestored"></a>
### message `SMMatchesRestored`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | matches |

---

<a name="sminappsucceed"></a>
### message `SMInAppSucceed`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | productId |

---

<a name="smnewdevicelogined"></a>
### message `SMNewDeviceLogined`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | deviceModel |
| **string** | country |
| **string** | ip |

---

<a name="smrecruitssubscribed_types_subscribedrecruitplayer"></a>
### message `SMRecruitsSubscribed_Types_SubscribedRecruitPlayer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | uid |
| **string** | name |
| **bool** | playerAlreadyDeleted |

---

<a name="smrecruitssubscribed"></a>
### message `SMRecruitsSubscribed`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SMRecruitsSubscribed_Types_SubscribedRecruitPlayer`](#smrecruitssubscribed_types_subscribedrecruitplayer) | recruitPlayers |

---

<a name="smcommandercashbackreceived_types_recruitcashbackplayer"></a>
### message `SMCommanderCashbackReceived_Types_RecruitCashbackPlayer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recruitGpid |
| **string** | recruitUid |
| **string** | recruitName |
| **bool** | recruitPlayerAlreadyDeleted |
| [`CurrencyAmount`](#currencyamount) | currencyAmounts |

---

<a name="smcommandercashbackreceived"></a>
### message `SMCommanderCashbackReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SMCommanderCashbackReceived_Types_RecruitCashbackPlayer`](#smcommandercashbackreceived_types_recruitcashbackplayer) | recruitCashbackPlayers |

---

<a name="playerinventoryitemhistory"></a>
### message `PlayerInventoryItemHistory`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionId |
| **int32** | quantity |
| **int32** | flags |
| [`BlockedAction`](#blockedaction) | block |

---

<a name="givenitemshistory"></a>
### message `GivenItemsHistory`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItemHistory`](#playerinventoryitemhistory) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`StatAmount`](#statamount) | stats |

---

<a name="consumeditemshistory"></a>
### message `ConsumedItemsHistory`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItemHistory`](#playerinventoryitemhistory) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |

---

<a name="smrewardprocessed"></a>
### message `SMRewardProcessed`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RewardSource`](#rewardsource) | source |
| [`GivenItemsHistory`](#givenitemshistory) | given |
| [`ConsumedItemsHistory`](#consumeditemshistory) | consumed |

---

<a name="smstoregiftreceived"></a>
### message `SMStoreGiftReceived`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | giverGpid |
| **string** | giverUid |
| **string** | giverName |
| **string** | productIds |

---

<a name="systemmessagedetails"></a>
### message `SystemMessageDetails`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | messageId |
| [`SystemMessageType`](#systemmessagetype) | type |
| **int64** | created |
| **int64** | deleteAt |
| **int64** | updated |
| [`SMAchievementUnlocked`](#smachievementunlocked) | achievementUnlocked |
| [`SMAvatarRejected`](#smavatarrejected) | avatarRejected |
| [`SMClanMembershipAccepted`](#smclanmembershipaccepted) | clanMembershipAccepted |
| [`SMClanMembershipEnded`](#smclanmembershipended) | clanMembershipEnded |
| [`SMDevelopersMessageReceived`](#smdevelopersmessagereceived) | developersMessageReceived |
| [`SMFriendshipRequestAccepted`](#smfriendshiprequestaccepted) | friendshipRequestAccepted |
| [`SMGiftReceived`](#smgiftreceived) | giftReceived |
| [`SMMarketplaceTransactionReverted`](#smmarketplacetransactionreverted) | marketplaceTransactionReverted |
| [`SMMatchesCanceled`](#smmatchescanceled) | matchesCanceled |
| [`SMGlobalBanReceived`](#smglobalbanreceived) | globalBanReceived |
| [`SMReportedPlayersBanned`](#smreportedplayersbanned) | reportedPlayersBanned |
| [`SMSeasonFinished`](#smseasonfinished) | seasonFinished |
| [`SMMarketplaceBanReceived`](#smmarketplacebanreceived) | marketplaceBanReceived |
| [`SMChatBanReceived`](#smchatbanreceived) | chatBanReceived |
| [`SMMatchesRestored`](#smmatchesrestored) | matchesRestored |
| [`SMInAppSucceed`](#sminappsucceed) | inAppSucceed |
| [`SMNewDeviceLogined`](#smnewdevicelogined) | newDeviceLogined |
| [`SMRecruitsSubscribed`](#smrecruitssubscribed) | recruitsSubscribed |
| [`SMCommanderCashbackReceived`](#smcommandercashbackreceived) | commanderCashbackReceived |
| [`SMRewardProcessed`](#smrewardprocessed) | rewardProcessed |
| [`SMStoreGiftReceived`](#smstoregiftreceived) | storeGiftReceived |

---

<a name="getsystemmessagedetailsresponse"></a>
### message `GetSystemMessageDetailsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SystemMessageDetails`](#systemmessagedetails) | message |

---

<a name="getsystemmessagedetailsrequest"></a>
### message `GetSystemMessageDetailsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | messageId |

---

<a name="countunreadsystemmessagesresponse"></a>
### message `CountUnreadSystemMessagesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="countunreadsystemmessagesrequest"></a>
### message `CountUnreadSystemMessagesRequest`
**Fields:**

*No fields*

---

<a name="deletesystemmessagesresponse"></a>
### message `DeleteSystemMessagesResponse`
**Fields:**

*No fields*

---

<a name="deletesystemmessagesrequest"></a>
### message `DeleteSystemMessagesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | messageIds |
| **bool** | deleteAll |

---

<a name="systemmessagepreview"></a>
### message `SystemMessagePreview`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | messageId |
| [`SystemMessageType`](#systemmessagetype) | type |
| **bool** | isRead |
| **int64** | created |
| **int64** | deleteAt |
| **int64** | updated |

---

<a name="getsystemmessagesresponse"></a>
### message `GetSystemMessagesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SystemMessagePreview`](#systemmessagepreview) | messages |
| **string** | continuationToken |

---

<a name="continuationtoken"></a>
### message `ContinuationToken`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | length |
| **string** | token |

---

<a name="getsystemmessagesrequest"></a>
### message `GetSystemMessagesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ContinuationToken`](#continuationtoken) | continuationToken |
| **bool** | unreadOnly |

---

<a name="readsystemmessagesresponse"></a>
### message `ReadSystemMessagesResponse`
**Fields:**

*No fields*

---

<a name="readsystemmessagesrequest"></a>
### message `ReadSystemMessagesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | messageIds |
| **bool** | readAll |

---

<a name="setplayersettingsresponse"></a>
### message `SetPlayerSettingsResponse`
**Fields:**

*No fields*

---

<a name="playersettings"></a>
### message `PlayerSettings`
**Fields:**

*No fields*

---

<a name="setplayersettingsrequest"></a>
### message `SetPlayerSettingsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerSettings`](#playersettings) | settings |

---

<a name="deleteaccountbypermissionresponse"></a>
### message `DeleteAccountByPermissionResponse`
**Fields:**

*No fields*

---

<a name="deleteaccountbypermissionrequest"></a>
### message `DeleteAccountByPermissionRequest`
**Fields:**

*No fields*

---

<a name="setdefaultavatarresponse"></a>
### message `SetDefaultAvatarResponse`
**Fields:**

*No fields*

---

<a name="setdefaultavatarrequest"></a>
### message `SetDefaultAvatarRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | avatarId |

---

<a name="getplayersettingsresponse"></a>
### message `GetPlayerSettingsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerSettings`](#playersettings) | settings |

---

<a name="getplayersettingsrequest"></a>
### message `GetPlayerSettingsRequest`
**Fields:**

*No fields*

---

<a name="setplayeravatarresponse"></a>
### message `SetPlayerAvatarResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | avatarId |

---

<a name="setplayeravatarrequest"></a>
### message `SetPlayerAvatarRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bytes** | avatar |

---

<a name="getonlinestatusresponse"></a>
### message `GetOnlineStatusResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OnlineStatus`](#onlinestatus) | onlineStatus |

---

<a name="getonlinestatusrequest"></a>
### message `GetOnlineStatusRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |

---

<a name="banmeresponse"></a>
### message `BanMeResponse`
**Fields:**

*No fields*

---

<a name="banmerequest"></a>
### message `BanMeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | code |
| **string** | description |

---

<a name="setawaystatusresponse"></a>
### message `SetAwayStatusResponse`
**Fields:**

*No fields*

---

<a name="setawaystatusrequest"></a>
### message `SetAwayStatusRequest`
**Fields:**

*No fields*

---

<a name="getplayerresponse"></a>
### message `GetPlayerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |
| **int32** | permissions |
| **string** | uuid |
| **string** | intercomHMAC |
| **string** | email |

---

<a name="getplayerrequest"></a>
### message `GetPlayerRequest`
**Fields:**

*No fields*

---

<a name="setplayerfirebasetokenresponse"></a>
### message `SetPlayerFirebaseTokenResponse`
**Fields:**

*No fields*

---

<a name="setplayerfirebasetokenrequest"></a>
### message `SetPlayerFirebaseTokenRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | token |

---

<a name="getplayerbyuidresponse"></a>
### message `GetPlayerByUidResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |

---

<a name="getplayerbyuidrequest"></a>
### message `GetPlayerByUidRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | uid |

---

<a name="setplayernameresponse"></a>
### message `SetPlayerNameResponse`
**Fields:**

*No fields*

---

<a name="setplayernamerequest"></a>
### message `SetPlayerNameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | newName |

---

<a name="setonlinestatusresponse"></a>
### message `SetOnlineStatusResponse`
**Fields:**

*No fields*

---

<a name="setonlinestatusrequest"></a>
### message `SetOnlineStatusRequest`
**Fields:**

*No fields*

---

<a name="getplayerbyidresponse"></a>
### message `GetPlayerByIdResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |

---

<a name="getplayerbyidrequest"></a>
### message `GetPlayerByIdRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |

---

<a name="setandgetplayernameresponse"></a>
### message `SetAndGetPlayerNameResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | newName |

---

<a name="setandgetplayernamerequest"></a>
### message `SetAndGetPlayerNameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | newName |

---

<a name="getplayermatchesresponse"></a>
### message `GetPlayerMatchesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | matches |

---

<a name="offset"></a>
### message `Offset`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | offset_ |
| **int32** | length |

---

<a name="getplayermatchesrequest"></a>
### message `GetPlayerMatchesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`Offset`](#offset) | offset |
| [`Property`](#property) | filterProperties |

---

<a name="getmatchresponse"></a>
### message `GetMatchResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | match |

---

<a name="getmatchrequest"></a>
### message `GetMatchRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | matchId |

---

<a name="getclanmatchesresponse"></a>
### message `GetClanMatchesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | matches |

---

<a name="getclanmatchesrequest"></a>
### message `GetClanMatchesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| [`Offset`](#offset) | offset |
| [`Property`](#property) | filterProperties |

---

<a name="getcurrentplayerlastmatchresponse"></a>
### message `GetCurrentPlayerLastMatchResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | playerMatch |
| [`FinishedMatch`](#finishedmatch) | clanMatch |

---

<a name="getcurrentplayerlastmatchrequest"></a>
### message `GetCurrentPlayerLastMatchRequest`
**Fields:**

*No fields*

---

<a name="unsharefileresponse"></a>
### message `UnshareFileResponse`
**Fields:**

*No fields*

---

<a name="unsharefilerequest"></a>
### message `UnshareFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |

---

<a name="readfileresponse"></a>
### message `ReadFileResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bytes** | file |

---

<a name="readfilerequest"></a>
### message `ReadFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |

---

<a name="storage"></a>
### message `Storage`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |
| **bytes** | file |
| **string** | gpid |
| **string** | token |
| [`FileAccessMode`](#fileaccessmode) | accessMode |

---

<a name="readplayerpublicfilesresponse"></a>
### message `ReadPlayerPublicFilesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Storage`](#storage) | files |

---

<a name="readplayerpublicfilesrequest"></a>
### message `ReadPlayerPublicFilesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | filenames |

---

<a name="getsharedfileresponse"></a>
### message `GetSharedFileResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Storage`](#storage) | file |

---

<a name="getsharedfilerequest"></a>
### message `GetSharedFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | token |

---

<a name="deletefileresponse"></a>
### message `DeleteFileResponse`
**Fields:**

*No fields*

---

<a name="deletefilerequest"></a>
### message `DeleteFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |

---

<a name="readpublicfileresponse"></a>
### message `ReadPublicFileResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Storage`](#storage) | file |

---

<a name="readpublicfilerequest"></a>
### message `ReadPublicFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | filename |

---

<a name="getfilenamesresponse"></a>
### message `GetFilenamesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filenames |

---

<a name="getfilenamesrequest"></a>
### message `GetFilenamesRequest`
**Fields:**

*No fields*

---

<a name="writefileresponse"></a>
### message `WriteFileResponse`
**Fields:**

*No fields*

---

<a name="writefilerequest"></a>
### message `WriteFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |
| **bytes** | file |
| **string** | type |

---

<a name="readfilesresponse"></a>
### message `ReadFilesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Storage`](#storage) | files |

---

<a name="readfilesrequest"></a>
### message `ReadFilesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filenames |

---

<a name="readallfilesresponse"></a>
### message `ReadAllFilesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Storage`](#storage) | files |

---

<a name="readallfilesrequest"></a>
### message `ReadAllFilesRequest`
**Fields:**

*No fields*

---

<a name="changefileaccessmoderesponse"></a>
### message `ChangeFileAccessModeResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | token |

---

<a name="changefileaccessmoderequest"></a>
### message `ChangeFileAccessModeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |
| [`FileAccessMode`](#fileaccessmode) | accessMode |

---

<a name="readfile3response"></a>
### message `ReadFile3Response`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Storage`](#storage) | file |

---

<a name="readfile3request"></a>
### message `ReadFile3Request`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |

---

<a name="sharefileresponse"></a>
### message `ShareFileResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | token |

---

<a name="sharefilerequest"></a>
### message `ShareFileRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filename |

---

<a name="clanchatmessage"></a>
### message `ClanChatMessage`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | senderGpid |
| **string** | message |

---

<a name="clanlogmessage"></a>
### message `ClanLogMessage`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | clanLogType |
| **int32** | changedClanType |
| **string** | changedClanName |
| **string** | changedClanTag |
| **string** | primaryMember |
| **string** | secondaryMember |
| **int32** | changedMaxMemberCount |
| **int32** | assignedRole |

---

<a name="clanusermessage"></a>
### message `ClanUserMessage`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **int64** | timestamp |
| [`MessageType`](#messagetype) | messageType |
| [`ClanChatMessage`](#clanchatmessage) | chatMessage |
| [`ClanLogMessage`](#clanlogmessage) | logMessage |

---

<a name="getclanmessagesresponse"></a>
### message `GetClanMessagesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanUserMessage`](#clanusermessage) | clanUserMessage |

---

<a name="getclanmessagesrequest"></a>
### message `GetClanMessagesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | from |
| **int32** | count |

---

<a name="readclanlogmessagesresponse"></a>
### message `ReadClanLogMessagesResponse`
**Fields:**

*No fields*

---

<a name="readclanlogmessagesrequest"></a>
### message `ReadClanLogMessagesRequest`
**Fields:**

*No fields*

---

<a name="readclanchatmessagesresponse"></a>
### message `ReadClanChatMessagesResponse`
**Fields:**

*No fields*

---

<a name="readclanchatmessagesrequest"></a>
### message `ReadClanChatMessagesRequest`
**Fields:**

*No fields*

---

<a name="getclanchatmessagesresponse"></a>
### message `GetClanChatMessagesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanUserMessage`](#clanusermessage) | clanUserMessage |

---

<a name="getclanchatmessagesrequest"></a>
### message `GetClanChatMessagesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | from |
| **int32** | count |

---

<a name="sendclanchatmessageresponse"></a>
### message `SendClanChatMessageResponse`
**Fields:**

*No fields*

---

<a name="sendclanchatmessagerequest"></a>
### message `SendClanChatMessageRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | message |

---

<a name="getclanlogmessagesresponse"></a>
### message `GetClanLogMessagesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanUserMessage`](#clanusermessage) | clanUserMessage |

---

<a name="getclanlogmessagesrequest"></a>
### message `GetClanLogMessagesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | from |
| **int32** | count |

---

<a name="getunreadchatmessagescountresponse"></a>
### message `GetUnreadChatMessagesCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getunreadchatmessagescountrequest"></a>
### message `GetUnreadChatMessagesCountRequest`
**Fields:**

*No fields*

---

<a name="getunreadlogmessagescountresponse"></a>
### message `GetUnreadLogMessagesCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getunreadlogmessagescountrequest"></a>
### message `GetUnreadLogMessagesCountRequest`
**Fields:**

*No fields*

---

<a name="avatarbinary"></a>
### message `AvatarBinary`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **bytes** | avatar |

---

<a name="getavatarsresponse"></a>
### message `GetAvatarsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AvatarBinary`](#avatarbinary) | avatarBinaries |

---

<a name="getavatarsrequest"></a>
### message `GetAvatarsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | avatarIds |

---

<a name="defaultavatar"></a>
### message `DefaultAvatar`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | avatarId |

---

<a name="getdefaultavatarsresponse"></a>
### message `GetDefaultAvatarsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`DefaultAvatar`](#defaultavatar) | avatars |
| **string** | lastUpdated |

---

<a name="getdefaultavatarsrequest"></a>
### message `GetDefaultAvatarsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lastUpdated |

---

<a name="consumeitemsbyserverresponse"></a>
### message `ConsumeItemsByServerResponse`
**Fields:**

*No fields*

---

<a name="inventoryitemstackamount"></a>
### message `InventoryItemStackAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | inventoryItemStackId |
| **int32** | value |
| **int32** | itemDefinitionId |

---

<a name="consumeditems"></a>
### message `ConsumedItems`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`InventoryItemStackAmount`](#inventoryitemstackamount) | items |

---

<a name="consumeitemsbyserverrequest"></a>
### message `ConsumeItemsByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ConsumedItems`](#consumeditems) | consumptions |

---

<a name="setplayeritemsmodificationsresult"></a>
### message `SetPlayerItemsModificationsResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **bool** | success |

---

<a name="setitemsmodificationsbyserverresponse"></a>
### message `SetItemsModificationsByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SetPlayerItemsModificationsResult`](#setplayeritemsmodificationsresult) | results |

---

<a name="setplayeritemsmodifications"></a>
### message `SetPlayerItemsModifications`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`ItemModifications`](#itemmodifications) | items |

---

<a name="setitemsmodificationsbyserverrequest"></a>
### message `SetItemsModificationsByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SetPlayerItemsModifications`](#setplayeritemsmodifications) | requests |

---

<a name="giveinventorybyserverresult"></a>
### message `GiveInventoryByServerResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | success |
| **string** | gpid |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | inventoryItems |

---

<a name="giveinventorybyserverrequestresult"></a>
### message `GiveInventoryByServerRequestResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GiveInventoryByServerResult`](#giveinventorybyserverresult) | results |

---

<a name="giveinventorybyserverresponse"></a>
### message `GiveInventoryByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GiveInventoryByServerRequestResult`](#giveinventorybyserverrequestresult) | results |

---

<a name="rewardinventoryitemamount"></a>
### message `RewardInventoryItemAmount`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionId |
| **int32** | quantity |
| **int32** | flags |

---

<a name="giveinventorybyserver"></a>
### message `GiveInventoryByServer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpids |
| [`RewardInventoryItemAmount`](#rewardinventoryitemamount) | items |
| [`CurrencyAmount`](#currencyamount) | currencies |

---

<a name="giveinventorybyserverrequest"></a>
### message `GiveInventoryByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GiveInventoryByServer`](#giveinventorybyserver) | requests |

---

<a name="exchangeresult"></a>
### message `ExchangeResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | currencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | inventoryItems |
| [`StatAmount`](#statamount) | stats |

---

<a name="executerecipebyserverplayerresult"></a>
### message `ExecuteRecipeByServerPlayerResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **bool** | success |
| [`ExchangeResult`](#exchangeresult) | exchangeResult |

---

<a name="executerecipebyserverresult"></a>
### message `ExecuteRecipeByServerResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipeCode |
| [`ExecuteRecipeByServerPlayerResult`](#executerecipebyserverplayerresult) | results |

---

<a name="executerecipebyserverresponse"></a>
### message `ExecuteRecipeByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ExecuteRecipeByServerResult`](#executerecipebyserverresult) | results |

---

<a name="executerecipebyserver"></a>
### message `ExecuteRecipeByServer`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recipeCode |
| **string** | gpids |

---

<a name="executerecipebyserverrequest"></a>
### message `ExecuteRecipeByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ExecuteRecipeByServer`](#executerecipebyserver) | executeRecipeRequests |

---

<a name="filtereditems"></a>
### message `FilteredItems`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | items |
| **string** | gpid |

---

<a name="playerinventoryitemsbyserverresponse"></a>
### message `PlayerInventoryItemsByServerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FilteredItems`](#filtereditems) | filteredItems |

---

<a name="playerinventoryitemsbyserverrequest"></a>
### message `PlayerInventoryItemsByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FlagFilter`](#flagfilter) | flagFilter |
| **string** | gpids |

---

<a name="checkbanresult"></a>
### message `CheckBanResult`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **int32** | code |
| **int32** | scope |

---

<a name="checkbangameplayerresponse"></a>
### message `CheckBanGamePlayerResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CheckBanResult`](#checkbanresult) | ban |

---

<a name="checkbangameplayerrequest"></a>
### message `CheckBanGamePlayerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |

---

<a name="bangameplayerresponse"></a>
### message `BanGamePlayerResponse`
**Fields:**

*No fields*

---

<a name="bangameplayercustomrequest"></a>
### message `BanGamePlayerCustomRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **int32** | code |
| **string** | message |
| **int64** | until |
| **string** | tag |
| **string** | description |

---

<a name="setphotongameresponse"></a>
### message `SetPhotonGameResponse`
**Fields:**

*No fields*

---

<a name="setphotongamerequest"></a>
### message `SetPhotonGameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`PhotonGame`](#photongame) | photonGame |

---

<a name="bangameplayerrequest"></a>
### message `BanGamePlayerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **int32** | code |
| **string** | tag |
| **string** | description |

---

<a name="clanstatsmap"></a>
### message `ClanStatsMap`
**Fields:**

*No fields*

---

<a name="getclanstatsresponse"></a>
### message `GetClanStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| [`ClanStatsMap`](#clanstatsmap) | stats |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |

---

<a name="getclanstatsrequest"></a>
### message `GetClanStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| **bool** | addLeaderboardStats |

---

<a name="getcurrentclanstatsresponse"></a>
### message `GetCurrentClanStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |
| [`ClanStatsMap`](#clanstatsmap) | stats |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |

---

<a name="getcurrentclanstatsrequest"></a>
### message `GetCurrentClanStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | addLeaderboardStats |

---

<a name="ugc"></a>
### message `Ugc`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **string** | version |
| **string** | downloadUrl |
| **int64** | date |
| **string** | authorGpid |
| **bytes** | preview |
| **string** | description |
| **float** | rating |
| **string** | tags |

---

<a name="listugcresponse"></a>
### message `ListUgcResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Ugc`](#ugc) | ugcs |

---

<a name="listugcrequest"></a>
### message `ListUgcRequest`
**Fields:**

*No fields*

---

<a name="savefeedbackresponse"></a>
### message `SaveFeedbackResponse`
**Fields:**

*No fields*

---

<a name="savefeedbackrequest"></a>
### message `SaveFeedbackRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | ugcName |
| **string** | version |
| **int32** | rating |
| **string** | feedback |

---

<a name="ugcfeedback"></a>
### message `UgcFeedback`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |
| **string** | version |
| **string** | authorGpid |
| **int32** | rating |
| **string** | feedback |
| **int64** | date |

---

<a name="listfeedbackresponse"></a>
### message `ListFeedbackResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`UgcFeedback`](#ugcfeedback) | ugcFeedbacks |

---

<a name="listfeedbackrequest"></a>
### message `ListFeedbackRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | ugcName |
| **int32** | page |
| **int32** | size |

---

<a name="achievementdefinition"></a>
### message `AchievementDefinition`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | key |
| [`LocalizedTitle`](#localizedtitle) | title |
| **string** | imageLocked |
| **string** | imageUnlocked |

---

<a name="getachievementdefinitionsresponse"></a>
### message `GetAchievementDefinitionsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AchievementDefinition`](#achievementdefinition) | achievements |

---

<a name="getachievementdefinitionsrequest"></a>
### message `GetAchievementDefinitionsRequest`
**Fields:**

*No fields*

---

<a name="playerachievement"></a>
### message `PlayerAchievement`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | key |
| [`LocalizedTitle`](#localizedtitle) | title |
| **string** | imageLocked |
| **string** | imageUnlocked |
| **int32** | progressCurrent |
| **int32** | progressTarget |
| **int64** | unlockDate |

---

<a name="getcurrentplayerachievementsresponse"></a>
### message `GetCurrentPlayerAchievementsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerAchievement`](#playerachievement) | achievements |

---

<a name="getcurrentplayerachievementsrequest"></a>
### message `GetCurrentPlayerAchievementsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | showLocked |

---

<a name="getplayerachievementsresponse"></a>
### message `GetPlayerAchievementsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerAchievement`](#playerachievement) | playerAchievement |

---

<a name="getplayerachievementsrequest"></a>
### message `GetPlayerAchievementsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **bool** | showLocked |

---

<a name="externallink"></a>
### message `ExternalLink`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | url |

---

<a name="gameannouncement"></a>
### message `GameAnnouncement`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | title |
| **string** | body |
| **string** | resourceUrl |
| **int64** | date |
| [`ExternalLink`](#externallink) | links |
| **string** | tags |
| **bool** | pinned |
| [`Property`](#property) | properties |
| **string** | code |
| **int64** | untilDate |

---

<a name="getallgameannouncementsresponse"></a>
### message `GetAllGameAnnouncementsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameAnnouncement`](#gameannouncement) | announcements |

---

<a name="getallgameannouncementsrequest"></a>
### message `GetAllGameAnnouncementsRequest`
**Fields:**

*No fields*

---

<a name="boltidunlinkauthresponse"></a>
### message `BoltIdUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="boltidunlinkauthrequest"></a>
### message `BoltIdUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="boltidauthresponse"></a>
### message `BoltIdAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authboltid"></a>
### message `AuthBoltId`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | token |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="boltidauthrequest"></a>
### message `BoltIdAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthBoltId`](#authboltid) | authBoltId |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="boltidlinkauthresponse"></a>
### message `BoltIdLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="boltidlinkauthrequest"></a>
### message `BoltIdLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthBoltId`](#authboltid) | authBoltId |

---

<a name="linkedauth"></a>
### message `LinkedAuth`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthType`](#authtype) | authType |
| **bool** | primary |

---

<a name="getlinkedauthresponse"></a>
### message `GetLinkedAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LinkedAuth`](#linkedauth) | authTypes |

---

<a name="getlinkedauthrequest"></a>
### message `GetLinkedAuthRequest`
**Fields:**

*No fields*

---

<a name="findreferralstateresponse"></a>
### message `FindReferralStateResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |
| [`ReferralState`](#referralstate) | state |

---

<a name="findreferralstaterequest"></a>
### message `FindReferralStateRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | uid |

---

<a name="referralrecruitstatistics"></a>
### message `ReferralRecruitStatistics`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | gameEventProgressPoints |
| **bool** | completedOnTime |

---

<a name="referralcashbackpayment"></a>
### message `ReferralCashbackPayment`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralCashbackPaymentStatus`](#referralcashbackpaymentstatus) | paymentStatus |
| [`CurrencyAmount`](#currencyamount) | currencyAmounts |
| **int64** | lastStatusUpdated |

---

<a name="referralrecruit"></a>
### message `ReferralRecruit`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |
| **bool** | achievedThreshold |
| **int64** | subscribedToCommander |
| [`ReferralRecruitStatistics`](#referralrecruitstatistics) | statistics |
| [`ReferralCashbackPayment`](#referralcashbackpayment) | cashbackPayments |

---

<a name="getrecruitbyidresponse"></a>
### message `GetRecruitByIdResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralRecruit`](#referralrecruit) | recruit |

---

<a name="getrecruitbyidrequest"></a>
### message `GetRecruitByIdRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recruitGpid |
| **bool** | withCashbackPayments |

---

<a name="getreferralplayerstateresponse"></a>
### message `GetReferralPlayerStateResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | referralPlayerState |
| **int32** | referralPlayerStateLite |

---

<a name="getreferralplayerstaterequest"></a>
### message `GetReferralPlayerStateRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | withFullInfo |

---

<a name="subscribetocommanderresponse"></a>
### message `SubscribeToCommanderResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Player`](#player) | player |

---

<a name="subscribetocommanderrequest"></a>
### message `SubscribeToCommanderRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | commanderUid |

---

<a name="referralsystemsettings"></a>
### message `ReferralSystemSettings`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | recruitGameEventId |
| **string** | commanderGameEventId |
| **int32** | durationDays |
| **int64** | commanderSubscriptionTimeoutMs |
| **bool** | enabled |

---

<a name="referralpaymentssettings"></a>
### message `ReferralPaymentsSettings`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | paymentsAmount |
| **int32** | percent |
| **int32** | amount |

---

<a name="referralcashbacksettings"></a>
### message `ReferralCashbackSettings`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralPaymentsSettings`](#referralpaymentssettings) | initialPaymentsSettings |
| [`ReferralPaymentsSettings`](#referralpaymentssettings) | nextPaymentsSettings |
| **int32** | paymentAfterDays |
| **int32** | currencies |
| **int32** | thresholdPoints |

---

<a name="getreferralsystemsettingsresponse"></a>
### message `GetReferralSystemSettingsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralSystemSettings`](#referralsystemsettings) | settings |
| [`ReferralCashbackSettings`](#referralcashbacksettings) | cashbackSettings |

---

<a name="getreferralsystemsettingsrequest"></a>
### message `GetReferralSystemSettingsRequest`
**Fields:**

*No fields*

---

<a name="getrecruitsbyoffsetresponse"></a>
### message `GetRecruitsByOffsetResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralRecruit`](#referralrecruit) | recruits |
| **string** | continuationToken |

---

<a name="getrecruitsbyoffsetrequest"></a>
### message `GetRecruitsByOffsetRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ContinuationToken`](#continuationtoken) | continuationToken |
| **bool** | withCashbackPayments |

---

<a name="twitchunlinkauthresponse"></a>
### message `TwitchUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="twitchunlinkauthrequest"></a>
### message `TwitchUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="twitchlinkauthresponse"></a>
### message `TwitchLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="authtwitch"></a>
### message `AuthTwitch`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | authCode |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="twitchlinkauthrequest"></a>
### message `TwitchLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthTwitch`](#authtwitch) | authTwitch |

---

<a name="dlcfile"></a>
### message `DlcFile`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | resourceUrls |
| **uint64** | fileSizeInBytes |
| **string** | signature |
| [`Property`](#property) | properties |
| **string** | fileName |

---

<a name="dlc"></a>
### message `Dlc`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | key |
| **string** | name |
| [`Property`](#property) | properties |
| [`DlcFile`](#dlcfile) | files |

---

<a name="dlcresponse"></a>
### message `DlcResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Dlc`](#dlc) | dlcs |
| **string** | cdnUrls |
| **bool** | dlcExist |

---

<a name="releaseddlcrequest"></a>
### message `ReleasedDlcRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | version |
| **string** | gameUid |
| [`Platform`](#platform) | platform |
| **bytes** | checksum |

---

<a name="previewdlcrequest"></a>
### message `PreviewDlcRequest`
**Fields:**

*No fields*

---

<a name="rentopenrequest"></a>
### message `RentOpenRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| [`Player`](#player) | creator |
| **int32** | itemDefinitionId |
| **float** | price |
| **int64** | createDate |
| [`MarketRequestType`](#marketrequesttype) | type |
| **int32** | quantity |
| **bool** | isCreator |

---

<a name="getrenttradeopensalerequestsresponse"></a>
### message `GetRentTradeOpenSaleRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentOpenRequest`](#rentopenrequest) | openRequests |

---

<a name="getrenttradeopensalerequestsrequest"></a>
### message `GetRentTradeOpenSaleRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | page |
| **int32** | size |
| [`TradeFilters`](#tradefilters) | tradeFilters |

---

<a name="createrentsaleresponse"></a>
### message `CreateRentSaleResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="createrentsalerequest"></a>
### message `CreateRentSaleRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemId |
| **float** | price |
| **int32** | itemDefinitionId |

---

<a name="renttrade"></a>
### message `RentTrade`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | salesCount |
| **int32** | purchasesCount |
| **float** | salesPrice |
| **float** | purchasesPrice |

---

<a name="getrenttradesresponse"></a>
### message `GetRentTradesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentTrade`](#renttrade) | trades |

---

<a name="getrenttradesrequest"></a>
### message `GetRentTradesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionIds |

---

<a name="rentmarketsettings"></a>
### message `RentMarketSettings`
**Fields:**

| Type | Name |
| :--- | :--- |
| **float** | commissionPercent |
| **float** | minCommission |
| **int32** | currencyId |
| **bool** | enabled |
| [`Banned`](#banned) | banned |
| **int32** | rentDurationDays |
| **int64** | marketCloseDate |

---

<a name="getrentmarketsettingsresponse"></a>
### message `GetRentMarketSettingsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentMarketSettings`](#rentmarketsettings) | marketplaceSettings |

---

<a name="getrentmarketsettingsrequest"></a>
### message `GetRentMarketSettingsRequest`
**Fields:**

*No fields*

---

<a name="createrentpurchaserequestresponse"></a>
### message `CreateRentPurchaseRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | purchaseRequestId |

---

<a name="createrentpurchaserequestrequest"></a>
### message `CreateRentPurchaseRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | itemDefinitionId |
| **float** | price |

---

<a name="getplayerrentopenrequestsresponse"></a>
### message `GetPlayerRentOpenRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentOpenRequest`](#rentopenrequest) | openRequests |

---

<a name="getplayerrentopenrequestsrequest"></a>
### message `GetPlayerRentOpenRequestsRequest`
**Fields:**

*No fields*

---

<a name="getplayerrentclosedrequestscountresponse"></a>
### message `GetPlayerRentClosedRequestsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getplayerrentclosedrequestscountrequest"></a>
### message `GetPlayerRentClosedRequestsCountRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`MarketRequestType`](#marketrequesttype) | type |
| [`ClosingReason`](#closingreason) | reason |

---

<a name="cancelrentrequestresponse"></a>
### message `CancelRentRequestResponse`
**Fields:**

*No fields*

---

<a name="cancelrentrequestrequest"></a>
### message `CancelRentRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="createrentpurchaserequestbysaleresponse"></a>
### message `CreateRentPurchaseRequestBySaleResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | purchaseRequestId |

---

<a name="createrentpurchaserequestbysalerequest"></a>
### message `CreateRentPurchaseRequestBySaleRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | saleId |

---

<a name="rentprocessingrequest"></a>
### message `RentProcessingRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **int32** | itemDefinitionId |
| **float** | price |
| **int64** | createDate |
| [`MarketRequestType`](#marketrequesttype) | type |
| **string** | saleRequestId |
| [`ProcessingState`](#processingstate) | state |
| **int32** | quantity |

---

<a name="getplayerrentprocessingrequestsresponse"></a>
### message `GetPlayerRentProcessingRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentProcessingRequest`](#rentprocessingrequest) | processingRequests |

---

<a name="getplayerrentprocessingrequestsrequest"></a>
### message `GetPlayerRentProcessingRequestsRequest`
**Fields:**

*No fields*

---

<a name="getrenttradeopenpurchaserequestsresponse"></a>
### message `GetRentTradeOpenPurchaseRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentOpenRequest`](#rentopenrequest) | openRequests |

---

<a name="getrenttradeopenpurchaserequestsrequest"></a>
### message `GetRentTradeOpenPurchaseRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **int32** | page |
| **int32** | size |

---

<a name="rentclosedrequest"></a>
### message `RentClosedRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | originId |
| [`Player`](#player) | creator |
| **int32** | itemDefinitionId |
| **float** | price |
| **int64** | createDate |
| **int64** | closeDate |
| [`MarketRequestType`](#marketrequesttype) | type |
| [`Player`](#player) | partner |
| **string** | partnerRequestId |
| [`ClosingReason`](#closingreason) | reason |
| **int32** | quantity |
| **int64** | rentEndDate |

---

<a name="getplayerrentclosedrequestsresponse"></a>
### message `GetPlayerRentClosedRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentClosedRequest`](#rentclosedrequest) | closedRequests |

---

<a name="getplayerrentclosedrequestsrequest"></a>
### message `GetPlayerRentClosedRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`MarketRequestType`](#marketrequesttype) | type |
| [`ClosingReason`](#closingreason) | reason |
| **int32** | page |
| **int32** | size |

---

<a name="getrenttraderesponse"></a>
### message `GetRentTradeResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentTrade`](#renttrade) | trade |

---

<a name="getrenttraderequest"></a>
### message `GetRentTradeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |

---

<a name="boltsetting"></a>
### message `BoltSetting`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | key |
| [`SettingType`](#settingtype) | type |
| **int32** | stringValue |
| **int32** | intValue |
| **int32** | floatValue |
| **int32** | booleanValue |
| **int32** | longValue |

---

<a name="handshakeresponse"></a>
### message `HandshakeResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | country |
| [`BoltSetting`](#boltsetting) | boltSettings |
| **int64** | timestamp |
| **string** | city |

---

<a name="handshake"></a>
### message `Handshake`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | ticket |

---

<a name="logoutresponse"></a>
### message `LogoutResponse`
**Fields:**

*No fields*

---

<a name="logoutrequest"></a>
### message `LogoutRequest`
**Fields:**

*No fields*

---

<a name="gameseason"></a>
### message `GameSeason`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | name |

---

<a name="getgameseasonsresponse"></a>
### message `GetGameSeasonsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameSeason`](#gameseason) | seasons |

---

<a name="getgameseasonsrequest"></a>
### message `GetGameSeasonsRequest`
**Fields:**

*No fields*

---

<a name="getplayerfriendsresponse"></a>
### message `GetPlayerFriendsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | playerFriends |

---

<a name="getplayerfriendsrequest"></a>
### message `GetPlayerFriendsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatuses |
| **int32** | page |
| **int32** | size |

---

<a name="ignoreallfriendrequestsresponse"></a>
### message `IgnoreAllFriendRequestsResponse`
**Fields:**

*No fields*

---

<a name="ignoreallfriendrequestsrequest"></a>
### message `IgnoreAllFriendRequestsRequest`
**Fields:**

*No fields*

---

<a name="searchplayersresponse"></a>
### message `SearchPlayersResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | playerFriends |

---

<a name="searchplayersrequest"></a>
### message `SearchPlayersRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | value |
| **int32** | page |
| **int32** | size |

---

<a name="removefriendresponse"></a>
### message `RemoveFriendResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="removefriendrequest"></a>
### message `RemoveFriendRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="getplayerscountresponse"></a>
### message `GetPlayersCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int64** | count |

---

<a name="getplayerscountrequest"></a>
### message `GetPlayersCountRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | value |

---

<a name="ignorefriendrequestresponse"></a>
### message `IgnoreFriendRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="ignorefriendrequestrequest"></a>
### message `IgnoreFriendRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="sendfriendrequestresponse"></a>
### message `SendFriendRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="sendfriendrequestrequest"></a>
### message `SendFriendRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| **string** | msg |

---

<a name="getplayerfriendbyidresponse"></a>
### message `GetPlayerFriendByIdResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | playerFriend |

---

<a name="getplayerfriendbyidrequest"></a>
### message `GetPlayerFriendByIdRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |

---

<a name="acceptfriendrequestresponse"></a>
### message `AcceptFriendRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="acceptfriendrequestrequest"></a>
### message `AcceptFriendRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="getplayerfriendscountresponse"></a>
### message `GetPlayerFriendsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int64** | count |

---

<a name="getplayerfriendscountrequest"></a>
### message `GetPlayerFriendsCountRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatuses |

---

<a name="getplayerfriendbyuidresponse"></a>
### message `GetPlayerFriendByUidResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | playerFriend |

---

<a name="getplayerfriendbyuidrequest"></a>
### message `GetPlayerFriendByUidRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | uid |

---

<a name="blockfriendresponse"></a>
### message `BlockFriendResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="blockfriendrequest"></a>
### message `BlockFriendRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="unblockfriendresponse"></a>
### message `UnblockFriendResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="unblockfriendrequest"></a>
### message `UnblockFriendRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="revokefriendrequestresponse"></a>
### message `RevokeFriendRequestResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatus |

---

<a name="revokefriendrequestrequest"></a>
### message `RevokeFriendRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="getplayerfriendsidsresponse"></a>
### message `GetPlayerFriendsIdsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpids |

---

<a name="getplayerfriendsidsrequest"></a>
### message `GetPlayerFriendsIdsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RelationshipStatus`](#relationshipstatus) | relationshipStatuses |

---

<a name="finishmatchresponse"></a>
### message `FinishMatchResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | matchId |

---

<a name="finishmatchrequest"></a>
### message `FinishMatchRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | match |

---

<a name="appleidlinkauthresponse"></a>
### message `AppleIdLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="authappleid"></a>
### message `AuthAppleId`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | identityToken |
| **string** | defaultName |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="appleidlinkauthrequest"></a>
### message `AppleIdLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthAppleId`](#authappleid) | authAppleId |

---

<a name="appleidauthresponse"></a>
### message `AppleIdAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="appleidauthrequest"></a>
### message `AppleIdAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthAppleId`](#authappleid) | authAppleId |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="appleidunlinkauthresponse"></a>
### message `AppleIdUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="appleidunlinkauthrequest"></a>
### message `AppleIdUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="guestauthresponse"></a>
### message `GuestAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authguest"></a>
### message `AuthGuest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | locale |
| [`Store`](#store) | store |
| **string** | token |

---

<a name="guestauthrequest"></a>
### message `GuestAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthGuest`](#authguest) | authGuest |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="clan"></a>
### message `Clan`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | name |
| **string** | tag |
| [`ClanType`](#clantype) | clanType |
| **string** | avatarId |
| **int64** | createDate |
| **int32** | mebersCount |
| **int32** | maxMemberCount |
| **string** | description |

---

<a name="clanleaderboardentry"></a>
### message `ClanLeaderboardEntry`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | rank |
| **int32** | percent |
| **int32** | score |
| **int32** | diff |
| **bool** | isNew |
| [`Clan`](#clan) | clan |

---

<a name="getclanleaderboardresponse"></a>
### message `GetClanLeaderboardResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanLeaderboardEntry`](#clanleaderboardentry) | clans |

---

<a name="getclanleaderboardrequest"></a>
### message `GetClanLeaderboardRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | leaderboardCode |
| [`Offset`](#offset) | offset |

---

<a name="playerleaderboardentry"></a>
### message `PlayerLeaderboardEntry`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | rank |
| **int32** | percent |
| **int32** | score |
| **int32** | diff |
| **bool** | isNew |
| [`Player`](#player) | player |

---

<a name="getplayerrankresponse"></a>
### message `GetPlayerRankResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerLeaderboardEntry`](#playerleaderboardentry) | player |

---

<a name="getplayerrankrequest"></a>
### message `GetPlayerRankRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | leaderboardCode |
| **string** | gpid |

---

<a name="getplayerleaderboardresponse"></a>
### message `GetPlayerLeaderboardResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerLeaderboardEntry`](#playerleaderboardentry) | players |

---

<a name="getplayerleaderboardrequest"></a>
### message `GetPlayerLeaderboardRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | leaderboardCode |
| [`Offset`](#offset) | offset |

---

<a name="getclanrankresponse"></a>
### message `GetClanRankResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanLeaderboardEntry`](#clanleaderboardentry) | clan |

---

<a name="getclanrankrequest"></a>
### message `GetClanRankRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | leaderboardCode |
| **string** | clanId |

---

<a name="claimrewardsresponse"></a>
### message `ClaimRewardsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GivenReward`](#givenreward) | reward |

---

<a name="claimallrewardsofspecificpasses"></a>
### message `ClaimAllRewardsOfSpecificPasses`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventId |
| **string** | passId |

---

<a name="progresschallengeresponse"></a>
### message `ProgressChallengeResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | completed |
| **int32** | challengePoints |
| [`GivenReward`](#givenreward) | challengeReward |
| **int32** | eventPoints |
| [`GivenReward`](#givenreward) | eventReward |
| **bool** | rewardsObtained |

---

<a name="progresschallengerequest"></a>
### message `ProgressChallengeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventChallengeId |
| **int32** | points |
| **string** | gameEventChallengeProgressId |

---

<a name="getplayercurrentgameeventsresponse"></a>
### message `GetPlayerCurrentGameEventsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrentGameEvent`](#currentgameevent) | gameEvents |
| **int64** | msUntilRefresh |

---

<a name="getplayercurrentgameeventsrequest"></a>
### message `GetPlayerCurrentGameEventsRequest`
**Fields:**

*No fields*

---

<a name="claimspecificlevelrewardrequest"></a>
### message `ClaimSpecificLevelRewardRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventId |
| **string** | passId |
| **int32** | level |

---

<a name="getallchallengesresponse"></a>
### message `GetAllChallengesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrentChallenge`](#currentchallenge) | challenges |

---

<a name="getallchallengesrequest"></a>
### message `GetAllChallengesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventId |

---

<a name="gamepassdefinition"></a>
### message `GamePassDefinition`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | code |
| **int32** | keyItemDefinitionId |
| [`GamePassLevel`](#gamepasslevel) | levels |

---

<a name="challengedefinition"></a>
### message `ChallengeDefinition`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventChallengeId |
| **string** | gameEventId |
| **string** | code |
| **int32** | keyItemDefinitionId |
| [`LocalizedTitle`](#localizedtitle) | localizedTitle |
| **string** | action |
| [`DayRange`](#dayrange) | dayRange |
| **string** | type |
| **int32** | eventPoints |
| **int32** | targetPoints |
| [`RewardInfo`](#rewardinfo) | reward |

---

<a name="gameeventdefinition"></a>
### message `GameEventDefinition`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | code |
| **int64** | dateSince |
| **int64** | dateUntil |
| **int32** | durationDays |
| [`GamePassDefinition`](#gamepassdefinition) | gamePasses |
| [`ChallengeDefinition`](#challengedefinition) | challenges |
| [`Property`](#property) | settings |
| [`LocalizedTitle`](#localizedtitle) | title |
| **string** | action |
| **bool** | isProgressShared |

---

<a name="getcachedplayergameeventsresponse"></a>
### message `GetCachedPlayerGameEventsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameEventDefinition`](#gameeventdefinition) | gameEvents |
| **string** | lastUpdated |
| **int64** | msUntilRefresh |

---

<a name="getcachedplayergameeventsrequest"></a>
### message `GetCachedPlayerGameEventsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lastUpdated |

---

<a name="gamepassprogress"></a>
### message `GamePassProgress`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **int32** | currentLevel |
| **int32** | levelsToClaimReward |

---

<a name="challengeprogress"></a>
### message `ChallengeProgress`
**Fields:**

*No fields*

---

<a name="gameeventprogress"></a>
### message `GameEventProgress`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **int32** | points |
| [`GamePassProgress`](#gamepassprogress) | gamePassProgresses |
| [`ChallengeProgress`](#challengeprogress) | challengeProgresses |
| **int32** | currentDay |

---

<a name="getplayergameeventprogressresponse"></a>
### message `GetPlayerGameEventProgressResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameEventProgress`](#gameeventprogress) | gameEventsProgress |

---

<a name="getplayergameeventprogressrequest"></a>
### message `GetPlayerGameEventProgressRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventId |

---

<a name="progressgameeventresponse"></a>
### message `ProgressGameEventResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | points |
| [`GivenReward`](#givenreward) | reward |

---

<a name="progressgameeventrequest"></a>
### message `ProgressGameEventRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventId |
| **int32** | points |

---

<a name="getcurrentchallengesresponse"></a>
### message `GetCurrentChallengesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrentChallenge`](#currentchallenge) | challenges |

---

<a name="getcurrentchallengesrequest"></a>
### message `GetCurrentChallengesRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventId |
| **bool** | completed |

---

<a name="getplayergameeventsprogressesresponse"></a>
### message `GetPlayerGameEventsProgressesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameEventProgress`](#gameeventprogress) | gameEventsProgresses |

---

<a name="getplayergameeventsprogressesrequest"></a>
### message `GetPlayerGameEventsProgressesRequest`
**Fields:**

*No fields*

---

<a name="savechallengedefinition2response"></a>
### message `SaveChallengeDefinition2Response`
**Fields:**

*No fields*

---

<a name="savechallengedefinition2request"></a>
### message `SaveChallengeDefinition2Request`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | code |
| **string** | action |
| **int32** | targetPoints |

---

<a name="usermessage"></a>
### message `UserMessage`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | senderGpid |
| **string** | message |
| **int64** | timestamp |
| **bool** | isRead |

---

<a name="getglobalmsgsresponse"></a>
### message `GetGlobalMsgsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`UserMessage`](#usermessage) | messages |

---

<a name="sendglobalmsgrequest"></a>
### message `SendGlobalMsgRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | topic |
| **string** | message |

---

<a name="giveachievementsresponse"></a>
### message `GiveAchievementsResponse`
**Fields:**

*No fields*

---

<a name="giveachievements"></a>
### message `GiveAchievements`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | achievementsIds |

---

<a name="giveachievementsrequest"></a>
### message `GiveAchievementsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GiveAchievements`](#giveachievements) | giveAchievements |

---

<a name="getglobalstatsresponse"></a>
### message `GetGlobalStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStat`](#playerstat) | playerStats |

---

<a name="getglobalstatsrequest"></a>
### message `GetGlobalStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | historicDays |

---

<a name="resetstatsresponse"></a>
### message `ResetStatsResponse`
**Fields:**

*No fields*

---

<a name="resetstatsrequest"></a>
### message `ResetStatsRequest`
**Fields:**

*No fields*

---

<a name="getcurrentstatsresponse"></a>
### message `GetCurrentStatsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Stats`](#stats) | stats |

---

<a name="getcurrentstatsrequest"></a>
### message `GetCurrentStatsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | addLeaderboardStats |

---

<a name="vkauthresponse"></a>
### message `VkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="authvkid"></a>
### message `AuthVkId`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | authorizationCode |
| **string** | vkDeviceId |
| **string** | codeVerifier |

---

<a name="authvk"></a>
### message `AuthVk`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | authCode |
| **string** | locale |
| [`Store`](#store) | store |
| [`AuthVkId`](#authvkid) | authVkId |

---

<a name="vkauthrequest"></a>
### message `VkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthVk`](#authvk) | authVk |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="vklinkauthresponse"></a>
### message `VkLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="vklinkauthrequest"></a>
### message `VkLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthVk`](#authvk) | authVk |

---

<a name="vkunlinkauthresponse"></a>
### message `VkUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="vkunlinkauthrequest"></a>
### message `VkUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="sendfriendmsgresponse"></a>
### message `SendFriendMsgResponse`
**Fields:**

*No fields*

---

<a name="sendfriendmsgrequest"></a>
### message `SendFriendMsgRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| **string** | msg |

---

<a name="deletefriendmsgsresponse"></a>
### message `DeleteFriendMsgsResponse`
**Fields:**

*No fields*

---

<a name="deletefriendmsgsrequest"></a>
### message `DeleteFriendMsgsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="deletegroupmsgsresponse"></a>
### message `DeleteGroupMsgsResponse`
**Fields:**

*No fields*

---

<a name="deletegroupmsgsrequest"></a>
### message `DeleteGroupMsgsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | groupId |

---

<a name="getfriendmsgsbyoffsetresponse"></a>
### message `GetFriendMsgsByOffsetResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`UserMessage`](#usermessage) | messages |

---

<a name="getfriendmsgsbyoffsetrequest"></a>
### message `GetFriendMsgsByOffsetRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| [`Offset`](#offset) | offset |

---

<a name="getunreadchatuserscountresponse"></a>
### message `GetUnreadChatUsersCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getunreadchatuserscountrequest"></a>
### message `GetUnreadChatUsersCountRequest`
**Fields:**

*No fields*

---

<a name="getgroupmsgsresponse"></a>
### message `GetGroupMsgsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`UserMessage`](#usermessage) | messages |

---

<a name="getgroupmsgsrequest"></a>
### message `GetGroupMsgsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | groupId |
| **int32** | page |
| **int32** | pageSize |

---

<a name="readfriendmsgsresponse"></a>
### message `ReadFriendMsgsResponse`
**Fields:**

*No fields*

---

<a name="readfriendmsgsrequest"></a>
### message `ReadFriendMsgsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="chatuser"></a>
### message `ChatUser`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | player |
| [`Group`](#group) | group |
| **string** | message |
| **int64** | timestamp |
| **int32** | unreadMsgsCount |

---

<a name="getchatusersbyoffsetresponse"></a>
### message `GetChatUsersByOffsetResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ChatUser`](#chatuser) | chatUsers |

---

<a name="getchatusersbyoffsetrequest"></a>
### message `GetChatUsersByOffsetRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Offset`](#offset) | offset |

---

<a name="getchatuserresponse"></a>
### message `GetChatUserResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ChatUser`](#chatuser) | chatUser |

---

<a name="getchatuserrequest"></a>
### message `GetChatUserRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="chatuserlite"></a>
### message `ChatUserLite`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| **string** | groupId |
| **string** | message |
| **int64** | timestamp |
| **int32** | unreadMsgsCount |

---

<a name="getchatusersliteresponse"></a>
### message `GetChatUsersLiteResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ChatUserLite`](#chatuserlite) | chatUsers |

---

<a name="getchatusersliterequest"></a>
### message `GetChatUsersLiteRequest`
**Fields:**

*No fields*

---

<a name="getchatusersbypageresponse"></a>
### message `GetChatUsersByPageResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ChatUser`](#chatuser) | chatUsers |

---

<a name="page"></a>
### message `Page`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | page_ |
| **int32** | size |

---

<a name="getchatusersbypagerequest"></a>
### message `GetChatUsersByPageRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Page`](#page) | page |

---

<a name="readgroupmsgsresponse"></a>
### message `ReadGroupMsgsResponse`
**Fields:**

*No fields*

---

<a name="readgroupmsgsrequest"></a>
### message `ReadGroupMsgsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | groupId |

---

<a name="sendgroupmsgresponse"></a>
### message `SendGroupMsgResponse`
**Fields:**

*No fields*

---

<a name="sendgroupmsgrequest"></a>
### message `SendGroupMsgRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | groupId |
| **string** | msg |

---

<a name="getchatusersresponse"></a>
### message `GetChatUsersResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ChatUser`](#chatuser) | chatUsers |

---

<a name="getchatusersrequest"></a>
### message `GetChatUsersRequest`
**Fields:**

*No fields*

---

<a name="getfriendmsgsbypageresponse"></a>
### message `GetFriendMsgsByPageResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`UserMessage`](#usermessage) | messages |

---

<a name="getfriendmsgsbypagerequest"></a>
### message `GetFriendMsgsByPageRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| [`Page`](#page) | page |

---

<a name="getplayerstatsforseasonresponse"></a>
### message `GetPlayerStatsForSeasonResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStat`](#playerstat) | stat |

---

<a name="getplayerstatsforseasonrequest"></a>
### message `GetPlayerStatsForSeasonRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | seasonId |
| **string** | gpid |

---

<a name="getcurrentclanstatsforseasonresponse"></a>
### message `GetCurrentClanStatsForSeasonResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |

---

<a name="getcurrentclanstatsforseasonrequest"></a>
### message `GetCurrentClanStatsForSeasonRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | seasonId |

---

<a name="getstatsforseasonrequest"></a>
### message `GetStatsForSeasonRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | seasonId |

---

<a name="getclanstatsforseasonresponse"></a>
### message `GetClanStatsForSeasonResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |

---

<a name="getclanstatsforseasonrequest"></a>
### message `GetClanStatsForSeasonRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | seasonId |
| **string** | clanId |

---

<a name="getappsbuyinappresponse"></a>
### message `GetAppsBuyInappResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GivenReward`](#givenreward) | reward |

---

<a name="money"></a>
### message `Money`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | currencyCode |
| **int64** | units |
| **int32** | nanos |

---

<a name="getappsbuyinapprequest"></a>
### message `GetAppsBuyInappRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | productId |
| **string** | purchaseToken |
| [`Money`](#money) | price |

---

<a name="rategameresponse"></a>
### message `RateGameResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | rate |
| **string** | message |
| **string** | internalData |
| **string** | context |
| **int64** | timestamp |
| [`GivenReward`](#givenreward) | reward |

---

<a name="rategamerequest"></a>
### message `RateGameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | rate |
| **string** | message |
| **string** | internalData |
| **string** | context |

---

<a name="asklaterresponse"></a>
### message `AskLaterResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int64** | timestampAskLater |
| **string** | internalData |
| **string** | context |
| **int64** | timestamp |

---

<a name="asklaterrequest"></a>
### message `AskLaterRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int64** | timestampAskLater |
| **string** | internalData |
| **string** | context |

---

<a name="ratecontext"></a>
### message `RateContext`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | data |

---

<a name="getlastrategameresponse"></a>
### message `GetLastRateGameResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | rate |
| **string** | message |
| **string** | internalData |
| **string** | context |
| **int64** | timestampAskLater |
| **bool** | dontAskLater |
| **int64** | timestamp |
| [`RateContext`](#ratecontext) | rateContexts |
| [`RewardInfo`](#rewardinfo) | reward |

---

<a name="getlastrategamerequest"></a>
### message `GetLastRateGameRequest`
**Fields:**

*No fields*

---

<a name="dontasklaterresponse"></a>
### message `DontAskLaterResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | dontAskLater |
| **string** | internalData |
| **string** | context |
| **int64** | timestamp |

---

<a name="dontasklaterrequest"></a>
### message `DontAskLaterRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | internalData |
| **string** | context |

---

<a name="googlebuyinappresponse"></a>
### message `GoogleBuyInappResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventory`](#playerinventory) | reward |

---

<a name="googlebuyinapprequest"></a>
### message `GoogleBuyInappRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | json |
| **string** | signature |

---

<a name="claninviterequest"></a>
### message `ClanInviteRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| [`Clan`](#clan) | clan |
| [`Player`](#player) | requestSender |
| **int64** | createDate |
| **int64** | closeDate |
| [`RequestType`](#requesttype) | requestType |
| [`Player`](#player) | invitedPlayer |

---

<a name="getplayerinviterequestsresponse"></a>
### message `GetPlayerInviteRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanInviteRequest`](#claninviterequest) | clanInviteRequests |

---

<a name="getplayerinviterequestsrequest"></a>
### message `GetPlayerInviteRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | offset |
| **int32** | length |

---

<a name="getclaninviterequestsresponse"></a>
### message `GetClanInviteRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanInviteRequest`](#claninviterequest) | clanInviteRequests |

---

<a name="getclaninviterequestsrequest"></a>
### message `GetClanInviteRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | offset |
| **int32** | length |

---

<a name="assignroletomemberresponse"></a>
### message `AssignRoleToMemberResponse`
**Fields:**

*No fields*

---

<a name="assignroletomemberrequest"></a>
### message `AssignRoleToMemberRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | memberId |
| **int32** | roleId |

---

<a name="canceljoinrequestresponse"></a>
### message `CancelJoinRequestResponse`
**Fields:**

*No fields*

---

<a name="canceljoinrequestrequest"></a>
### message `CancelJoinRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="findclanresponse"></a>
### message `FindClanResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="findclanrequest"></a>
### message `FindClanRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | filter |
| **int32** | page |
| **int32** | size |

---

<a name="getclanbyidresponse"></a>
### message `GetClanByIdResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="getclanbyidrequest"></a>
### message `GetClanByIdRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |

---

<a name="leaveclanresponse"></a>
### message `LeaveClanResponse`
**Fields:**

*No fields*

---

<a name="leaveclanrequest"></a>
### message `LeaveClanRequest`
**Fields:**

*No fields*

---

<a name="getclanclosedinviterequestscountresponse"></a>
### message `GetClanClosedInviteRequestsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getclanclosedinviterequestscountrequest"></a>
### message `GetClanClosedInviteRequestsCountRequest`
**Fields:**

*No fields*

---

<a name="declinejoinrequestresponse"></a>
### message `DeclineJoinRequestResponse`
**Fields:**

*No fields*

---

<a name="declinejoinrequestrequest"></a>
### message `DeclineJoinRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="getclanbytagresponse"></a>
### message `GetClanByTagResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="getclanbytagrequest"></a>
### message `GetClanByTagRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tag |

---

<a name="changeclantyperesponse"></a>
### message `ChangeClanTypeResponse`
**Fields:**

*No fields*

---

<a name="changeclantyperequest"></a>
### message `ChangeClanTypeRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanType`](#clantype) | clanType |

---

<a name="cancelinviterequestresponse"></a>
### message `CancelInviteRequestResponse`
**Fields:**

*No fields*

---

<a name="cancelinviterequestrequest"></a>
### message `CancelInviteRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="assignleaderroleresponse"></a>
### message `AssignLeaderRoleResponse`
**Fields:**

*No fields*

---

<a name="assignleaderrolerequest"></a>
### message `AssignLeaderRoleRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | newLeaderMemberId |
| **int32** | roleId |

---

<a name="clanmember"></a>
### message `ClanMember`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | playerFriend |
| **string** | clanId |
| **int32** | roleId |
| **int64** | createDate |

---

<a name="getclanmembersresponse"></a>
### message `GetClanMembersResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanMember`](#clanmember) | clanMembers |

---

<a name="getclanmembersrequest"></a>
### message `GetClanMembersRequest`
**Fields:**

*No fields*

---

<a name="createclanresponse"></a>
### message `CreateClanResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="createclanrequest"></a>
### message `CreateClanRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tag |
| **string** | name |
| [`ClanType`](#clantype) | clanType |

---

<a name="setclanavatarresponse"></a>
### message `SetClanAvatarResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | avatarId |

---

<a name="setclanavatarrequest"></a>
### message `SetClanAvatarRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bytes** | avatar |

---

<a name="validateclannameresponse"></a>
### message `ValidateClanNameResponse`
**Fields:**

*No fields*

---

<a name="validateclannamerequest"></a>
### message `ValidateClanNameRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |

---

<a name="requesttojoinclanresponse"></a>
### message `RequestToJoinClanResponse`
**Fields:**

*No fields*

---

<a name="requesttojoinclanrequest"></a>
### message `RequestToJoinClanRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |

---

<a name="getplayerclosedjoinrequestscountresponse"></a>
### message `GetPlayerClosedJoinRequestsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getplayerclosedjoinrequestscountrequest"></a>
### message `GetPlayerClosedJoinRequestsCountRequest`
**Fields:**

*No fields*

---

<a name="kickmemberresponse"></a>
### message `KickMemberResponse`
**Fields:**

*No fields*

---

<a name="kickmemberrequest"></a>
### message `KickMemberRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | memberId |
| **string** | kickingReason |

---

<a name="deleteclosedinviterequestresponse"></a>
### message `DeleteClosedInviteRequestResponse`
**Fields:**

*No fields*

---

<a name="deleteclosedinviterequestrequest"></a>
### message `DeleteClosedInviteRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="increasemaxmemberscountresponse"></a>
### message `IncreaseMaxMembersCountResponse`
**Fields:**

*No fields*

---

<a name="increasemaxmemberscountrequest"></a>
### message `IncreaseMaxMembersCountRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | increaseValue |

---

<a name="clanjoinrequest"></a>
### message `ClanJoinRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| [`Clan`](#clan) | clan |
| [`Player`](#player) | requestSender |
| **int64** | createDate |
| **int64** | closeDate |
| [`RequestType`](#requesttype) | requestType |

---

<a name="getclanjoinrequestsresponse"></a>
### message `GetClanJoinRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanJoinRequest`](#clanjoinrequest) | clanJoinRequests |

---

<a name="getclanjoinrequestsrequest"></a>
### message `GetClanJoinRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | offset |
| **int32** | length |

---

<a name="getrecommendedclansresponse"></a>
### message `GetRecommendedClansResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="getrecommendedclansrequest"></a>
### message `GetRecommendedClansRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="deleteclosedjoinrequestresponse"></a>
### message `DeleteClosedJoinRequestResponse`
**Fields:**

*No fields*

---

<a name="deleteclosedjoinrequestrequest"></a>
### message `DeleteClosedJoinRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="getclanresponse"></a>
### message `GetClanResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="getclanrequest"></a>
### message `GetClanRequest`
**Fields:**

*No fields*

---

<a name="clanmemberrole"></a>
### message `ClanMemberRole`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | id |
| **string** | name |
| **int32** | level |
| **string** | descripption |
| [`ClanMemberRolePermission`](#clanmemberrolepermission) | permissions |

---

<a name="getrolesresponse"></a>
### message `GetRolesResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanMemberRole`](#clanmemberrole) | clanMemberRole |

---

<a name="getrolesrequest"></a>
### message `GetRolesRequest`
**Fields:**

*No fields*

---

<a name="clansettings"></a>
### message `ClanSettings`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | initialMembersCount |
| **int32** | membersCountLimit |
| [`CurrencyAmount`](#currencyamount) | membercCountUpgradeCost |
| [`CurrencyAmount`](#currencyamount) | changeClanNameOrTagCost |
| [`CurrencyAmount`](#currencyamount) | clanCreateCost |

---

<a name="getclansettingsresponse"></a>
### message `GetClanSettingsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanSettings`](#clansettings) | clanSettings |

---

<a name="getclansettingsrequest"></a>
### message `GetClanSettingsRequest`
**Fields:**

*No fields*

---

<a name="invitetoclanresponse"></a>
### message `InviteToClanResponse`
**Fields:**

*No fields*

---

<a name="invitetoclanrequest"></a>
### message `InviteToClanRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |

---

<a name="validateclantagresponse"></a>
### message `ValidateClanTagResponse`
**Fields:**

*No fields*

---

<a name="validateclantagrequest"></a>
### message `ValidateClanTagRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tag |

---

<a name="setclandescriptionresponse"></a>
### message `SetClanDescriptionResponse`
**Fields:**

*No fields*

---

<a name="setclandescriptionrequest"></a>
### message `SetClanDescriptionRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | description |

---

<a name="getplayerjoinrequestsresponse"></a>
### message `GetPlayerJoinRequestsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanJoinRequest`](#clanjoinrequest) | clanJoinRequests |

---

<a name="getplayerjoinrequestsrequest"></a>
### message `GetPlayerJoinRequestsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | offset |
| **int32** | length |

---

<a name="declineinviterequestresponse"></a>
### message `DeclineInviteRequestResponse`
**Fields:**

*No fields*

---

<a name="declineinviterequestrequest"></a>
### message `DeclineInviteRequestRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |

---

<a name="renameclanresponse"></a>
### message `RenameClanResponse`
**Fields:**

*No fields*

---

<a name="renameclanrequest"></a>
### message `RenameClanRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | tag |
| **string** | name |

---

<a name="getclanmembersbyidresponse"></a>
### message `GetClanMembersByIdResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanMember`](#clanmember) | clanMembers |

---

<a name="getclanmembersbyidrequest"></a>
### message `GetClanMembersByIdRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | clanId |

---

<a name="getclanjoinrequestscountresponse"></a>
### message `GetClanJoinRequestsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getclanjoinrequestscountrequest"></a>
### message `GetClanJoinRequestsCountRequest`
**Fields:**

*No fields*

---

<a name="getplayerinviterequestscountresponse"></a>
### message `GetPlayerInviteRequestsCountResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | count |

---

<a name="getplayerinviterequestscountrequest"></a>
### message `GetPlayerInviteRequestsCountRequest`
**Fields:**

*No fields*

---

<a name="sendnewsresponse"></a>
### message `SendNewsResponse`
**Fields:**

*No fields*

---

<a name="sendnewsrequest"></a>
### message `SendNewsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | newsFeedItemDefinitionId |

---

<a name="item"></a>
### message `Item`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | id |
| **string** | definitionId |
| **string** | gpid |
| **string** | itemText |
| **int64** | timestamp |

---

<a name="getitemsresponse"></a>
### message `GetItemsResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Item`](#item) | items |

---

<a name="getitemsrequest"></a>
### message `GetItemsRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | from |
| **int32** | count |

---

<a name="accusationbyserverresponse"></a>
### message `AccusationByServerResponse`
**Fields:**

*No fields*

---

<a name="accusationbyserverrequest"></a>
### message `AccusationByServerRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | reporters |
| **string** | matchId |
| [`EnvironmentInfo`](#environmentinfo) | environment |

---

<a name="gamecenterlinkauthresponse"></a>
### message `GameCenterLinkAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | guestLinking |

---

<a name="authgamecenter"></a>
### message `AuthGameCenter`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameId |
| **string** | gameVersion |
| [`Platform`](#platform) | platform |
| **string** | gpid |
| **string** | bundleId |
| **string** | publicKeyUrl |
| **bytes** | signature |
| **bytes** | salt |
| **int64** | timestamp |
| **string** | defaultName |
| **string** | locale |
| [`Store`](#store) | store |

---

<a name="gamecenterlinkauthrequest"></a>
### message `GameCenterLinkAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthGameCenter`](#authgamecenter) | authGameCenter |

---

<a name="gamecenterunlinkauthresponse"></a>
### message `GameCenterUnLinkAuthResponse`
**Fields:**

*No fields*

---

<a name="gamecenterunlinkauthrequest"></a>
### message `GameCenterUnLinkAuthRequest`
**Fields:**

*No fields*

---

<a name="gamecenterauthresponse"></a>
### message `GameCenterAuthResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | ticket |
| **int32** | ticketBinary |
| **string** | playerTicket |

---

<a name="gamecenterauthrequest"></a>
### message `GameCenterAuthRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AuthGameCenter`](#authgamecenter) | authGameCenter |
| [`AppVerification`](#appverification) | appVerification |
| [`DeviceInfo`](#deviceinfo) | deviceInfo |

---

<a name="appstorebuyinappresponse"></a>
### message `AppStoreBuyInappResponse`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventory`](#playerinventory) | reward |

---

<a name="productinfo"></a>
### message `ProductInfo`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | productId |
| [`Money`](#money) | price |
| **string** | country |

---

<a name="appstorebuyinapprequest"></a>
### message `AppStoreBuyInappRequest`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | base64 |
| [`Money`](#money) | price |
| [`ProductInfo`](#productinfo) | productInfos |

---

<a name="onofferwallrewardedevent"></a>
### message `OnOfferWallRewardedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | rewardCurrencies |

---

<a name="onmatchfinishedevent"></a>
### message `OnMatchFinishedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`FinishedMatch`](#finishedmatch) | match |

---

<a name="referralplayerstate"></a>
### message `ReferralPlayerState`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralState`](#referralstate) | state |
| **int32** | recruitInfo |
| **int32** | commanderInfo |

---

<a name="onplayerstatechangedevent"></a>
### message `OnPlayerStateChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ReferralPlayerState`](#referralplayerstate) | referralPlayerState |

---

<a name="oncouponactivatedevent"></a>
### message `OnCouponActivatedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GivenReward`](#givenreward) | reward |

---

<a name="oninventorychangedevent"></a>
### message `OnInventoryChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerInventoryItem`](#playerinventoryitem) | addedItems |
| [`PlayerInventoryItem`](#playerinventoryitem) | changedItems |
| [`CurrencyAmount`](#currencyamount) | currencies |

---

<a name="globalchatusermessage"></a>
### message `GlobalChatUserMessage`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | message |
| **string** | senderGpid |
| **int64** | timestamp |

---

<a name="onincomingglobalchatmessageevent"></a>
### message `OnIncomingGlobalChatMessageEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GlobalChatUserMessage`](#globalchatusermessage) | message |

---

<a name="oninappevent"></a>
### message `OnInAppEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GivenReward`](#givenreward) | reward |
| [`Store`](#store) | store |

---

<a name="onmsgfromfriendevent"></a>
### message `OnMsgFromFriendEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`UserMessage`](#usermessage) | message |

---

<a name="progressgameeventcontext"></a>
### message `ProgressGameEventContext`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ProgressGameEventType`](#progressgameeventtype) | type |

---

<a name="listoflevelstoclaimreward"></a>
### message `ListOfLevelsToClaimReward`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | levels |

---

<a name="onprogressgameevent"></a>
### message `OnProgressGameEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | eventId |
| **int32** | points |
| [`GivenReward`](#givenreward) | reward |
| [`ProgressGameEventContext`](#progressgameeventcontext) | context |

---

<a name="onprogresssharedgameevent"></a>
### message `OnProgressSharedGameEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | eventId |
| **int32** | points |

---

<a name="onprogresschallengeevent"></a>
### message `OnProgressChallengeEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gameEventChallengeId |
| **bool** | challengeCompleted |
| **int32** | challengePoints |
| [`GivenReward`](#givenreward) | challengeReward |
| **string** | gameEventId |
| **int32** | eventPoints |
| [`GivenReward`](#givenreward) | eventReward |
| **bool** | challengeRewardsObtained |
| **string** | gameEventChallengeProgressId |

---

<a name="onsharedgameeventlevelachieved"></a>
### message `OnSharedGameEventLevelAchieved`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | eventId |
| **int32** | points |

---

<a name="ongamepasschangedevent"></a>
### message `OnGamePassChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | eventId |
| **int32** | points |
| [`GivenReward`](#givenreward) | reward |

---

<a name="onofferchangedevent"></a>
### message `OnOfferChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SpecialOffer`](#specialoffer) | specialOffer |

---

<a name="onincomingclanchatmessageevent"></a>
### message `OnIncomingClanChatMessageEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanUserMessage`](#clanusermessage) | message |

---

<a name="achievementupdate"></a>
### message `AchievementUpdate`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | achievementId |
| **int32** | progress |
| **int64** | unlockDate |
| [`GivenReward`](#givenreward) | givenReward |

---

<a name="onachievementsupdatedevent"></a>
### message `OnAchievementsUpdatedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`AchievementUpdate`](#achievementupdate) | achievementUpdates |

---

<a name="onsystemmessagereceivedevent"></a>
### message `OnSystemMessageReceivedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`SystemMessageDetails`](#systemmessagedetails) | message |

---

<a name="onassignedroleevent"></a>
### message `OnAssignedRoleEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | newRoleId |
| **string** | assignatorMemberId |
| **string** | assigneeMemberId |

---

<a name="onclantagandnamechanged"></a>
### message `OnClanTagAndNameChanged`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | newClanTag |
| **string** | newClanName |

---

<a name="onclanmaxmemberscountincreased"></a>
### message `OnClanMaxMembersCountIncreased`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | newMembersCountValue |

---

<a name="onjoinrequestcancelledevent"></a>
### message `OnJoinRequestCancelledEvent`
**Fields:**

*No fields*

---

<a name="onplayeravatarchangedevent"></a>
### message `OnPlayerAvatarChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | avatarId |

---

<a name="onkickedevent"></a>
### message `OnKickedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | kickingReason |

---

<a name="onmemberjoinedtoclanevent"></a>
### message `OnMemberJoinedToClanEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanMember`](#clanmember) | clanMember |
| [`JoinClanType`](#joinclantype) | joinClanType |
| **string** | joinRequestAcceptor |

---

<a name="ononlinestatuschangedevent"></a>
### message `OnOnlineStatusChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStatus`](#playerstatus) | onlineStatus |

---

<a name="onclanmemberdeclinedrequestevent"></a>
### message `OnClanMemberDeclinedRequestEvent`
**Fields:**

*No fields*

---

<a name="onclantypechanged"></a>
### message `OnClanTypeChanged`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanType`](#clantype) | newClanType |

---

<a name="onjoinrequesttakenevent"></a>
### message `OnJoinRequestTakenEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |
| [`Player`](#player) | player |

---

<a name="onjoinrequestdeclinedevent"></a>
### message `OnJoinRequestDeclinedEvent`
**Fields:**

*No fields*

---

<a name="oninviterequestcancelledevent"></a>
### message `OnInviteRequestCancelledEvent`
**Fields:**

*No fields*

---

<a name="onassignedleaderroleevent"></a>
### message `OnAssignedLeaderRoleEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | oldLeaderRole |
| **string** | newLeaderId |

---

<a name="onplayerattributeschanged"></a>
### message `OnPlayerAttributesChanged`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`Attributes`](#attributes) | attributes |

---

<a name="onclanavatarchangedevent"></a>
### message `OnClanAvatarChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | avatarId |
| **bytes** | avatar |

---

<a name="onleftfromclan"></a>
### message `OnLeftFromClan`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | memberId |

---

<a name="onclandescriptionchangedevent"></a>
### message `OnClanDescriptionChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | description |

---

<a name="onplayernamechangedevent"></a>
### message `OnPlayerNameChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | name |

---

<a name="oninviterequestdeclinedevent"></a>
### message `OnInviteRequestDeclinedEvent`
**Fields:**

*No fields*

---

<a name="onkickedmemberevent"></a>
### message `OnKickedMemberEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | kickerMemberId |
| **string** | kickedMemberId |

---

<a name="oninvitedtoclanevent"></a>
### message `OnInvitedToClanEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | requestId |
| [`Clan`](#clan) | clan |
| [`Player`](#player) | player |

---

<a name="onreadclosedinviterequestevent"></a>
### message `OnReadClosedInviteRequestEvent`
**Fields:**

*No fields*

---

<a name="onjoinedtoclanevent"></a>
### message `OnJoinedToClanEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Clan`](#clan) | clan |

---

<a name="onclanstatsupdatedevent"></a>
### message `OnClanStatsUpdatedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClanStats`](#clanstats) | clanStats |
| [`ClanMemberStats`](#clanmemberstats) | clanMemberStats |

---

<a name="ontraderequestopenedevent"></a>
### message `OnTradeRequestOpenedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OpenRequest`](#openrequest) | request |

---

<a name="ontraderequestclosedevent"></a>
### message `OnTradeRequestClosedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClosedRequest`](#closedrequest) | request |

---

<a name="onplayerrequestopenedevent"></a>
### message `OnPlayerRequestOpenedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`OpenRequest`](#openrequest) | request |

---

<a name="ontradeupdatedevent"></a>
### message `OnTradeUpdatedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Trade`](#trade) | trade |

---

<a name="onplayerrequestclosedevent"></a>
### message `OnPlayerRequestClosedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`ClosedRequest`](#closedrequest) | request |
| [`PlayerInventoryItem`](#playerinventoryitem) | item |

---

<a name="onlobbyownerchangedevent"></a>
### message `OnLobbyOwnerChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | lobbyOwnerGpid |

---

<a name="onnewspectatorjoinedlobbyevent"></a>
### message `OnNewSpectatorJoinedLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | newSpectator |

---

<a name="onlobbyplayertypechangedevent"></a>
### message `OnLobbyPlayerTypeChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| [`LobbyPlayerType`](#lobbyplayertype) | playerType |

---

<a name="onlobbyjoinablechangedevent"></a>
### message `OnLobbyJoinableChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bool** | joinable |

---

<a name="onreceivedinvitetolobbyevent"></a>
### message `OnReceivedInviteToLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyInvite`](#lobbyinvite) | invite |

---

<a name="onnewplayerinvitedtolobbyevent"></a>
### message `OnNewPlayerInvitedToLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | inviteSenderGpid |
| [`PlayerFriend`](#playerfriend) | newPlayer |

---

<a name="onlobbynamechangedevent"></a>
### message `OnLobbyNameChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | name |

---

<a name="onnewplayerjoinedlobbyevent"></a>
### message `OnNewPlayerJoinedLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | newPlayer |

---

<a name="onrefuseinvitetolobbyevent"></a>
### message `OnRefuseInviteToLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | inviteSenderGpid |
| **string** | invitedGpid |

---

<a name="onrevokeinvitetolobbyevent"></a>
### message `OnRevokeInviteToLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | inviteSenderGpid |
| **string** | invitedGpid |

---

<a name="onnewspectatorinvitedtolobbyevent"></a>
### message `OnNewSpectatorInvitedToLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | inviteSenderGpid |
| [`PlayerFriend`](#playerfriend) | newSpectator |

---

<a name="onreceivedspectatorinvitetolobbyevent"></a>
### message `OnReceivedSpectatorInviteToLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyInvite`](#lobbyinvite) | invite |

---

<a name="onlobbymaxmemberschangedevent"></a>
### message `OnLobbyMaxMembersChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | maxMembers |

---

<a name="onplayerleftlobbyevent"></a>
### message `OnPlayerLeftLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | leftGpid |

---

<a name="onlobbychatmessageevent"></a>
### message `OnLobbyChatMessageEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | gpid |
| **string** | message |

---

<a name="onlobbytypechangedevent"></a>
### message `OnLobbyTypeChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`LobbyType`](#lobbytype) | lobbyType |

---

<a name="onlobbymaxspectatorschangedevent"></a>
### message `OnLobbyMaxSpectatorsChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | maxSpectators |

---

<a name="onlobbyphotongamechangedevent"></a>
### message `OnLobbyPhotonGameChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PhotonGame`](#photongame) | photonGame |

---

<a name="onlobbydatachangedevent"></a>
### message `OnLobbyDataChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`Dictionary`](#dictionary) | data |

---

<a name="onplayerkickedfromlobbyevent"></a>
### message `OnPlayerKickedFromLobbyEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | kickInitiatorGpid |
| **string** | kickedGpid |

---

<a name="onlobbygameserverchangedevent"></a>
### message `OnLobbyGameServerChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`GameServer`](#gameserver) | gameServer |

---

<a name="onrevokefriendshiprequestevent"></a>
### message `OnRevokeFriendshipRequestEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="onfriendnamechangedevent"></a>
### message `OnFriendNameChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| **string** | newName |

---

<a name="onnewfriendshiprequestevent"></a>
### message `OnNewFriendshipRequestEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | friend |
| **string** | msg |

---

<a name="onfriendaddedevent"></a>
### message `OnFriendAddedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerFriend`](#playerfriend) | friend |

---

<a name="onfriendremovedevent"></a>
### message `OnFriendRemovedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |

---

<a name="onfriendavatarchangedevent"></a>
### message `OnFriendAvatarChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| **string** | avatarId |

---

<a name="onplayerstatuschangedevent"></a>
### message `OnPlayerStatusChangedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | friendGpid |
| [`PlayerStatus`](#playerstatus) | newStatus |

---

<a name="onrenttraderequestopenedevent"></a>
### message `OnRentTradeRequestOpenedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentOpenRequest`](#rentopenrequest) | request |

---

<a name="onrenttraderequestclosedevent"></a>
### message `OnRentTradeRequestClosedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentClosedRequest`](#rentclosedrequest) | request |

---

<a name="onplayerrentrequestopenedevent"></a>
### message `OnPlayerRentRequestOpenedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentOpenRequest`](#rentopenrequest) | request |

---

<a name="onplayerrentrequestclosedevent"></a>
### message `OnPlayerRentRequestClosedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentClosedRequest`](#rentclosedrequest) | request |
| [`PlayerInventoryItem`](#playerinventoryitem) | item |

---

<a name="onrenttradeupdatedevent"></a>
### message `OnRentTradeUpdatedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`RentTrade`](#renttrade) | trade |

---

<a name="ondevicebanned"></a>
### message `OnDeviceBanned`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | deviceId |

---

<a name="ondisconnectplayers"></a>
### message `OnDisconnectPlayers`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | gameId |

---

<a name="onplayerbanned"></a>
### message `OnPlayerBanned`
**Fields:**

| Type | Name |
| :--- | :--- |
| **int32** | banCode |
| **string** | message |
| **int64** | until |
| [`BanScope`](#banscope) | banScope |

---

<a name="onplayerkicked"></a>
### message `OnPlayerKicked`
**Fields:**

| Type | Name |
| :--- | :--- |
| **string** | message |

---

<a name="onadrewardevent"></a>
### message `OnAdRewardEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`CurrencyAmount`](#currencyamount) | rewardCurrencies |
| [`PlayerInventoryItem`](#playerinventoryitem) | rewardItems |
| **bool** | ignore |

---

<a name="onstatsupdatedevent"></a>
### message `OnStatsUpdatedEvent`
**Fields:**

| Type | Name |
| :--- | :--- |
| [`PlayerStat`](#playerstat) | updatedStats |
| **int64** | updatedDate |

---

<a name="chgaceehfadedhh"></a>
### message `CHGACEEHFADEDHH`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bytes** | DCAGCDFCHBBDCDB |
| **bytes** | GABAFEDDDBEGGAE |
| **bytes** | CGCGBGBEGCADABH |

---

<a name="bbfgdbcegcbfbee"></a>
### message `BBFGDBCEGCBFBEE`
**Fields:**

| Type | Name |
| :--- | :--- |
| **bytes** | FBHHACGFCHFEEED |
| **string** | FCBHCCCADBCHHGB |

---

