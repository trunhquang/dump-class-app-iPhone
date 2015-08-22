//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNThreeSectionContainerViewController.h"

#import "FBKeyCommandSource.h"
#import "FBMInAppNotificationBadgeCounterObserving.h"
#import "FBSessionClassProvidable.h"
#import "FBToastPresenterProviding.h"
#import "MNInboxBottomBarViewControllerDelegate.h"
#import "MNInboxTopBarViewControllerDelegate.h"
#import "MNRedirectionButtonDisplayCoordinatorListener.h"
#import "MNThreadListViewControllerDelegate.h"
#import "MNTincanPickContactControllerDelegate.h"

@class FBFacebookRedirectionListenerAnnouncer, FBKeyCommandHandler, FBMThreadPrefetchPolicyManager, FBUserSession, FBWebRTCPhoneButtonStyleExperimentContext, FBWebRTCPickAndCallContactController, InAppNotificationBadgeCounter, MNGroupCreationExperimentGating, MNInboxAppearanceEventListenerAnnouncer, MNInboxBottomBarViewController, MNInboxNavigationBarConnectivityViewController, MNInboxTopBannerCoordinator, MNInboxTopBarViewController, MNNavigationBarController, MNRedirectionButtonDisplayCoordinator, MNThreadListViewController, MNTincanPickContactController, MNUpgradeNotificationToastController, NSArray, NSString, UIBarButtonItem;

@interface MNInboxViewController : MNThreeSectionContainerViewController <MNThreadListViewControllerDelegate, FBMInAppNotificationBadgeCounterObserving, MNInboxTopBarViewControllerDelegate, MNInboxBottomBarViewControllerDelegate, FBToastPresenterProviding, FBKeyCommandSource, MNRedirectionButtonDisplayCoordinatorListener, MNTincanPickContactControllerDelegate, FBSessionClassProvidable>
{
    InAppNotificationBadgeCounter *_badgeCounter;
    id <FBProvider> _inboxTopBarViewControllerProvider;
    id <FBProvider> _inboxBottomBarViewControllerProvider;
    id <FBProvider> _threadListViewControllerProvider;
    MNInboxTopBannerCoordinator *_inboxTopBannerCoordinator;
    FBFacebookRedirectionListenerAnnouncer *_facebookRedirectionListenerAnnouncer;
    MNInboxAppearanceEventListenerAnnouncer *_inboxAppearenceEventAnnouncer;
    unsigned int _appearanceState;
    FBUserSession *_session;
    MNUpgradeNotificationToastController *_upgradeNotificationToastController;
    MNRedirectionButtonDisplayCoordinator *_redirectionButtonDisplayCoordinator;
    MNNavigationBarController *_navigationBarController;
    MNInboxNavigationBarConnectivityViewController *_navBarConnectivityController;
    NSArray *_fbKeyCommands;
    FBKeyCommandHandler *_keyCommandHandler;
    MNGroupCreationExperimentGating *_groupCreationExperimentGating;
    id <MNInboxViewControllerDelegate> _delegate;
    MNInboxTopBarViewController *_inboxTopBarViewController;
    MNInboxBottomBarViewController *_inboxBottomBarViewController;
    MNThreadListViewController *_threadListViewController;
    FBMThreadPrefetchPolicyManager *_prefetchPolicyManager;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_composeBarButtonItem;
    UIBarButtonItem *_voipAudioCallBarButtonItem;
    UIBarButtonItem *_tincanConversationBarButtonItem;
    unsigned int _appearenceState;
    FBWebRTCPickAndCallContactController *_voipCallController;
    FBWebRTCPhoneButtonStyleExperimentContext *_rtcButtonStyleExperimentContext;
    MNTincanPickContactController *_tincanConversationController;
}

