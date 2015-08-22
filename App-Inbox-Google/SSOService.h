//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDateFormatter, NSMutableDictionary, SSOConfiguration, SSOProfileSource;

@interface SSOService : NSObject
{
    NSMutableDictionary *_identities;
    NSDateFormatter *_dateFormatter;
    BOOL _isSigningInWithController;
    BOOL _areIdentitiesStale;
    SSOConfiguration *_configuration;
    SSOProfileSource *_profileSource;
}

+ (void)setFetcherToCallBackOnMainQueue:(id)arg1;
+ (BOOL)signInViewControllerHasBeenDismissedForError:(id)arg1;
+ (id)errorForCancelWithDismissal:(BOOL)arg1;
+ (BOOL)isSSOFetcher:(id)arg1;
+ (id)fetcherWithRequest:(id)arg1 configuration:(id)arg2;
+ (id)deviceIdentifier;
@property(nonatomic) BOOL areIdentitiesStale; // @synthesize areIdentitiesStale=_areIdentitiesStale;
@property(readonly, nonatomic) SSOProfileSource *profileSource; // @synthesize profileSource=_profileSource;
@property(retain, nonatomic) SSOConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)appDictionary;
- (void)auditAppTable:(id)arg1;
- (void)markIdentityAsUnselected:(id)arg1;
- (void)markIdentityAsSelected:(id)arg1;
- (id)appTableForIdentity:(id)arg1;
- (void)writeAppTableToKeychain:(id)arg1 forIdentity:(id)arg2;
- (id)lastUsedDateForIdentity:(id)arg1;
- (void)updateFullNameForIdentity:(id)arg1;
- (void)markIdentityAsSignedIn:(id)arg1 updateAuthAdvice:(BOOL)arg2;
- (BOOL)writeAndAuthorizeIdentity:(id)arg1 outputIdentity:(id *)arg2 error:(id *)arg3;
- (id)errorFromAuthAdvice:(id)arg1;
- (BOOL)hasSignedInIdentity:(id)arg1 error:(id *)arg2;
- (id)identitiesWithError:(id *)arg1;
- (id)identities;
- (void)identityListDidChange:(id)arg1;
- (void)accessTokenRefreshFailed:(id)arg1;
- (void)postIdentityListChangedNotificationWithUserInfo:(id)arg1;
- (void)requestAccessTokenWithIdentity:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestServiceTokenWithIdentity:(id)arg1 service:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestTokenAuthURLForIdentity:(id)arg1 targetURL:(id)arg2 service:(id)arg3 source:(id)arg4 callback:(CDUnknownBlockType)arg5;
- (void)requestAuthenticationWithIdentity:(id)arg1 scopes:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)authorizationForIdentity:(id)arg1 scopes:(id)arg2 error:(id *)arg3;
- (id)forgetIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)clearFileCache;
- (BOOL)isValidUserID:(id)arg1;
- (BOOL)isValidIdentity:(id)arg1;
- (void)showDialogWithError:(id)arg1 title:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)signInViewControllerWithFastSetupEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signInWithController:(CDUnknownBlockType)arg1 userEmail:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)reauthenticateUser:(id)arg1 presentViewController:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)reauthenticateIdentity:(id)arg1 presentViewController:(CDUnknownBlockType)arg2 callback:(CDUnknownBlockType)arg3;
- (void)signInIdentity:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)signInWithController:(CDUnknownBlockType)arg1 callback:(CDUnknownBlockType)arg2;
- (id)identitiesSortedForDisplay;
- (id)identitiesSortedBySelectionDate;
- (id)recentlySelectedIdentity;
- (id)identityForHashedUserID:(id)arg1;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (id)init;
- (void)requestAuthorizationCodeWithIdentity:(id)arg1 scopes:(id)arg2 audience:(id)arg3 verifier:(id)arg4 extraParameters:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)requestAuthorizationCodeWithIdentity:(id)arg1 scopes:(id)arg2 clientID:(id)arg3 applicationID:(id)arg4 extraParameters:(id)arg5 callback:(CDUnknownBlockType)arg6;

@end

