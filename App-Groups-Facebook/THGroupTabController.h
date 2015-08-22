//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBTabBarDelegate.h"
#import "THGroupInfoViewControllerDelegate.h"
#import "THGroupProfileViewControllerDelegate.h"
#import "THTransitioningViewControllerProtocol.h"

@class FBConsistentLookasideCacheObservationHandle, FBMemGroup, FBTabBar, FBUserSession, NSArray, NSString, THEventsListDetailViewController, THGroupChatViewController, THGroupInfoViewController, THGroupProfileViewController, THPhotosListDetailViewController, UILabel, UINavigationController;

@interface THGroupTabController : UIViewController <FBTabBarDelegate, THGroupProfileViewControllerDelegate, THGroupInfoViewControllerDelegate, THTransitioningViewControllerProtocol>
{
    FBUserSession *_session;
    id <FBIntentHandler> _intentHandler;
    NSString *_groupID;
    FBMemGroup *_group;
    FBConsistentLookasideCacheObservationHandle *_groupObservationHandle;
    FBTabBar *_tabBar;
    UINavigationController *_displayedViewController;
    THGroupProfileViewController *_profileViewController;
    THPhotosListDetailViewController *_photosViewController;
    THGroupChatViewController *_chatViewController;
    THEventsListDetailViewController *_eventsViewController;
    THGroupInfoViewController *_infoViewController;
    NSArray *_viewControllers;
    NSArray *_barItems;
    UILabel *_dateLabel;
    BOOL _isChatEnabled;
    struct CGPoint _originPogCenter;
}

@property(nonatomic) struct CGPoint originPogCenter; // @synthesize originPogCenter=_originPogCenter;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)analyticsModule;
- (unsigned int)_effectiveIndex:(unsigned int)arg1;
- (void)_setAdminActivityCount:(unsigned int)arg1;
- (void)_updateAdminActivityCount;
- (id)_createTabItem:(id)arg1 image:(id)arg2 selectedImage:(id)arg3;
- (void)_setDisplayedViewController:(id)arg1;
- (void)_loadGroup;
- (void)_groupModelUpdated:(id)arg1;
- (void)membershipChanged:(id)arg1 mutation:(unsigned int)arg2;
- (void)didChangeMembership:(id)arg1 mutation:(unsigned int)arg2;
- (void)tabBar:(id)arg1 didSelectItem:(id)arg2;
- (BOOL)tabBar:(id)arg1 shouldSelectItem:(id)arg2;
- (void)fb_willBeginModalDimissTransition;
- (void)fb_didCancelModalDimissGesture;
- (void)fb_willBeginModalDimissGesture;
- (BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(int)arg1 atTouchLocation:(struct CGPoint)arg2;
- (BOOL)fb_shouldHideStatusBarOnPresentation;
@property(nonatomic) int modalViewTransitionStyle;
- (id)visibleViewController;
- (void)dealloc;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 intentHandler:(id)arg2 groupID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

