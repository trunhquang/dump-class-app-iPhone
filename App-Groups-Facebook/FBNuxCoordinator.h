//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInvalidating.h"
#import "FBNuxDelegate.h"

@class FBKeyboardObserver, FBNuxBackgroundListener, FBNuxBugReporter, FBNuxCatalog, FBNuxPersistentStore, FBQueuePerformer, FBUserSession, NSDate, NSMutableArray, NSString, NSTimer, UIApplication, UIViewController;

@interface FBNuxCoordinator : NSObject <FBInvalidating, FBNuxDelegate>
{
    FBUserSession *_session;
    BOOL _valid;
    FBNuxPersistentStore *_persistentStore;
    FBNuxBackgroundListener *_backgroundListener;
    FBQueuePerformer *_queuePerformer;
    UIApplication *_application;
    FBNuxBugReporter *_bugReporter;
    BOOL _fetchingEligibleNuxes;
    BOOL _devMode;
    FBNuxCatalog *_nuxCatalog;
    id <FBNavigation> _navigationController;
    NSTimer *_staleTimer;
    NSDate *_expirationDate;
    id <FBNuxPresenter> _activeNuxPresenter;
    NSMutableArray *_activePresentersChain;
    FBKeyboardObserver *_keyboardObserver;
    id <FBNuxCoordinatorSettingsDelegate> _settingsDelegate;
    NSDate *_lastFetchTime;
    NSMutableArray *_dismissedPresentersChain;
    NSString *_presentedNuxTriggerID;
    UIViewController *_presentedViewController;
    double _minimumFetchInterval;
    double _modalNuxImpressionCooldown;
    double _embeddedNuxActionCooldown;
}

