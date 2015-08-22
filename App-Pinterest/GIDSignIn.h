//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GIDSignInWebViewControllerDelegate.h"

@class GIDGoogleUser, GIDRuntimeConfigFetcher, GIDSignInCallbackSchemes, NSArray, NSString;

@interface GIDSignIn : NSObject <GIDSignInWebViewControllerDelegate>
{
    GIDSignInCallbackSchemes *_schemes;
    NSString *_scopeString;
    NSString *_keychainName;
    double _lastAuthenticateTimestamp;
    GIDRuntimeConfigFetcher *_configFetcher;
    BOOL _shouldFetchBasicProfile;
    BOOL _allowsSignInWithBrowser;
    BOOL _allowsSignInWithWebView;
    GIDGoogleUser *_currentUser;
    id <GIDSignInDelegate> _delegate;
    id <GIDSignInUIDelegate> _uiDelegate;
    NSString *_clientID;
    NSArray *_scopes;
    NSString *_language;
    NSString *_serverClientID;
    NSString *_openIDRealm;
}

+ (BOOL)supportsCurrentUserKVO;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)sharedInstance;
@property(copy, nonatomic) NSString *openIDRealm; // @synthesize openIDRealm=_openIDRealm;
@property(copy, nonatomic) NSString *serverClientID; // @synthesize serverClientID=_serverClientID;
@property(copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) BOOL allowsSignInWithWebView; // @synthesize allowsSignInWithWebView=_allowsSignInWithWebView;
@property(nonatomic) BOOL allowsSignInWithBrowser; // @synthesize allowsSignInWithBrowser=_allowsSignInWithBrowser;
@property(nonatomic) BOOL shouldFetchBasicProfile; // @synthesize shouldFetchBasicProfile=_shouldFetchBasicProfile;
@property(copy, nonatomic) NSArray *scopes; // @synthesize scopes=_scopes;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(nonatomic) __weak id <GIDSignInUIDelegate> uiDelegate; // @synthesize uiDelegate=_uiDelegate;
@property(nonatomic) __weak id <GIDSignInDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) GIDGoogleUser *currentUser; // @synthesize currentUser=_currentUser;
- (void).cxx_destruct;
- (void)dealloc;
- (void)doWebViewLoginWithParams:(id)arg1;
- (BOOL)UIDelegateSupportsWebView;
- (void)signInWebViewControllerDidComplete:(id)arg1 withURL:(id)arg2 error:(id)arg3;
- (BOOL)signInWebViewController:(id)arg1 shouldKeepLSOCookiesForAuthResponseURL:(id)arg2;
- (void)signInWebViewControllerNeedsDismissing:(id)arg1;
- (BOOL)signInWebViewController:(id)arg1 shouldTreatURLAsAuthResponse:(id)arg2;
- (BOOL)openInBrowser:(id)arg1;
- (void)didDisconnectWithUser:(id)arg1 error:(id)arg2;
- (void)startFetchURL:(id)arg1 fromAuth:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)addCallDelegateCallback:(id)arg1;
- (void)addCallUIDelegateCallback:(id)arg1;
- (void)addFetchUserInfoCallback:(id)arg1;
- (void)addClearVerifierCallback:(id)arg1;
- (void)addSaveAuthCallback:(id)arg1 toKeychain:(BOOL)arg2;
- (void)maybeFetchToken:(id)arg1 fallback:(CDUnknownBlockType)arg2;
- (void)parseAuthURL:(id)arg1 fromSSO:(BOOL)arg2 authFlow:(id)arg3;
- (void)addCodeReadyCallbacks:(id)arg1;
- (BOOL)authenticateMaybeInteractively:(BOOL)arg1 withParams:(id)arg2;
- (void)authenticateInteractivelyWithParams:(id)arg1;
- (void)informUIDelegateOfDispatchResult:(id)arg1;
- (void)disconnectWithUser:(id)arg1;
- (void)signOutWithUser:(id)arg1;
- (id)sdkVersionLoggingValue;
- (void)removeAdditionalTokenRequestParametersFromAuth:(id)arg1;
- (void)addVerifierToAuth:(id)arg1;
- (void)addServerClientIDToAuth:(id)arg1;
- (void)addOpenIDRealmToAuth:(id)arg1;
- (void)addAdditionalTokenRequestParameters:(id)arg1 toAuth:(id)arg2;
- (id)standardLanguageCode;
- (void)finishWithKeychainError;
- (void)doOAuthLoginWithParams:(id)arg1;
- (id)singleSignOnURLSchemeWithAppSwitchConfig:(id)arg1 includeWebBrowserScheme:(BOOL)arg2 includeWebViewScheme:(BOOL)arg3;
- (id)oauth2URLWithParams:(id)arg1;
- (BOOL)generateNewSecretState;
- (BOOL)generateVerifier;
- (id)randomString;
- (id)secretState;
- (id)redirectURI;
- (BOOL)trySingleSignOnWithParams:(id)arg1 appSwitchConfig:(id)arg2;
- (BOOL)clearSavedKeychainNames;
- (void)addSavedKeychainName:(id)arg1;
- (void)setEscapedKeychainNames:(id)arg1;
- (id)getEscapedKeychainNames;
- (BOOL)matchesSavedFingerprint;
- (BOOL)saveFingerprint;
- (BOOL)save:(id)arg1 toKeychain:(id)arg2;
- (id)stringFromKeychain:(id)arg1;
- (void)didChangeParameters;
- (id)fingerprint;
- (void)clearAuthentication;
- (void)removeAllKeychainEntries;
- (BOOL)isFreshInstall;
- (void)assertValidParameters;
- (void)fetchRuntimeConfigWithHandler:(CDUnknownBlockType)arg1;
- (double)lastAuthenticateTimestamp;
- (void)signInWithParams:(id)arg1;
- (void)fetchUserID:(CDUnknownBlockType)arg1;
- (id)appBundleID;
- (double)appSwitchRandomNumber;
- (id)lsoServer;
- (id)tokenInfoServer;
- (void)disconnect;
- (void)signOut;
- (BOOL)handleURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (BOOL)URLIsFromSSO:(id)arg1 sourceApplication:(id)arg2;
- (BOOL)URLIsFromBrowser:(id)arg1 sourceApplication:(id)arg2;
- (void)signIn;
- (void)signInSilently;
- (void)checkGoogleSignInAppInstalled:(CDUnknownBlockType)arg1;
- (BOOL)hasAuthInKeychain;
- (id)noSignInHandlersInstalledError;
- (id)canceledError;
- (id)unknownError;
- (id)keychainError;
- (id)errorWithString:(id)arg1 code:(int)arg2;
- (id)init;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)installGoogleApp;
- (id)constructAlertDownloadPrompt:(id)arg1;
- (id)constructDownloadPrompt:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
