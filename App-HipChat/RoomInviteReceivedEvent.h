//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatEvent.h"

@class AccountContext, NSString, XMPPJID, XMPPMessage;

@interface RoomInviteReceivedEvent : HipChatEvent
{
    XMPPJID *_joinEventRoomJID;
    XMPPJID *_joinEventSenderJID;
    NSString *_roomInviteMessage;
    XMPPMessage *_roomJoinInviteXMPPMessage;
    AccountContext *_accountContext;
}

+ (id)eventWithMessage:(id)arg1 accountContext:(id)arg2;
@property(readonly, nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) XMPPMessage *roomJoinInviteXMPPMessage; // @synthesize roomJoinInviteXMPPMessage=_roomJoinInviteXMPPMessage;
@property(copy, nonatomic) NSString *roomInviteMessage; // @synthesize roomInviteMessage=_roomInviteMessage;
@property(retain, nonatomic) XMPPJID *joinEventSenderJID; // @synthesize joinEventSenderJID=_joinEventSenderJID;
@property(retain, nonatomic) XMPPJID *joinEventRoomJID; // @synthesize joinEventRoomJID=_joinEventRoomJID;
- (void).cxx_destruct;
- (id)roomNameFromInvite:(id)arg1;
- (id)initWithRoomJoinMessage:(id)arg1 accountContext:(id)arg2;

@end

