# Events Reference

Регистрация обработчиков для событий, приходящих от сервера.

## `OnMatchFinished`

Event: [`Fopzo::Generated::OnMatchFinishedEvent`](schemes.md#onmatchfinishedevent)

### Example code
```cpp
client->events.OnMatchFinished = [](const Fopzo::Generated::OnMatchFinishedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerStateChangedEvent`

Event: [`Fopzo::Generated::OnPlayerStateChangedEvent`](schemes.md#onplayerstatechangedevent)

### Example code
```cpp
client->events.onPlayerStateChangedEvent = [](const Fopzo::Generated::OnPlayerStateChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onCouponActivated`

Event: [`Fopzo::Generated::OnCouponActivatedEvent`](schemes.md#oncouponactivatedevent)

### Example code
```cpp
client->events.onCouponActivated = [](const Fopzo::Generated::OnCouponActivatedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onInventoryChanged`

Event: [`Fopzo::Generated::OnInventoryChangedEvent`](schemes.md#oninventorychangedevent)

### Example code
```cpp
client->events.onInventoryChanged = [](const Fopzo::Generated::OnInventoryChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onInAppEvent`

Event: [`Fopzo::Generated::OnInAppEvent`](schemes.md#oninappevent)

### Example code
```cpp
client->events.onInAppEvent = [](const Fopzo::Generated::OnInAppEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onMsgFromFriendEvent`

Event: [`Fopzo::Generated::OnMsgFromFriendEvent`](schemes.md#onmsgfromfriendevent)

### Example code
```cpp
client->events.onMsgFromFriendEvent = [](const Fopzo::Generated::OnMsgFromFriendEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onProgressGameEvent`

Event: [`Fopzo::Generated::OnProgressGameEvent`](schemes.md#onprogressgameevent)

### Example code
```cpp
client->events.onProgressGameEvent = [](const Fopzo::Generated::OnProgressGameEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onProgressSharedGameEvent`

Event: [`Fopzo::Generated::OnProgressSharedGameEvent`](schemes.md#onprogresssharedgameevent)

### Example code
```cpp
client->events.onProgressSharedGameEvent = [](const Fopzo::Generated::OnProgressSharedGameEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onProgressChallengeEvent`

Event: [`Fopzo::Generated::OnProgressChallengeEvent`](schemes.md#onprogresschallengeevent)

### Example code
```cpp
client->events.onProgressChallengeEvent = [](const Fopzo::Generated::OnProgressChallengeEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onGamePassChanged`

Event: [`Fopzo::Generated::OnGamePassChangedEvent`](schemes.md#ongamepasschangedevent)

### Example code
```cpp
client->events.onGamePassChanged = [](const Fopzo::Generated::OnGamePassChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onIncomingClanChatMessageEvent`

Event: [`Fopzo::Generated::OnIncomingClanChatMessageEvent`](schemes.md#onincomingclanchatmessageevent)

### Example code
```cpp
client->events.onIncomingClanChatMessageEvent = [](const Fopzo::Generated::OnIncomingClanChatMessageEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onSystemMessageReceived`

Event: [`Fopzo::Generated::OnSystemMessageReceivedEvent`](schemes.md#onsystemmessagereceivedevent)

### Example code
```cpp
client->events.onSystemMessageReceived = [](const Fopzo::Generated::OnSystemMessageReceivedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnAssignedRoleEvent`

Event: [`Fopzo::Generated::OnAssignedRoleEvent`](schemes.md#onassignedroleevent)

### Example code
```cpp
client->events.OnAssignedRoleEvent = [](const Fopzo::Generated::OnAssignedRoleEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnJoinRequestCancelledEvent`

Event: [`Fopzo::Generated::OnJoinRequestCancelledEvent`](schemes.md#onjoinrequestcancelledevent)

### Example code
```cpp
client->events.OnJoinRequestCancelledEvent = [](const Fopzo::Generated::OnJoinRequestCancelledEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerAvatarChangedEvent`

Event: [`Fopzo::Generated::OnPlayerAvatarChangedEvent`](schemes.md#onplayeravatarchangedevent)

### Example code
```cpp
client->events.onPlayerAvatarChangedEvent = [](const Fopzo::Generated::OnPlayerAvatarChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onKickedEvent`

Event: [`Fopzo::Generated::OnKickedEvent`](schemes.md#onkickedevent)

### Example code
```cpp
client->events.onKickedEvent = [](const Fopzo::Generated::OnKickedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnMemberJoinedToClan`

Event: [`Fopzo::Generated::OnMemberJoinedToClanEvent`](schemes.md#onmemberjoinedtoclanevent)

### Example code
```cpp
client->events.OnMemberJoinedToClan = [](const Fopzo::Generated::OnMemberJoinedToClanEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onOnlineStatusChangedEvent`

Event: [`Fopzo::Generated::OnOnlineStatusChangedEvent`](schemes.md#ononlinestatuschangedevent)

### Example code
```cpp
client->events.onOnlineStatusChangedEvent = [](const Fopzo::Generated::OnOnlineStatusChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onClanMemberDeclinedRequestEvent`

Event: [`Fopzo::Generated::OnClanMemberDeclinedRequestEvent`](schemes.md#onclanmemberdeclinedrequestevent)

### Example code
```cpp
client->events.onClanMemberDeclinedRequestEvent = [](const Fopzo::Generated::OnClanMemberDeclinedRequestEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnJoinRequestTaken`

Event: [`Fopzo::Generated::OnJoinRequestTakenEvent`](schemes.md#onjoinrequesttakenevent)

### Example code
```cpp
client->events.OnJoinRequestTaken = [](const Fopzo::Generated::OnJoinRequestTakenEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onJoinRequestDeclinedEvent`

Event: [`Fopzo::Generated::OnJoinRequestDeclinedEvent`](schemes.md#onjoinrequestdeclinedevent)

### Example code
```cpp
client->events.onJoinRequestDeclinedEvent = [](const Fopzo::Generated::OnJoinRequestDeclinedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnInviteRequestCancelledEvent`

Event: [`Fopzo::Generated::OnInviteRequestCancelledEvent`](schemes.md#oninviterequestcancelledevent)

### Example code
```cpp
client->events.OnInviteRequestCancelledEvent = [](const Fopzo::Generated::OnInviteRequestCancelledEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onAssignedLeaderRoleEvent`

Event: [`Fopzo::Generated::OnAssignedLeaderRoleEvent`](schemes.md#onassignedleaderroleevent)

### Example code
```cpp
client->events.onAssignedLeaderRoleEvent = [](const Fopzo::Generated::OnAssignedLeaderRoleEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onClanAvatarChangedEvent`

Event: [`Fopzo::Generated::OnClanAvatarChangedEvent`](schemes.md#onclanavatarchangedevent)

### Example code
```cpp
client->events.onClanAvatarChangedEvent = [](const Fopzo::Generated::OnClanAvatarChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onClanDescriptionChangedEvent`

Event: [`Fopzo::Generated::OnClanDescriptionChangedEvent`](schemes.md#onclandescriptionchangedevent)

### Example code
```cpp
client->events.onClanDescriptionChangedEvent = [](const Fopzo::Generated::OnClanDescriptionChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerNameChangedEvent`

Event: [`Fopzo::Generated::OnPlayerNameChangedEvent`](schemes.md#onplayernamechangedevent)

### Example code
```cpp
client->events.onPlayerNameChangedEvent = [](const Fopzo::Generated::OnPlayerNameChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onInviteRequestDeclinedEvent`

Event: [`Fopzo::Generated::OnInviteRequestDeclinedEvent`](schemes.md#oninviterequestdeclinedevent)

### Example code
```cpp
client->events.onInviteRequestDeclinedEvent = [](const Fopzo::Generated::OnInviteRequestDeclinedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnKickedMember`

Event: [`Fopzo::Generated::OnKickedMemberEvent`](schemes.md#onkickedmemberevent)

### Example code
```cpp
client->events.OnKickedMember = [](const Fopzo::Generated::OnKickedMemberEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnInvitedToClanEvent`

Event: [`Fopzo::Generated::OnInvitedToClanEvent`](schemes.md#oninvitedtoclanevent)

### Example code
```cpp
client->events.OnInvitedToClanEvent = [](const Fopzo::Generated::OnInvitedToClanEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onReadClosedInviteRequestEvent`

Event: [`Fopzo::Generated::OnReadClosedInviteRequestEvent`](schemes.md#onreadclosedinviterequestevent)

### Example code
```cpp
client->events.onReadClosedInviteRequestEvent = [](const Fopzo::Generated::OnReadClosedInviteRequestEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `OnJoinedToClan`

Event: [`Fopzo::Generated::OnJoinedToClanEvent`](schemes.md#onjoinedtoclanevent)

### Example code
```cpp
client->events.OnJoinedToClan = [](const Fopzo::Generated::OnJoinedToClanEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onClanStatsUpdated`

Event: [`Fopzo::Generated::OnClanStatsUpdatedEvent`](schemes.md#onclanstatsupdatedevent)

### Example code
```cpp
client->events.onClanStatsUpdated = [](const Fopzo::Generated::OnClanStatsUpdatedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onTradeRequestOpened`

Event: [`Fopzo::Generated::OnTradeRequestOpenedEvent`](schemes.md#ontraderequestopenedevent)

### Example code
```cpp
client->events.onTradeRequestOpened = [](const Fopzo::Generated::OnTradeRequestOpenedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onTradeRequestClosed`

Event: [`Fopzo::Generated::OnTradeRequestClosedEvent`](schemes.md#ontraderequestclosedevent)

### Example code
```cpp
client->events.onTradeRequestClosed = [](const Fopzo::Generated::OnTradeRequestClosedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerRequestOpened`

Event: [`Fopzo::Generated::OnPlayerRequestOpenedEvent`](schemes.md#onplayerrequestopenedevent)

### Example code
```cpp
client->events.onPlayerRequestOpened = [](const Fopzo::Generated::OnPlayerRequestOpenedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onTradeUpdated`

Event: [`Fopzo::Generated::OnTradeUpdatedEvent`](schemes.md#ontradeupdatedevent)

### Example code
```cpp
client->events.onTradeUpdated = [](const Fopzo::Generated::OnTradeUpdatedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerRequestClosed`

Event: [`Fopzo::Generated::OnPlayerRequestClosedEvent`](schemes.md#onplayerrequestclosedevent)

### Example code
```cpp
client->events.onPlayerRequestClosed = [](const Fopzo::Generated::OnPlayerRequestClosedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyOwnerChangedEvent`

Event: [`Fopzo::Generated::OnLobbyOwnerChangedEvent`](schemes.md#onlobbyownerchangedevent)

### Example code
```cpp
client->events.onLobbyOwnerChangedEvent = [](const Fopzo::Generated::OnLobbyOwnerChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onNewSpectatorJoinedLobbyEvent`

Event: [`Fopzo::Generated::OnNewSpectatorJoinedLobbyEvent`](schemes.md#onnewspectatorjoinedlobbyevent)

### Example code
```cpp
client->events.onNewSpectatorJoinedLobbyEvent = [](const Fopzo::Generated::OnNewSpectatorJoinedLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyPlayerTypeChangedEvent`

Event: [`Fopzo::Generated::OnLobbyPlayerTypeChangedEvent`](schemes.md#onlobbyplayertypechangedevent)

### Example code
```cpp
client->events.onLobbyPlayerTypeChangedEvent = [](const Fopzo::Generated::OnLobbyPlayerTypeChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyJoinableChangedEvent`

Event: [`Fopzo::Generated::OnLobbyJoinableChangedEvent`](schemes.md#onlobbyjoinablechangedevent)

### Example code
```cpp
client->events.onLobbyJoinableChangedEvent = [](const Fopzo::Generated::OnLobbyJoinableChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onReceivedInviteToLobbyEvent`

Event: [`Fopzo::Generated::OnReceivedInviteToLobbyEvent`](schemes.md#onreceivedinvitetolobbyevent)

### Example code
```cpp
client->events.onReceivedInviteToLobbyEvent = [](const Fopzo::Generated::OnReceivedInviteToLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onNewPlayerInvitedToLobbyEvent`

Event: [`Fopzo::Generated::OnNewPlayerInvitedToLobbyEvent`](schemes.md#onnewplayerinvitedtolobbyevent)

### Example code
```cpp
client->events.onNewPlayerInvitedToLobbyEvent = [](const Fopzo::Generated::OnNewPlayerInvitedToLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyNameChangedEvent`

Event: [`Fopzo::Generated::OnLobbyNameChangedEvent`](schemes.md#onlobbynamechangedevent)

### Example code
```cpp
client->events.onLobbyNameChangedEvent = [](const Fopzo::Generated::OnLobbyNameChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onNewPlayerJoinedLobbyEvent`

Event: [`Fopzo::Generated::OnNewPlayerJoinedLobbyEvent`](schemes.md#onnewplayerjoinedlobbyevent)

### Example code
```cpp
client->events.onNewPlayerJoinedLobbyEvent = [](const Fopzo::Generated::OnNewPlayerJoinedLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onRefuseInviteToLobbyEvent`

Event: [`Fopzo::Generated::OnRefuseInviteToLobbyEvent`](schemes.md#onrefuseinvitetolobbyevent)

### Example code
```cpp
client->events.onRefuseInviteToLobbyEvent = [](const Fopzo::Generated::OnRefuseInviteToLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onRevokeInviteToLobbyEvent`

Event: [`Fopzo::Generated::OnRevokeInviteToLobbyEvent`](schemes.md#onrevokeinvitetolobbyevent)

### Example code
```cpp
client->events.onRevokeInviteToLobbyEvent = [](const Fopzo::Generated::OnRevokeInviteToLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onNewSpectatorInvitedToLobbyEvent`

Event: [`Fopzo::Generated::OnNewSpectatorInvitedToLobbyEvent`](schemes.md#onnewspectatorinvitedtolobbyevent)

### Example code
```cpp
client->events.onNewSpectatorInvitedToLobbyEvent = [](const Fopzo::Generated::OnNewSpectatorInvitedToLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onReceivedSpectatorInviteToLobbyEvent`

Event: [`Fopzo::Generated::OnReceivedSpectatorInviteToLobbyEvent`](schemes.md#onreceivedspectatorinvitetolobbyevent)

### Example code
```cpp
client->events.onReceivedSpectatorInviteToLobbyEvent = [](const Fopzo::Generated::OnReceivedSpectatorInviteToLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyMaxMembersChangedEvent`

Event: [`Fopzo::Generated::OnLobbyMaxMembersChangedEvent`](schemes.md#onlobbymaxmemberschangedevent)

### Example code
```cpp
client->events.onLobbyMaxMembersChangedEvent = [](const Fopzo::Generated::OnLobbyMaxMembersChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerLeftLobbyEvent`

Event: [`Fopzo::Generated::OnPlayerLeftLobbyEvent`](schemes.md#onplayerleftlobbyevent)

### Example code
```cpp
client->events.onPlayerLeftLobbyEvent = [](const Fopzo::Generated::OnPlayerLeftLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyChatMessageEvent`

Event: [`Fopzo::Generated::OnLobbyChatMessageEvent`](schemes.md#onlobbychatmessageevent)

### Example code
```cpp
client->events.onLobbyChatMessageEvent = [](const Fopzo::Generated::OnLobbyChatMessageEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyTypeChangedEvent`

Event: [`Fopzo::Generated::OnLobbyTypeChangedEvent`](schemes.md#onlobbytypechangedevent)

### Example code
```cpp
client->events.onLobbyTypeChangedEvent = [](const Fopzo::Generated::OnLobbyTypeChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyMaxSpectatorsChangedEvent`

Event: [`Fopzo::Generated::OnLobbyMaxSpectatorsChangedEvent`](schemes.md#onlobbymaxspectatorschangedevent)

### Example code
```cpp
client->events.onLobbyMaxSpectatorsChangedEvent = [](const Fopzo::Generated::OnLobbyMaxSpectatorsChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyPhotonGameChangedEvent`

Event: [`Fopzo::Generated::OnLobbyPhotonGameChangedEvent`](schemes.md#onlobbyphotongamechangedevent)

### Example code
```cpp
client->events.onLobbyPhotonGameChangedEvent = [](const Fopzo::Generated::OnLobbyPhotonGameChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyDataChangedEvent`

Event: [`Fopzo::Generated::OnLobbyDataChangedEvent`](schemes.md#onlobbydatachangedevent)

### Example code
```cpp
client->events.onLobbyDataChangedEvent = [](const Fopzo::Generated::OnLobbyDataChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerKickedFromLobbyEvent`

Event: [`Fopzo::Generated::OnPlayerKickedFromLobbyEvent`](schemes.md#onplayerkickedfromlobbyevent)

### Example code
```cpp
client->events.onPlayerKickedFromLobbyEvent = [](const Fopzo::Generated::OnPlayerKickedFromLobbyEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onLobbyGameServerChangedEvent`

Event: [`Fopzo::Generated::OnLobbyGameServerChangedEvent`](schemes.md#onlobbygameserverchangedevent)

### Example code
```cpp
client->events.onLobbyGameServerChangedEvent = [](const Fopzo::Generated::OnLobbyGameServerChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onRevokeFriendshipRequestEvent`

Event: [`Fopzo::Generated::OnRevokeFriendshipRequestEvent`](schemes.md#onrevokefriendshiprequestevent)

### Example code
```cpp
client->events.onRevokeFriendshipRequestEvent = [](const Fopzo::Generated::OnRevokeFriendshipRequestEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onFriendNameChangedEvent`

Event: [`Fopzo::Generated::OnFriendNameChangedEvent`](schemes.md#onfriendnamechangedevent)

### Example code
```cpp
client->events.onFriendNameChangedEvent = [](const Fopzo::Generated::OnFriendNameChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onNewFriendshipRequestEvent`

Event: [`Fopzo::Generated::OnNewFriendshipRequestEvent`](schemes.md#onnewfriendshiprequestevent)

### Example code
```cpp
client->events.onNewFriendshipRequestEvent = [](const Fopzo::Generated::OnNewFriendshipRequestEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onFriendAddedEvent`

Event: [`Fopzo::Generated::OnFriendAddedEvent`](schemes.md#onfriendaddedevent)

### Example code
```cpp
client->events.onFriendAddedEvent = [](const Fopzo::Generated::OnFriendAddedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onFriendRemovedEvent`

Event: [`Fopzo::Generated::OnFriendRemovedEvent`](schemes.md#onfriendremovedevent)

### Example code
```cpp
client->events.onFriendRemovedEvent = [](const Fopzo::Generated::OnFriendRemovedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onFriendAvatarChangedEvent`

Event: [`Fopzo::Generated::OnFriendAvatarChangedEvent`](schemes.md#onfriendavatarchangedevent)

### Example code
```cpp
client->events.onFriendAvatarChangedEvent = [](const Fopzo::Generated::OnFriendAvatarChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerStatusChangedEvent`

Event: [`Fopzo::Generated::OnPlayerStatusChangedEvent`](schemes.md#onplayerstatuschangedevent)

### Example code
```cpp
client->events.onPlayerStatusChangedEvent = [](const Fopzo::Generated::OnPlayerStatusChangedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onRentTradeRequestOpened`

Event: [`Fopzo::Generated::OnRentTradeRequestOpenedEvent`](schemes.md#onrenttraderequestopenedevent)

### Example code
```cpp
client->events.onRentTradeRequestOpened = [](const Fopzo::Generated::OnRentTradeRequestOpenedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onRentTradeRequestClosed`

Event: [`Fopzo::Generated::OnRentTradeRequestClosedEvent`](schemes.md#onrenttraderequestclosedevent)

### Example code
```cpp
client->events.onRentTradeRequestClosed = [](const Fopzo::Generated::OnRentTradeRequestClosedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerRentRequestOpened`

Event: [`Fopzo::Generated::OnPlayerRentRequestOpenedEvent`](schemes.md#onplayerrentrequestopenedevent)

### Example code
```cpp
client->events.onPlayerRentRequestOpened = [](const Fopzo::Generated::OnPlayerRentRequestOpenedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onPlayerRentRequestClosed`

Event: [`Fopzo::Generated::OnPlayerRentRequestClosedEvent`](schemes.md#onplayerrentrequestclosedevent)

### Example code
```cpp
client->events.onPlayerRentRequestClosed = [](const Fopzo::Generated::OnPlayerRentRequestClosedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onRentTradeUpdated`

Event: [`Fopzo::Generated::OnRentTradeUpdatedEvent`](schemes.md#onrenttradeupdatedevent)

### Example code
```cpp
client->events.onRentTradeUpdated = [](const Fopzo::Generated::OnRentTradeUpdatedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onAdRewardEvent`

Event: [`Fopzo::Generated::OnAdRewardEvent`](schemes.md#onadrewardevent)

### Example code
```cpp
client->events.onAdRewardEvent = [](const Fopzo::Generated::OnAdRewardEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

## `onStatsUpdatedEvent`

Event: [`Fopzo::Generated::OnStatsUpdatedEvent`](schemes.md#onstatsupdatedevent)

### Example code
```cpp
client->events.onStatsUpdatedEvent = [](const Fopzo::Generated::OnStatsUpdatedEvent& event) {
    // your code here (access fields via event.some_field())
};
```

---

