//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ClusterViewController.h"

#import "ExpansionSupport.h"
#import "SystemAcknowledgementDelegate.h"
#import "TopToolBarDataSource.h"
#import "TopToolBarDelegate.h"

@class CollapsableScrollviewController, NSArray, NSString, TopToolBar, UIButton, UILabel, UIScrollView, UIView;

@interface ClusteredItemsViewController : ClusterViewController <SystemAcknowledgementDelegate, TopToolBarDataSource, TopToolBarDelegate, ExpansionSupport>
{
    UIButton *backButton_;
    UIButton *editButton_;
    UILabel *titleView_;
    UIButton *moreButton_;
    UIButton *settingsButton_;
    UIButton *sweepButton_;
    struct CGPoint baseContentOffset_;
    BOOL isFinalizingTransition_;
    BOOL isPerformingTransition_;
    BOOL isExpandedMode_;
    CollapsableScrollviewController *collapseController_;
    id <JBTClusterItemList> clusterItemList_;
    id <JBTClusteredItems> clusteredItems_;
    id <JBTId> clusteredItemsId_;
    TopToolBar *topToolBar_;
    float lastGestureTranslationOffset;
    BOOL deferredCollapse_;
    BOOL needsDismissAfterMoreActionsDismiss_;
    BOOL showingMoreActionsView_;
    UIView *backgroundView_;
    UIView *innerBackgroundView_;
    BOOL sweepButtonHidden_;
}

+ (id)clusteredItemsViewControllerWithClusteredItems:(id)arg1;
@property(nonatomic, getter=isSweepButtonHidden) BOOL sweepButtonHidden; // @synthesize sweepButtonHidden=sweepButtonHidden_;
- (void).cxx_destruct;
- (float)backgroundHorizontalInsetForView:(id)arg1;
- (void)explanatoryMessageViewDidPerformAction:(id)arg1;
- (void)systemAcknowledgementDidSelectActionType:(int)arg1 forResult:(id)arg2;
- (void)showTip:(id)arg1;
- (void)topToolBarDidSelectTitleButton:(id)arg1;
- (void)topToolBar:(id)arg1 didSelectRightButton:(id)arg2;
- (void)moreActionsViewControllerDidDismiss;
- (void)showMoreActionsViewControllerWithTriggeringView:(id)arg1;
- (void)topToolBarDidSelectLeftButton:(id)arg1;
- (id)topToolBar:(id)arg1 updateTitle:(id)arg2;
- (id)topToolBarBackgroundInkColor:(id)arg1;
- (id)topToolBarBackgroundColor:(id)arg1;
- (id)rightButtonsForTopToolBar:(id)arg1;
- (id)middleButtonsForTopToolBar:(id)arg1;
- (void)didPerformAction:(unsigned int)arg1 isMultiselect:(BOOL)arg2;
- (void)viewDidLayoutSubviews;
- (void)trashAll;
- (BOOL)shouldConfirmSwitchToIndividualVisibility;
- (id)explanatoryMessageViewToDisplayWithFrame:(struct CGRect)arg1;
- (void)didFinishSwitchingClusterVisibilityToIndividual;
- (void)configureActionHandler;
- (void)updateTitleForCluster:(id)arg1;
- (void)settingsButtonTapped:(id)arg1;
- (void)hideAll;
- (void)dismissView;
- (void)backButtonSelected:(id)arg1;
- (void)setUpdateScreenshotCallback:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *viewToAnimate;
- (void)didPerformCollapse;
- (void)willPerformCollapse;
- (void)didPerformExpand;
- (void)willPerformExpand;
- (void)collapseCurrentContext;
- (BOOL)setupExpansionContextForExpandedVC:(id)arg1;
- (void)expandCurrentContext;
@property(readonly, nonatomic) UIScrollView *activeScrollView;
@property(readonly, nonatomic) UIButton *backButton;
@property(readonly, nonatomic) NSArray *backgroundViews;
- (struct CGRect)backButtonFrame;
@property(readonly, nonatomic) struct CGPoint backButtonOffset;
@property(readonly, nonatomic) struct UIEdgeInsets innerFrameInsets;
@property(readonly, nonatomic) struct UIEdgeInsets backgroundViewInsets;
@property(readonly, nonatomic) BOOL supportExpansion;
@property(readonly, nonatomic) id <JBTId> itemId;
- (id)innerBackgroundColor;
- (id)backgroundColor;
- (void)onEventWithJBTEvent:(id)arg1;
- (void)clusterSettingsViewControllerDidSwitchToIndividualVisibility:(id)arg1;
- (void)clusterSettingsViewControllerDidDismiss:(id)arg1;
- (void)clusterSettingsViewController:(id)arg1 didDeleteCluster:(id)arg2;
- (int)preferredStatusBarStyle;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (unsigned int)cellPositionForIndexPath:(id)arg1;
- (void)willShow;
@property(readonly, nonatomic) TopToolBar *clusterToolBar;
- (id)topToolbar;
- (void)performSweepAction:(id)arg1;
- (void)handleEmptyList;
- (id)rightToolbarButtons;
- (id)initWithClusterItemList:(id)arg1 clusterConfig:(id)arg2 clusteredItemsId:(id)arg3 cellContext:(unsigned int)arg4 navigationType:(unsigned int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

