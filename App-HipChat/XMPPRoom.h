//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class NSString, XMPPIDTracker, XMPPJID;

@interface XMPPRoom : XMPPModule
{
    id <XMPPRoomStorage> xmppRoomStorage;
    XMPPJID *roomJID;
    XMPPJID *myRoomJID;
    NSString *myNickname;
    NSString *roomSubject;
    XMPPIDTracker *responseTracker;
    unsigned short state;
}

+ (id)itemWithRole:(id)arg1 jid:(id)arg2;
+ (id)itemWithAffiliation:(id)arg1 jid:(id)arg2;
- (void).cxx_destruct;
- (void)xmppStreamDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)xmppStream:(id)arg1 didSendMessage:(id)arg2;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (void)sendMessage:(id)arg1;
- (void)inviteUser:(id)arg1 withMessage:(id)arg2;
- (void)destoryRoom;
- (void)handleDestroyRoomResponse:(id)arg1 withInfo:(id)arg2;
- (void)leaveRoom;
- (id)editRoomPrivileges:(id)arg1;
- (void)handleEditRoomPrivilegesResponse:(id)arg1 withInfo:(id)arg2;
- (void)fetchModeratorsList;
- (void)handleFetchModeratorsListResponse:(id)arg1 withInfo:(id)arg2;
- (void)fetchMembersList;
- (void)handleFetchMembersListResponse:(id)arg1 withInfo:(id)arg2;
- (void)fetchBanList;
- (void)handleFetchBanListResponse:(id)arg1 withInfo:(id)arg2;
- (void)changeRoomSubject:(id)arg1;
- (void)chageNickname:(id)arg1;
- (void)configureRoomUsingOptions:(id)arg1;
- (void)handleConfigureRoomResponse:(id)arg1 withInfo:(id)arg2;
- (void)fetchConfigurationForm;
- (void)handleConfigurationFormResponse:(id)arg1 withInfo:(id)arg2;
- (void)joinRoomUsingNickname:(id)arg1 history:(id)arg2 password:(id)arg3;
- (void)joinRoomUsingNickname:(id)arg1 history:(id)arg2;
- (BOOL)preJoinWithNickname:(id)arg1;
@property(readonly) BOOL isJoined;
@property(readonly) NSString *roomSubject;
@property(readonly) NSString *myNickname;
@property(readonly) XMPPJID *myRoomJID;
@property(readonly) XMPPJID *roomJID;
@property(readonly) id <XMPPRoomStorage> xmppRoomStorage;
- (id)multicastDelegate;
- (id)moduleQueue;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithRoomStorage:(id)arg1 jid:(id)arg2 dispatchQueue:(id)arg3;
- (id)initWithRoomStorage:(id)arg1 jid:(id)arg2;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

