//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMDiskThreadDeleter, FBMFetchedThreadKeySet, FBMGraphNetworkerRequest, FBMNetworkProtocolController, FBMThread, FBMThreadDescriptorFactory, FBMThreadStateTracker, FBMUserFetchedListeningAnnouncer, FBMUserInfoFetchManager, FBUserSession;

@interface FBMThreadMessagesFetcher : NSObject
{
    FBMThread *_thread;
    unsigned int _mailboxType;
    FBMGraphNetworkerRequest *_graphRequest;
    FBMThreadStateTracker *_fetchingStateTracker;
    FBMDiskThreadDeleter *_diskThreadDeleter;
    FBMUserInfoFetchManager *_userInfoFetchManager;
    FBUserSession *_session;
    id <MNAuthenticationManager> _authManager;
    FBMNetworkProtocolController *_networkProtocolController;
    BOOL _shouldQueryUserInfo;
    FBMUserFetchedListeningAnnouncer *_userFetchedAnnouncer;
    FBMFetchedThreadKeySet *_fetchedThreadKeySet;
    FBMThreadDescriptorFactory *_threadDescriptorFactory;
    BOOL _includeMessages;
    id <FBMThreadMessagesFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMThreadMessagesFetcherDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL includeMessages; // @synthesize includeMessages=_includeMessages;
- (void).cxx_destruct;
- (void)_invokeFailWithErrorCode:(int)arg1;
- (void)_clearThread;
- (void)_didFailWithError:(id)arg1;
- (void)_didSucceed;
- (void)_didSucceedWithResponse:(id)arg1;
- (void)setIsForegroundScene:(BOOL)arg1;
- (void)cancel;
- (void)start;
- (id)friendlyRequestName;
- (id)_initWithMailboxType:(unsigned int)arg1 delegate:(id)arg2;
- (id)initWithThread:(id)arg1 mailboxType:(unsigned int)arg2 delegate:(id)arg3;

@end
