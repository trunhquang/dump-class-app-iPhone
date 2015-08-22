//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAppSessionController.h"
#import "FBAppSessionLoginHelperDelegate.h"
#import "FBNuxStepChainControllerDelegate.h"
#import "FBSessionClassProvidable.h"
#import "FBStarRatingsServiceDelegate.h"
#import "THNavigationCoordinatorDelegate.h"
#import "THNuxPageViewNotificationsDelegate.h"

@class FBAPISessionStore, FBAppServiceController, FBAppSessionLoginHelper, FBExceptionHandler, FBIdleDetector, FBLogoutController, FBNuxController, FBProviderMapData, FBPushRegistrar, FBRequesterConfiguration, FBStarRatingsService, FBUserSession, NSString, THBugReportConduit, THLigerAdapter, THNavigationCoordinator, THPushHandler<FBPushHandler>, UIAlertView, UIWindow;

@interface THAppSessionController : NSObject <FBAppSessionLoginHelperDelegate, FBNuxStepChainControllerDelegate, FBStarRatingsServiceDelegate, THNavigationCoordinatorDelegate, THNuxPageViewNotificationsDelegate, FBAppSessionController, FBSessionClassProvidable>
{
    int _state;
    UIWindow *_rootWindow;
    id <FBAppSessionControllerDelegate> _delegate;
    THPushHandler<FBPushHandler> *_pushHandler;
    UIAlertView *_alertView;
    FBPushRegistrar *_pushRegistrar;
    FBAPISessionStore *_sessionStore;
    FBAppSessionLoginHelper *_loginHelper;
    FBExceptionHandler *_exceptionHandler;
    FBLogoutController *_logoutController;
    FBNuxController *_nuxController;
    FBNuxController *_requestPushController;
    FBAppServiceController *_serviceController;
    FBIdleDetector *_idleDetector;
    FBStarRatingsService *_starRatingService;
    FBUserSession *_session;
    FBRequesterConfiguration *_requesterConfiguration;
    THBugReportConduit *_bugReportConduit;
    THLigerAdapter *_ligerAdapter;
    THNavigationCoordinator *_navCoordinator;
    FBProviderMapData *_providerMapData;
}

@property(retain, nonatomic) FBProviderMapData *providerMapData; // @synthesize providerMapData=_providerMapData;
@property(retain, nonatomic) THNavigationCoordinator *navCoordinator; // @synthesize navCoordinator=_navCoordinator;
@property(retain, nonatomic) THLigerAdapter *ligerAdapter; // @synthesize ligerAdapter=_ligerAdapter;
@property(retain, nonatomic) THBugReportConduit *bugReportConduit; // @synthesize bugReportConduit=_bugReportConduit;
@property(retain, nonatomic) FBRequesterConfiguration *requesterConfiguration; // @synthesize requesterConfiguration=_requesterConfiguration;
@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FBStarRatingsService *starRatingService; // @synthesize starRatingService=_starRatingService;
@property(retain, nonatomic) FBIdleDetector *idleDetector; // @synthesize idleDetector=_idleDetector;
@property(retain, nonatomic) FBAppServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(retain, nonatomic) FBNuxController *requestPushController; // @synthesize requestPushController=_requestPushController;
@property(retain, nonatomic) FBNuxController *nuxController; // @synthesize nuxController=_nuxController;
@property(retain, nonatomic) FBLogoutController *logoutController; // @synthesize logoutController=_logoutController;
@property(retain, nonatomic) FBExceptionHandler *exceptionHandler; // @synthesize exceptionHandler=_exceptionHandler;
@property(retain, nonatomic) FBAppSessionLoginHelper *loginHelper; // @synthesize loginHelper=_loginHelper;
@property(retain, nonatomic) FBAPISessionStore *sessionStore; // @synthesize sessionStore=_sessionStore;
@property(readonly, retain, nonatomic) FBPushRegistrar *pushRegistrar; // @synthesize pushRegistrar=_pushRegistrar;
@property(retain, nonatomic) UIAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) THPushHandler<FBPushHandler> *pushHandler; // @synthesize pushHandler=_pushHandler;
@property(nonatomic) __weak id <FBAppSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIWindow *rootWindow; // @synthesize rootWindow=_rootWindow;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)_setupLoginViewController:(id)arg1;
- (void)_showPromptForPushNotifications;
- (void)_showNuxForViewer:(id)arg1;
- (void)_setupAndPossiblyShowNux;
- (void)didWantPushNotitifications;
- (id)starRatingsServiceAppID:(id)arg1;
- (id)starRatingsServiceAppDisplayName:(id)arg1;
- (id)starRatingsServiceCurrentWindow:(id)arg1;
- (BOOL)starRatingsServiceCanDisplay:(id)arg1;
- (void)stepChainControllerDidEnd:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (id)thirdPartyAuthController;
- (id)thirdPartyAuthViewControllerForAppSessionLoginHelper:(id)arg1 accessToken:(id)arg2;
- (id)authenticationViewControllerForAppSessionLoginHelper:(id)arg1 authenticationManager:(id)arg2 defaultLoginCredential:(id)arg3;
- (id)startupEventsToLogForLoginInterruptionForAppSessionLoginHelper:(id)arg1;
- (void)appSessionLoginHelper:(id)arg1 didValidateAccessTokenInBackground:(BOOL)arg2 keychainWasLockedAtPreviousLoginAttempt:(BOOL)arg3;
- (void)openURL:(id)arg1 sourceApplication:(id)arg2;
- (void)applicationWasLaunchedByRemoteNotification:(id)arg1 launchedByUser:(BOOL)arg2;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive;
- (void)showLogoutAlertAndPresentLogoutUI:(id)arg1;
- (void)showLogoutAlertAndPresentLogoutUI;
- (void)presentLogoutUIWithReason:(id)arg1;
- (void)presentSessionUIFromLaunch:(BOOL)arg1 forceSessionStoreClear:(BOOL)arg2 showSpinner:(BOOL)arg3;
- (void)_registerPushIfPossible;
- (id)_createPushRegistrarWithSession:(id)arg1;
- (void)_onValidAccessToken;
- (void)dealloc;
- (void)configureWithSession:(id)arg1 exceptionHandler:(id)arg2 rootWindow:(id)arg3 application:(id)arg4 requesterConfiguration:(id)arg5;
- (id)initWithProviderMapData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) __weak id <FBNavigation> navigation;
@property(readonly, nonatomic) id <FBNavigationCoordinator> navigationCoordinator;
@property(readonly) Class superclass;

@end

