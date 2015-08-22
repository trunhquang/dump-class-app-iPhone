//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HipChatAppDelegate.h"
#import "XMPPStreamDelegate.h"

@class AccountContext, GCDMulticastDelegate<PresenceRequestorDelegate>, HipChatApp, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface PresenceRequestor : NSObject <HipChatAppDelegate, XMPPStreamDelegate>
{
    NSMutableSet *_userIdsWithPendingRequests;
    NSMutableDictionary *_pendingRequestIds;
    NSObject<OS_dispatch_queue> *_workQueue;
    HipChatApp *_app;
    GCDMulticastDelegate<PresenceRequestorDelegate> *_multicastDelegate;
    AccountContext *_accountContext;
}

+ (id)generateUUID;
+ (id)presenceRequestorWithAccountContext:(id)arg1;
@property(nonatomic) __weak AccountContext *accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) GCDMulticastDelegate<PresenceRequestorDelegate> *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
@property(nonatomic) __weak HipChatApp *app; // @synthesize app=_app;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) NSMutableDictionary *pendingRequestIds; // @synthesize pendingRequestIds=_pendingRequestIds;
@property(retain, nonatomic) NSMutableSet *userIdsWithPendingRequests; // @synthesize userIdsWithPendingRequests=_userIdsWithPendingRequests;
- (void).cxx_destruct;
- (void)hipChatAppDisconnected;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStream:(id)arg1 didReceivePresence:(id)arg2;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)doRequestAllPresences;
- (void)requestAllPresences;
- (void)requestPresencesForUserIds:(id)arg1;
- (void)dealloc;
- (id)initWithAccountContext:(id)arg1;
- (id)init;

@end