+ (id)_appShipDate;
+ (id)_embeddedNuxActionEvents;
@property(retain, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property(retain, nonatomic) NSString *presentedNuxTriggerID; // @synthesize presentedNuxTriggerID=_presentedNuxTriggerID;
@property(retain, nonatomic) NSMutableArray *dismissedPresentersChain; // @synthesize dismissedPresentersChain=_dismissedPresentersChain;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) double embeddedNuxActionCooldown; // @synthesize embeddedNuxActionCooldown=_embeddedNuxActionCooldown;
@property(nonatomic) double modalNuxImpressionCooldown; // @synthesize modalNuxImpressionCooldown=_modalNuxImpressionCooldown;
@property(nonatomic) double minimumFetchInterval; // @synthesize minimumFetchInterval=_minimumFetchInterval;
@property(retain, nonatomic) NSDate *lastFetchTime; // @synthesize lastFetchTime=_lastFetchTime;
@property(nonatomic) __weak id <FBNuxCoordinatorSettingsDelegate> settingsDelegate; // @synthesize settingsDelegate=_settingsDelegate;
@property(retain, nonatomic) FBKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
@property(retain, nonatomic) NSMutableArray *activePresentersChain; // @synthesize activePresentersChain=_activePresentersChain;
@property(retain, nonatomic) id <FBNuxPresenter> activeNuxPresenter; // @synthesize activeNuxPresenter=_activeNuxPresenter;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(retain, nonatomic) NSTimer *staleTimer; // @synthesize staleTimer=_staleTimer;
@property(nonatomic) BOOL devMode; // @synthesize devMode=_devMode;
@property(retain, nonatomic) id <FBNavigation> navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) FBNuxCatalog *nuxCatalog; // @synthesize nuxCatalog=_nuxCatalog;
- (void).cxx_destruct;
- (void)nuxPresenter:(id)arg1 didEncounterEvent:(id)arg2 extra:(id)arg3;
- (id)_commonNuxDataWithNuxPresenter:(id)arg1;
- (void)_logWithNuxPresenter:(id)arg1 analyticsLoggingEvent:(id)arg2 extra:(id)arg3;
- (void)_nuxPresenter:(id)arg1 didEncounterEvent:(id)arg2 extra:(id)arg3;
- (CDUnknownBlockType)_nuxChainCompletionBlockForDismissedPresenterChain:(id)arg1;
- (void)_dismissNuxPresenter:(id)arg1 viewController:(id)arg2;
- (void)_activeNuxPresenterWasDismissed;
- (void)nuxPresenter:(id)arg1 finishedWithEvent:(id)arg2;
- (void)_logAnalyticsModule:(id)arg1 event:(id)arg2 extra:(id)arg3;
- (void)_triggerNuxPresenter:(id)arg1 withTriggerContext:(id)arg2;
- (BOOL)_nuxPresenterAllowsChaining:(id)arg1;
- (void)_sanitizeActivePresentersChain:(id)arg1;
- (id)_getBestEligibleNuxForTrigger:(id)arg1 withTriggerContext:(id)arg2;
- (BOOL)_showModalNuxPresenter:(id)arg1 forTrigger:(id)arg2 withTriggerContext:(id)arg3;
- (BOOL)_showBestEligibleModalNuxForTrigger:(id)arg1 withTriggerContext:(id)arg2;
- (BOOL)_canShowNuxPresenter:(id)arg1 forTrigger:(id)arg2 eligibleNuxIDs:(id)arg3;
- (BOOL)_embeddedActionCooldownIsActiveForNuxIDs:(id)arg1;
- (BOOL)_canShowModalNuxForTriggerID:(id)arg1;
- (void)_processServerContextForNuxIDs:(id)arg1 withParams:(id)arg2;
- (void)_endedFetchingEligibleNuxes;
- (BOOL)_isApplicationPresentingModally;
- (void)_fetchNuxEligibilityAndTriggerOnSuccess:(id)arg1;
- (void)_fetchSuccessWithRows:(id)arg1 triggerOnSuccess:(id)arg2;
- (void)_unregisterNuxPresenter:(id)arg1;
- (void)_registerNuxPresenter:(id)arg1;
- (double)_embeddedNuxActionCooldownPeriod;
- (double)_modalNuxImpressionCooldownPeriod;
- (void)invalidate;
- (void)persistDataIfNeeded;
- (void)forceShowNuxWithID:(id)arg1;
- (BOOL)isServerEligibleNuxID:(id)arg1;
- (id)getBestEmbeddedNuxForTrigger:(id)arg1 withTriggerContext:(id)arg2;
- (id)getBestEmbeddedNuxForTrigger:(id)arg1;
- (BOOL)showBestEligibleNuxForTrigger:(id)arg1 withTriggerContext:(id)arg2;
- (BOOL)showBestEligibleNuxForTrigger:(id)arg1;
- (void)forceUpdateEligibility;
- (void)updateEligibilityAndShowNuxIfNeededForTrigger:(id)arg1 withTriggerContext:(id)arg2;
- (void)unregisterNuxPresenter:(id)arg1;
- (void)registerNuxPresenter:(id)arg1;
@property(nonatomic) BOOL isFetchingEligibleNuxes; // @synthesize isFetchingEligibleNuxes=_fetchingEligibleNuxes;
@property(readonly, nonatomic, getter=isNuxCurrentlyPresenting) BOOL nuxCurrentlyPresenting;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
@property(readonly, nonatomic, getter=isStale) BOOL stale;
- (void)dealloc;
- (id)initWithNavigationController:(id)arg1 configurationProfile:(id)arg2 session:(id)arg3 application:(id)arg4;
- (void)_injectNuxID:(id)arg1 withUnparsedParams:(id)arg2;
- (void)injectFqlRow:(id)arg1;
- (void)_overrideQuickPromotionsInNuxPresenterWithNuxIDs:(id)arg1 eligiblePromotionIDs:(id)arg2;
- (void)_injectNuxQuickPromotionsAndOverrideEligibility:(id)arg1;
- (void)injectQuickPromotionFromUserDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

