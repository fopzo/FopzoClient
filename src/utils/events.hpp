#pragma once
#include "schemes.pb.h"
#include <functional>

class Events {
public:
    std::function<void(const Fopzo::Generated::OnMatchFinishedEvent&)> OnMatchFinished;
    std::function<void(const Fopzo::Generated::OnPlayerStateChangedEvent&)> onPlayerStateChangedEvent;
    std::function<void(const Fopzo::Generated::OnCouponActivatedEvent&)> onCouponActivated;
    std::function<void(const Fopzo::Generated::OnInventoryChangedEvent&)> onInventoryChanged;
    std::function<void(const Fopzo::Generated::OnInAppEvent&)> onInAppEvent;
    std::function<void(const Fopzo::Generated::OnMsgFromFriendEvent&)> onMsgFromFriendEvent;
    std::function<void(const Fopzo::Generated::OnProgressGameEvent&)> onProgressGameEvent;
    std::function<void(const Fopzo::Generated::OnProgressSharedGameEvent&)> onProgressSharedGameEvent;
    std::function<void(const Fopzo::Generated::OnProgressChallengeEvent&)> onProgressChallengeEvent;
    std::function<void(const Fopzo::Generated::OnSharedGameEventLevelAchieved&)> onSharedGameEventLevelAchieved;
    std::function<void(const Fopzo::Generated::OnGamePassChangedEvent&)> onGamePassChanged;
    std::function<void(const Fopzo::Generated::OnIncomingClanChatMessageEvent&)> onIncomingClanChatMessageEvent;
    std::function<void(const Fopzo::Generated::OnSystemMessageReceivedEvent&)> onSystemMessageReceived;
    std::function<void(const Fopzo::Generated::OnAssignedRoleEvent&)> OnAssignedRoleEvent;
    std::function<void(const Fopzo::Generated::OnClanTagAndNameChanged&)> onClanTagAndNameChanged;
    std::function<void(const Fopzo::Generated::OnClanMaxMembersCountIncreased&)> onClanMembersCountIncreased;
    std::function<void(const Fopzo::Generated::OnJoinRequestCancelledEvent&)> OnJoinRequestCancelledEvent;
    std::function<void(const Fopzo::Generated::OnPlayerAvatarChangedEvent&)> onPlayerAvatarChangedEvent;
    std::function<void(const Fopzo::Generated::OnKickedEvent&)> onKickedEvent;
    std::function<void(const Fopzo::Generated::OnMemberJoinedToClanEvent&)> OnMemberJoinedToClan;
    std::function<void(const Fopzo::Generated::OnOnlineStatusChangedEvent&)> onOnlineStatusChangedEvent;
    std::function<void(const Fopzo::Generated::OnClanMemberDeclinedRequestEvent&)> onClanMemberDeclinedRequestEvent;
    std::function<void(const Fopzo::Generated::OnClanTypeChanged&)> onClanTypeChanged;
    std::function<void(const Fopzo::Generated::OnJoinRequestTakenEvent&)> OnJoinRequestTaken;
    std::function<void(const Fopzo::Generated::OnJoinRequestDeclinedEvent&)> onJoinRequestDeclinedEvent;
    std::function<void(const Fopzo::Generated::OnInviteRequestCancelledEvent&)> OnInviteRequestCancelledEvent;
    std::function<void(const Fopzo::Generated::OnAssignedLeaderRoleEvent&)> onAssignedLeaderRoleEvent;
    std::function<void(const Fopzo::Generated::OnClanAvatarChangedEvent&)> onClanAvatarChangedEvent;
    std::function<void(const Fopzo::Generated::OnLeftFromClan&)> onLeftFromClan;
    std::function<void(const Fopzo::Generated::OnClanDescriptionChangedEvent&)> onClanDescriptionChangedEvent;
    std::function<void(const Fopzo::Generated::OnPlayerNameChangedEvent&)> onPlayerNameChangedEvent;
    std::function<void(const Fopzo::Generated::OnInviteRequestDeclinedEvent&)> onInviteRequestDeclinedEvent;
    std::function<void(const Fopzo::Generated::OnKickedMemberEvent&)> OnKickedMember;
    std::function<void(const Fopzo::Generated::OnInvitedToClanEvent&)> OnInvitedToClanEvent;
    std::function<void(const Fopzo::Generated::OnReadClosedInviteRequestEvent&)> onReadClosedInviteRequestEvent;
    std::function<void(const Fopzo::Generated::OnJoinedToClanEvent&)> OnJoinedToClan;
    std::function<void(const Fopzo::Generated::OnClanStatsUpdatedEvent&)> onClanStatsUpdated;
    std::function<void(const Fopzo::Generated::OnTradeRequestOpenedEvent&)> onTradeRequestOpened;
    std::function<void(const Fopzo::Generated::OnTradeRequestClosedEvent&)> onTradeRequestClosed;
    std::function<void(const Fopzo::Generated::OnPlayerRequestOpenedEvent&)> onPlayerRequestOpened;
    std::function<void(const Fopzo::Generated::OnTradeUpdatedEvent&)> onTradeUpdated;
    std::function<void(const Fopzo::Generated::OnPlayerRequestClosedEvent&)> onPlayerRequestClosed;
    std::function<void(const Fopzo::Generated::OnLobbyOwnerChangedEvent&)> onLobbyOwnerChangedEvent;
    std::function<void(const Fopzo::Generated::OnNewSpectatorJoinedLobbyEvent&)> onNewSpectatorJoinedLobbyEvent;
    std::function<void(const Fopzo::Generated::OnLobbyPlayerTypeChangedEvent&)> onLobbyPlayerTypeChangedEvent;
    std::function<void(const Fopzo::Generated::OnLobbyJoinableChangedEvent&)> onLobbyJoinableChangedEvent;
    std::function<void(const Fopzo::Generated::OnReceivedInviteToLobbyEvent&)> onReceivedInviteToLobbyEvent;
    std::function<void(const Fopzo::Generated::OnNewPlayerInvitedToLobbyEvent&)> onNewPlayerInvitedToLobbyEvent;
    std::function<void(const Fopzo::Generated::OnLobbyNameChangedEvent&)> onLobbyNameChangedEvent;
    std::function<void(const Fopzo::Generated::OnNewPlayerJoinedLobbyEvent&)> onNewPlayerJoinedLobbyEvent;
    std::function<void(const Fopzo::Generated::OnRefuseInviteToLobbyEvent&)> onRefuseInviteToLobbyEvent;
    std::function<void(const Fopzo::Generated::OnRevokeInviteToLobbyEvent&)> onRevokeInviteToLobbyEvent;
    std::function<void(const Fopzo::Generated::OnNewSpectatorInvitedToLobbyEvent&)> onNewSpectatorInvitedToLobbyEvent;
    std::function<void(const Fopzo::Generated::OnReceivedSpectatorInviteToLobbyEvent&)> onReceivedSpectatorInviteToLobbyEvent;
    std::function<void(const Fopzo::Generated::OnLobbyMaxMembersChangedEvent&)> onLobbyMaxMembersChangedEvent;
    std::function<void(const Fopzo::Generated::OnPlayerLeftLobbyEvent&)> onPlayerLeftLobbyEvent;
    std::function<void(const Fopzo::Generated::OnLobbyChatMessageEvent&)> onLobbyChatMessageEvent;
    std::function<void(const Fopzo::Generated::OnLobbyTypeChangedEvent&)> onLobbyTypeChangedEvent;
    std::function<void(const Fopzo::Generated::OnLobbyMaxSpectatorsChangedEvent&)> onLobbyMaxSpectatorsChangedEvent;
    std::function<void(const Fopzo::Generated::OnLobbyPhotonGameChangedEvent&)> onLobbyPhotonGameChangedEvent;
    std::function<void(const Fopzo::Generated::OnLobbyDataChangedEvent&)> onLobbyDataChangedEvent;
    std::function<void(const Fopzo::Generated::OnPlayerKickedFromLobbyEvent&)> onPlayerKickedFromLobbyEvent;
    std::function<void(const Fopzo::Generated::OnLobbyGameServerChangedEvent&)> onLobbyGameServerChangedEvent;
    std::function<void(const Fopzo::Generated::OnRevokeFriendshipRequestEvent&)> onRevokeFriendshipRequestEvent;
    std::function<void(const Fopzo::Generated::OnPlayerAttributesChanged&)> onPlayerAttributesChanged;
    std::function<void(const Fopzo::Generated::OnFriendNameChangedEvent&)> onFriendNameChangedEvent;
    std::function<void(const Fopzo::Generated::OnNewFriendshipRequestEvent&)> onNewFriendshipRequestEvent;
    std::function<void(const Fopzo::Generated::OnFriendAddedEvent&)> onFriendAddedEvent;
    std::function<void(const Fopzo::Generated::OnFriendRemovedEvent&)> onFriendRemovedEvent;
    std::function<void(const Fopzo::Generated::OnFriendAvatarChangedEvent&)> onFriendAvatarChangedEvent;
    std::function<void(const Fopzo::Generated::OnPlayerStatusChangedEvent&)> onPlayerStatusChangedEvent;
    std::function<void(const Fopzo::Generated::OnRentTradeRequestOpenedEvent&)> onRentTradeRequestOpened;
    std::function<void(const Fopzo::Generated::OnRentTradeRequestClosedEvent&)> onRentTradeRequestClosed;
    std::function<void(const Fopzo::Generated::OnPlayerRentRequestOpenedEvent&)> onPlayerRentRequestOpened;
    std::function<void(const Fopzo::Generated::OnPlayerRentRequestClosedEvent&)> onPlayerRentRequestClosed;
    std::function<void(const Fopzo::Generated::OnRentTradeUpdatedEvent&)> onRentTradeUpdated;
    std::function<void(const Fopzo::Generated::OnAdRewardEvent&)> onAdRewardEvent;
    std::function<void(const Fopzo::Generated::OnStatsUpdatedEvent&)> onStatsUpdatedEvent;