@property(retain, nonatomic) MNTincanPickContactController *tincanConversationController; // @synthesize tincanConversationController=_tincanConversationController;
@property(retain, nonatomic) FBWebRTCPhoneButtonStyleExperimentContext *rtcButtonStyleExperimentContext; // @synthesize rtcButtonStyleExperimentContext=_rtcButtonStyleExperimentContext;
@property(retain, nonatomic) FBWebRTCPickAndCallContactController *voipCallController; // @synthesize voipCallController=_voipCallController;
@property(nonatomic) unsigned int appearenceState; // @synthesize appearenceState=_appearenceState;
@property(retain, nonatomic) UIBarButtonItem *tincanConversationBarButtonItem; // @synthesize tincanConversationBarButtonItem=_tincanConversationBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *voipAudioCallBarButtonItem; // @synthesize voipAudioCallBarButtonItem=_voipAudioCallBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *composeBarButtonItem; // @synthesize composeBarButtonItem=_composeBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) FBMThreadPrefetchPolicyManager *prefetchPolicyManager; // @synthesize prefetchPolicyManager=_prefetchPolicyManager;
@property(retain, nonatomic) MNThreadListViewController *threadListViewController; // @synthesize threadListViewController=_threadListViewController;
@property(retain, nonatomic) MNInboxBottomBarViewController *inboxBottomBarViewController; // @synthesize inboxBottomBarViewController=_inboxBottomBarViewController;
@property(retain, nonatomic) MNInboxTopBarViewController *inboxTopBarViewController; // @synthesize inboxTopBarViewController=_inboxTopBarViewController;
@property(nonatomic) __weak id <MNInboxViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setAppearanceState:(unsigned int)arg1;
- (void)tincanPickContactControllerDidFinish:(id)arg1;
- (void)tincanPickContactController:(id)arg1 didNegotiateConversationWithContact:(id)arg2;
- (void)removeInboxAppearanceEventListener:(id)arg1;
- (void)addInboxAppearanceEventListener:(id)arg1;
- (id)globalToastPresenter;
- (void)sourceApplicationDidChange;
- (void)inboxTopBarViewControllerDidChangeHeight:(id)arg1;
- (void)inboxTopBarViewControllerDidSelectPendingRequestsView:(id)arg1;
- (void)inboxBottomBarViewHeightDidChange:(id)arg1;
- (id)analyticsSourceExtras;
- (id)analyticsModule;
- (void)_startTincanConversation;
- (void)_openComposeFlow;
- (void)_didBecomeActive:(id)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)threadListViewControllerDidDisappear:(id)arg1;
- (void)threadListViewControllerWillDisappear:(id)arg1;
- (void)threadListViewControllerDidAppear:(id)arg1;
- (void)threadListViewControllerWillAppear:(id)arg1;
- (void)threadListViewControllerDidTapShowMore:(id)arg1;
- (void)threadListViewControllerDidDismiss:(id)arg1;
- (void)threadListViewControllerDidFailToLoadDataModel:(id)arg1;
- (void)threadListViewControllerDidLoadDataModel:(id)arg1;
- (void)threadListViewControllerDidDisplayList:(id)arg1;
- (void)threadListViewControllerDidPressNewMessageButton:(id)arg1;
- (void)threadListViewController:(id)arg1 didSelectFailedStatusIndicatorForThreadWithLocalThreadKey:(id)arg2;
- (void)threadListViewController:(id)arg1 didSelectSearchThreadWithLocalThreadKey:(id)arg2;
- (void)threadListViewController:(id)arg1 didSelectThreadWithLocalThreadKey:(id)arg2;
- (id)_backButtonTitle;
- (void)_updateBackButtonTitle;
- (void)badgeCounter:(id)arg1 didChangeToNewCount:(unsigned int)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (BOOL)shouldAutorotate;
- (void)_setUpNavBarConnectivityControllerIfNecessary;
- (void)_setUpNavBarItems;
- (void)openActionPanelForThreadWithLocalThreadKey:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)fb_keyCommands;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)performViewLoad;
- (void)dealloc;
- (id)initWithBadgeCounter:(id)arg1 inboxTopBarViewControllerProvider:(id)arg2 inboxBottomBarViewControllerProvider:(id)arg3 threadListViewControllerProvider:(id)arg4 inboxTopBannerCoordinator:(id)arg5 prefetchPolicyManager:(id)arg6 voipCallController:(id)arg7 session:(id)arg8 inboxAppearenceEventAnnouncer:(id)arg9 keyCommandHandler:(id)arg10 upgradeNotificationToastController:(id)arg11 redirectionButtonDisplayCoordinator:(id)arg12 tincanConversationController:(id)arg13 groupCreationExperimentGating:(id)arg14;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
