//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TOPClientLoginProvider.h"
#import "TOPOAuth2Provider.h"

@class GTMOAuth2Authentication, NSArray, NSMutableArray, NSMutableDictionary, NSString, TOPCookieFetcher, TOPKeychainHelper;

@interface TOPAuthManager : NSObject <TOPClientLoginProvider, TOPOAuth2Provider>
{
    GTMOAuth2Authentication *auth_;
    NSString *scope_;
    NSString *clientID_;
    NSString *clientSecret_;
    id <TOPAuthManagerDelegate> delegate_;
    BOOL allowInsecureAuthorization_;
    BOOL clearAllCookiesOnLogout_;
    BOOL inAddSessionFlow_;
    NSMutableArray *clientLoginServices_;
    TOPCookieFetcher *cookieFetcher_;
    NSArray *cookiesForAddSession_;
    NSMutableArray *users_;
    NSMutableDictionary *userEmailToAuth_;
    NSString *currentSessionUserEmail_;
    NSString *fallbackSessionUserEmail_;
    TOPKeychainHelper *keychainHelper_;
    NSString *cookieFetchContinueURL_;
    CDUnknownBlockType cookieFetchCompletionBlock_;
}

+ (void)setGoogleUserInfoHost:(id)arg1;
+ (void)setAuthorizationHost:(id)arg1;
+ (void)setGaiaHost:(id)arg1;
@property(copy) NSString *fallbackSessionUserEmail; // @synthesize fallbackSessionUserEmail=fallbackSessionUserEmail_;
@property(copy) NSString *currentSessionUserEmail; // @synthesize currentSessionUserEmail=currentSessionUserEmail_;
@property(copy) CDUnknownBlockType cookieFetchCompletionBlock; // @synthesize cookieFetchCompletionBlock=cookieFetchCompletionBlock_;
@property(copy) NSString *cookieFetchContinueURL; // @synthesize cookieFetchContinueURL=cookieFetchContinueURL_;
@property(nonatomic) BOOL inAddSessionFlow; // @synthesize inAddSessionFlow=inAddSessionFlow_;
@property(copy, nonatomic) NSArray *cookiesForAddSession; // @synthesize cookiesForAddSession=cookiesForAddSession_;
@property(nonatomic) BOOL clearAllCookiesOnLogout; // @synthesize clearAllCookiesOnLogout=clearAllCookiesOnLogout_;
@property(nonatomic) BOOL allowInsecureAuthorization; // @synthesize allowInsecureAuthorization=allowInsecureAuthorization_;
@property(retain, nonatomic) GTMOAuth2Authentication *authentication; // @synthesize authentication=auth_;
- (void)setKeychainAccessibility:(void *)arg1;
- (void)setDelegate:(id)arg1;
- (void)removeSession:(id)arg1;
- (void)clearCookies;
- (void)logout;
- (void)setCookieFetchTimeout:(double)arg1;
- (void)loadCookiesForUser:(id)arg1 service:(id)arg2 continueURL:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)loadCookiesForService:(id)arg1 continueURL:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (int)fallbackSessionIndex;
- (void)fallback;
- (BOOL)canRevertToFallback;
- (unsigned int)sessionCount;
- (int)currentSelectedSessionIndex;
- (id)userEmailAtIndex:(unsigned int)arg1;
- (id)userEmailForSessions;
- (void)selectSession:(id)arg1;
- (void)addSession;
- (void)authenticate;
- (BOOL)isAuthenticated;
- (void)reauthenticateForService:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clientLoginTokenForService:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userNoLongerAuthenticated;
- (void)reauthenticate;
- (void)loginViewControllerDismissed;
- (void)loadCookiesFromMemory;
- (void)storeCookiesInMemory;
- (BOOL)handleInvalidGrantError:(id)arg1;
- (id)loginControllerWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)authenticationForEmail:(id)arg1;
- (BOOL)isAuthenticatedForEmail:(id)arg1;
- (void)reauthenticateSessionForEmail:(id)arg1 notifyDelegate:(BOOL)arg2;
- (void)clearInternalStateForCurrentSession;
- (void)removeAuthFromKeychainForEmail:(id)arg1;
- (void)removeAuthFromKeychain;
- (void)loadAuthStateFromKeychain;
- (void)fetchClientLoginTokenForService:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)invalidateClientLoginTokenForService:(id)arg1;
- (void)invalidateClientLoginTokens;
- (void)invalidateClientLoginTokensForEmail:(id)arg1;
- (void)handleLoginFinished:(id)arg1 error:(id)arg2 notifyDelegate:(BOOL)arg3;
- (void)showLoginViewForEmail:(id)arg1;
- (void)dealloc;
- (id)initWithScope:(id)arg1 keychainItem:(id)arg2 clientID:(id)arg3 clientSecret:(id)arg4 delegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