    void dispatch(const Fopzo::Base::Event& ev) {
        switch(ev.code()) {
            case 95: if(OnMatchFinished) {
                Fopzo::Generated::OnMatchFinishedEvent p;
                p.ParseFromString(ev.params().one());
                OnMatchFinished(p);
            } break;
            case 140: if(onPlayerStateChangedEvent) {
                Fopzo::Generated::OnPlayerStateChangedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerStateChangedEvent(p);
            } break;
            case 112: if(onCouponActivated) {
                Fopzo::Generated::OnCouponActivatedEvent p;
                p.ParseFromString(ev.params().one());
                onCouponActivated(p);
            } break;
            case 111: if(onInventoryChanged) {
                Fopzo::Generated::OnInventoryChangedEvent p;
                p.ParseFromString(ev.params().one());
                onInventoryChanged(p);
            } break;
            case 119: if(onInAppEvent) {
                Fopzo::Generated::OnInAppEvent p;
                p.ParseFromString(ev.params().one());
                onInAppEvent(p);
            } break;
            case 121: if(onMsgFromFriendEvent) {
                Fopzo::Generated::OnMsgFromFriendEvent p;
                p.ParseFromString(ev.params().one());
                onMsgFromFriendEvent(p);
            } break;
            case 106: if(onProgressGameEvent) {
                Fopzo::Generated::OnProgressGameEvent p;
                p.ParseFromString(ev.params().one());
                onProgressGameEvent(p);
            } break;
            case 109: if(onProgressSharedGameEvent) {
                Fopzo::Generated::OnProgressSharedGameEvent p;
                p.ParseFromString(ev.params().one());
                onProgressSharedGameEvent(p);
            } break;
            case 108: if(onProgressChallengeEvent) {
                Fopzo::Generated::OnProgressChallengeEvent p;
                p.ParseFromString(ev.params().one());
                onProgressChallengeEvent(p);
            } break;
            case 110: if(onSharedGameEventLevelAchieved) {
                Fopzo::Generated::OnSharedGameEventLevelAchieved p;
                p.ParseFromString(ev.params().one());
                onSharedGameEventLevelAchieved(p);
            } break;
            case 107: if(onGamePassChanged) {
                Fopzo::Generated::OnGamePassChangedEvent p;
                p.ParseFromString(ev.params().one());
                onGamePassChanged(p);
            } break;
            case 58: if(onIncomingClanChatMessageEvent) {
                Fopzo::Generated::OnIncomingClanChatMessageEvent p;
                p.ParseFromString(ev.params().one());
                onIncomingClanChatMessageEvent(p);
            } break;
            case 126: if(onSystemMessageReceived) {
                Fopzo::Generated::OnSystemMessageReceivedEvent p;
                p.ParseFromString(ev.params().one());
                onSystemMessageReceived(p);
            } break;
            case 43: if(OnAssignedRoleEvent) {
                Fopzo::Generated::OnAssignedRoleEvent p;
                p.ParseFromString(ev.params().one());
                OnAssignedRoleEvent(p);
            } break;
            case 52: if(onClanTagAndNameChanged) {
                Fopzo::Generated::OnClanTagAndNameChanged p;
                p.ParseFromString(ev.params().one());
                onClanTagAndNameChanged(p);
            } break;
            case 53: if(onClanMembersCountIncreased) {
                Fopzo::Generated::OnClanMaxMembersCountIncreased p;
                p.ParseFromString(ev.params().one());
                onClanMembersCountIncreased(p);
            } break;
            case 37: if(OnJoinRequestCancelledEvent) {
                Fopzo::Generated::OnJoinRequestCancelledEvent p;
                p.ParseFromString(ev.params().one());
                OnJoinRequestCancelledEvent(p);
            } break;
            case 32: if(onPlayerAvatarChangedEvent) {
                Fopzo::Generated::OnPlayerAvatarChangedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerAvatarChangedEvent(p);
            } break;
            case 50: if(onKickedEvent) {
                Fopzo::Generated::OnKickedEvent p;
                p.ParseFromString(ev.params().one());
                onKickedEvent(p);
            } break;
            case 35: if(OnMemberJoinedToClan) {
                Fopzo::Generated::OnMemberJoinedToClanEvent p;
                p.ParseFromString(ev.params().one());
                OnMemberJoinedToClan(p);
            } break;
            case 31: if(onOnlineStatusChangedEvent) {
                Fopzo::Generated::OnOnlineStatusChangedEvent p;
                p.ParseFromString(ev.params().one());
                onOnlineStatusChangedEvent(p);
            } break;
            case 41: if(onClanMemberDeclinedRequestEvent) {
                Fopzo::Generated::OnClanMemberDeclinedRequestEvent p;
                p.ParseFromString(ev.params().one());
                onClanMemberDeclinedRequestEvent(p);
            } break;
            case 48: if(onClanTypeChanged) {
                Fopzo::Generated::OnClanTypeChanged p;
                p.ParseFromString(ev.params().one());
                onClanTypeChanged(p);
            } break;
            case 33: if(OnJoinRequestTaken) {
                Fopzo::Generated::OnJoinRequestTakenEvent p;
                p.ParseFromString(ev.params().one());
                OnJoinRequestTaken(p);
            } break;
            case 45: if(onJoinRequestDeclinedEvent) {
                Fopzo::Generated::OnJoinRequestDeclinedEvent p;
                p.ParseFromString(ev.params().one());
                onJoinRequestDeclinedEvent(p);
            } break;
            case 51: if(OnInviteRequestCancelledEvent) {
                Fopzo::Generated::OnInviteRequestCancelledEvent p;
                p.ParseFromString(ev.params().one());
                OnInviteRequestCancelledEvent(p);
            } break;
            case 47: if(onAssignedLeaderRoleEvent) {
                Fopzo::Generated::OnAssignedLeaderRoleEvent p;
                p.ParseFromString(ev.params().one());
                onAssignedLeaderRoleEvent(p);
            } break;
            case 36: if(onPlayerAttributesChanged) {
                Fopzo::Generated::OnPlayerAttributesChanged p;
                p.ParseFromString(ev.params().one());
                onPlayerAttributesChanged(p);
            } break;
            case 49: if(onClanAvatarChangedEvent) {
                Fopzo::Generated::OnClanAvatarChangedEvent p;
                p.ParseFromString(ev.params().one());
                onClanAvatarChangedEvent(p);
            } break;
            case 46: if(onLeftFromClan) {
                Fopzo::Generated::OnLeftFromClan p;
                p.ParseFromString(ev.params().one());
                onLeftFromClan(p);
            } break;
            case 54: if(onClanDescriptionChangedEvent) {
                Fopzo::Generated::OnClanDescriptionChangedEvent p;
                p.ParseFromString(ev.params().one());
                onClanDescriptionChangedEvent(p);
            } break;
            case 34: if(onPlayerNameChangedEvent) {
                Fopzo::Generated::OnPlayerNameChangedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerNameChangedEvent(p);
            } break;
            case 40: if(onInviteRequestDeclinedEvent) {
                Fopzo::Generated::OnInviteRequestDeclinedEvent p;
                p.ParseFromString(ev.params().one());
                onInviteRequestDeclinedEvent(p);
            } break;
            case 42: if(OnKickedMember) {
                Fopzo::Generated::OnKickedMemberEvent p;
                p.ParseFromString(ev.params().one());
                OnKickedMember(p);
            } break;
            case 44: if(OnInvitedToClanEvent) {
                Fopzo::Generated::OnInvitedToClanEvent p;
                p.ParseFromString(ev.params().one());
                OnInvitedToClanEvent(p);
            } break;
            case 38: if(onReadClosedInviteRequestEvent) {
                Fopzo::Generated::OnReadClosedInviteRequestEvent p;
                p.ParseFromString(ev.params().one());
                onReadClosedInviteRequestEvent(p);
            } break;
            case 39: if(OnJoinedToClan) {
                Fopzo::Generated::OnJoinedToClanEvent p;
                p.ParseFromString(ev.params().one());
                OnJoinedToClan(p);
            } break;
            case 59: if(onClanStatsUpdated) {
                Fopzo::Generated::OnClanStatsUpdatedEvent p;
                p.ParseFromString(ev.params().one());
                onClanStatsUpdated(p);
            } break;
            case 3: if(onTradeRequestOpened) {
                Fopzo::Generated::OnTradeRequestOpenedEvent p;
                p.ParseFromString(ev.params().one());
                onTradeRequestOpened(p);
            } break;
            case 2: if(onTradeRequestClosed) {
                Fopzo::Generated::OnTradeRequestClosedEvent p;
                p.ParseFromString(ev.params().one());
                onTradeRequestClosed(p);
            } break;
            case 5: if(onPlayerRequestOpened) {
                Fopzo::Generated::OnPlayerRequestOpenedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerRequestOpened(p);
            } break;
            case 1: if(onTradeUpdated) {
                Fopzo::Generated::OnTradeUpdatedEvent p;
                p.ParseFromString(ev.params().one());
                onTradeUpdated(p);
            } break;
            case 4: if(onPlayerRequestClosed) {
                Fopzo::Generated::OnPlayerRequestClosedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerRequestClosed(p);
            } break;
            case 73: if(onLobbyOwnerChangedEvent) {
                Fopzo::Generated::OnLobbyOwnerChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyOwnerChangedEvent(p);
            } break;
            case 76: if(onNewSpectatorJoinedLobbyEvent) {
                Fopzo::Generated::OnNewSpectatorJoinedLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onNewSpectatorJoinedLobbyEvent(p);
            } break;
            case 78: if(onLobbyPlayerTypeChangedEvent) {
                Fopzo::Generated::OnLobbyPlayerTypeChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyPlayerTypeChangedEvent(p);
            } break;
            case 62: if(onLobbyJoinableChangedEvent) {
                Fopzo::Generated::OnLobbyJoinableChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyJoinableChangedEvent(p);
            } break;
            case 65: if(onReceivedInviteToLobbyEvent) {
                Fopzo::Generated::OnReceivedInviteToLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onReceivedInviteToLobbyEvent(p);
            } break;
            case 63: if(onNewPlayerInvitedToLobbyEvent) {
                Fopzo::Generated::OnNewPlayerInvitedToLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onNewPlayerInvitedToLobbyEvent(p);
            } break;
            case 81: if(onLobbyNameChangedEvent) {
                Fopzo::Generated::OnLobbyNameChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyNameChangedEvent(p);
            } break;
            case 66: if(onNewPlayerJoinedLobbyEvent) {
                Fopzo::Generated::OnNewPlayerJoinedLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onNewPlayerJoinedLobbyEvent(p);
            } break;
            case 75: if(onRefuseInviteToLobbyEvent) {
                Fopzo::Generated::OnRefuseInviteToLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onRefuseInviteToLobbyEvent(p);
            } break;
            case 72: if(onRevokeInviteToLobbyEvent) {
                Fopzo::Generated::OnRevokeInviteToLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onRevokeInviteToLobbyEvent(p);
            } break;
            case 77: if(onNewSpectatorInvitedToLobbyEvent) {
                Fopzo::Generated::OnNewSpectatorInvitedToLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onNewSpectatorInvitedToLobbyEvent(p);
            } break;
            case 79: if(onReceivedSpectatorInviteToLobbyEvent) {
                Fopzo::Generated::OnReceivedSpectatorInviteToLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onReceivedSpectatorInviteToLobbyEvent(p);
            } break;
            case 67: if(onLobbyMaxMembersChangedEvent) {
                Fopzo::Generated::OnLobbyMaxMembersChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyMaxMembersChangedEvent(p);
            } break;
            case 69: if(onPlayerLeftLobbyEvent) {
                Fopzo::Generated::OnPlayerLeftLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerLeftLobbyEvent(p);
            } break;
            case 64: if(onLobbyChatMessageEvent) {
                Fopzo::Generated::OnLobbyChatMessageEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyChatMessageEvent(p);
            } break;
            case 70: if(onLobbyTypeChangedEvent) {
                Fopzo::Generated::OnLobbyTypeChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyTypeChangedEvent(p);
            } break;
            case 71: if(onLobbyMaxSpectatorsChangedEvent) {
                Fopzo::Generated::OnLobbyMaxSpectatorsChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyMaxSpectatorsChangedEvent(p);
            } break;
            case 68: if(onLobbyPhotonGameChangedEvent) {
                Fopzo::Generated::OnLobbyPhotonGameChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyPhotonGameChangedEvent(p);
            } break;
            case 61: if(onLobbyDataChangedEvent) {
                Fopzo::Generated::OnLobbyDataChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyDataChangedEvent(p);
            } break;
            case 74: if(onPlayerKickedFromLobbyEvent) {
                Fopzo::Generated::OnPlayerKickedFromLobbyEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerKickedFromLobbyEvent(p);
            } break;
            case 80: if(onLobbyGameServerChangedEvent) {
                Fopzo::Generated::OnLobbyGameServerChangedEvent p;
                p.ParseFromString(ev.params().one());
                onLobbyGameServerChangedEvent(p);
            } break;
            case 18: if(onRevokeFriendshipRequestEvent) {
                Fopzo::Generated::OnRevokeFriendshipRequestEvent p;
                p.ParseFromString(ev.params().one());
                onRevokeFriendshipRequestEvent(p);
            } break;
            case 16: if(onPlayerAttributesChanged) {
                Fopzo::Generated::OnPlayerAttributesChanged p;
                p.ParseFromString(ev.params().one());
                onPlayerAttributesChanged(p);
            } break;
            case 14: if(onFriendNameChangedEvent) {
                Fopzo::Generated::OnFriendNameChangedEvent p;
                p.ParseFromString(ev.params().one());
                onFriendNameChangedEvent(p);
            } break;
            case 13: if(onNewFriendshipRequestEvent) {
                Fopzo::Generated::OnNewFriendshipRequestEvent p;
                p.ParseFromString(ev.params().one());
                onNewFriendshipRequestEvent(p);
            } break;
            case 15: if(onFriendAddedEvent) {
                Fopzo::Generated::OnFriendAddedEvent p;
                p.ParseFromString(ev.params().one());
                onFriendAddedEvent(p);
            } break;
            case 17: if(onFriendRemovedEvent) {
                Fopzo::Generated::OnFriendRemovedEvent p;
                p.ParseFromString(ev.params().one());
                onFriendRemovedEvent(p);
            } break;
            case 12: if(onFriendAvatarChangedEvent) {
                Fopzo::Generated::OnFriendAvatarChangedEvent p;
                p.ParseFromString(ev.params().one());
                onFriendAvatarChangedEvent(p);
            } break;
            case 11: if(onPlayerStatusChangedEvent) {
                Fopzo::Generated::OnPlayerStatusChangedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerStatusChangedEvent(p);
            } break;
            case 132: if(onRentTradeRequestOpened) {
                Fopzo::Generated::OnRentTradeRequestOpenedEvent p;
                p.ParseFromString(ev.params().one());
                onRentTradeRequestOpened(p);
            } break;
            case 131: if(onRentTradeRequestClosed) {
                Fopzo::Generated::OnRentTradeRequestClosedEvent p;
                p.ParseFromString(ev.params().one());
                onRentTradeRequestClosed(p);
            } break;
            case 134: if(onPlayerRentRequestOpened) {
                Fopzo::Generated::OnPlayerRentRequestOpenedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerRentRequestOpened(p);
            } break;
            case 133: if(onPlayerRentRequestClosed) {
                Fopzo::Generated::OnPlayerRentRequestClosedEvent p;
                p.ParseFromString(ev.params().one());
                onPlayerRentRequestClosed(p);
            } break;
            case 130: if(onRentTradeUpdated) {
                Fopzo::Generated::OnRentTradeUpdatedEvent p;
                p.ParseFromString(ev.params().one());
                onRentTradeUpdated(p);
            } break;
            case 116: if(onAdRewardEvent) {
                Fopzo::Generated::OnAdRewardEvent p;
                p.ParseFromString(ev.params().one());
                onAdRewardEvent(p);
            } break;
            case 101: if(onStatsUpdatedEvent) {
                Fopzo::Generated::OnStatsUpdatedEvent p;
                p.ParseFromString(ev.params().one());
                onStatsUpdatedEvent(p);
            } break;
        }
    }
};