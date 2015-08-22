//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAPISessionStore, FBKVOController, FBSessionScope, FBUserSession, NSObject<OS_dispatch_queue>, NSString;

@interface FBSessionController : NSObject
{
    NSString *_appGroup;
    NSString *_appSecret;
    NSObject<OS_dispatch_queue> *_apiSessionStoreReloadQueue;
    FBKVOController *_kvoController;
    BOOL _allowServiceDelay;
    FBSessionScope *_sessionScope;
    FBUserSession *_session;
    NSString *_storeIdentifier;
    FBAPISessionStore *_apiSessionStore;
}

@property(retain, nonatomic) FBAPISessionStore *apiSessionStore; // @synthesize apiSessionStore=_apiSessionStore;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
- (void).cxx_destruct;
- (void)_onProtectedDataAvailable:(id)arg1;
- (void)notifySession;
- (void)resetSession;
- (void)_resetSessionWithoutNotification;
- (void)_loggedInUserFBIDDidChange;
- (void)_postHasUserIfNeeded;
- (void)_updatedUser;
- (void)dealloc;
- (id)initWithAppSecret:(id)arg1 sessionScope:(id)arg2 appGroup:(id)arg3 allowServiceDelay:(BOOL)arg4;
- (id)initWithAppSecret:(id)arg1 sessionScope:(id)arg2;

@end
