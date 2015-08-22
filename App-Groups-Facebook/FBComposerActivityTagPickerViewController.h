//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTableViewController.h"

#import "FBComposerActivityTagIconPickerViewControllerDelegate.h"
#import "FBComposerActivityTagObjectPickerViewControllerDelegate.h"
#import "FBComposerActivityTagObjectPrefetchControllerDelegate.h"
#import "FBComposerActivityTagPickerModelControllerDelegate.h"
#import "FBComposerCompositionStateChangedListener.h"
#import "FBComposerPickerCurrentLabelDelegate.h"
#import "FBComposerToolTipCoordinatorDelegate.h"
#import "FBPullToRefreshViewDelegate.h"
#import "FBRidgeOnePageNUXViewControllerDelegate.h"

@class FBActivitySuggestionManager, FBAnalyticsPrefetcherLogger, FBAudioActivityIndicatorView, FBComposerActivityTagObjectPrefetchController, FBComposerActivityTagPickerModelController, FBComposerCompositionState, FBComposerPickerCurrentLabel, FBComposerToolTipCoordinator, FBMemTaggableActivity, FBNearbyPlace, FBPullToRefreshView, FBRidgeOnePageNUXViewController, FBRidgePullToRefreshContentView, FBUserSession, NSArray, NSMutableSet, NSString, UIButton, UIView;

@interface FBComposerActivityTagPickerViewController : FBTableViewController <FBComposerActivityTagObjectPickerViewControllerDelegate, FBComposerActivityTagIconPickerViewControllerDelegate, FBComposerPickerCurrentLabelDelegate, FBComposerActivityTagPickerModelControllerDelegate, FBRidgeOnePageNUXViewControllerDelegate, FBPullToRefreshViewDelegate, FBComposerToolTipCoordinatorDelegate, FBComposerActivityTagObjectPrefetchControllerDelegate, FBComposerCompositionStateChangedListener>
{
    BOOL _appeared;
    BOOL _loggedTTI;
    FBComposerCompositionState *_compositionState;
    UIButton *_suggestionsToggleButton;
    FBRidgeOnePageNUXViewController *_ridgeNUXViewController;
    FBRidgePullToRefreshContentView *_pullToRefreshContentView;
    FBPullToRefreshView *_pullToRefreshView;
    UIView *_topBorder;
    FBComposerToolTipCoordinator *_toolTipCoordinator;
    BOOL _firstTimeRidgeEnabled;
    BOOL _firstTimeRidgeDisabled;
    NSMutableSet *_loggedSuggestions;
    FBUserSession *_userSession;
    FBComposerActivityTagObjectPrefetchController *_objectPrefetchController;
    FBAnalyticsPrefetcherLogger *_prefetchLogger;
    unsigned int _composerPresentationMode;
    NSString *_composerSourceType;
    NSString *_actorFBID;
    id <FBComposerActivityTagPickerViewControllerDelegate> _delegate;
    FBComposerActivityTagPickerModelController *_modelController;
    FBNearbyPlace *_selectedPlace;
    FBMemTaggableActivity *_selectedTaggableActivity;
    FBComposerPickerCurrentLabel *_taggedActivityIndicator;
    FBActivitySuggestionManager *_activitySuggestionManager;
    FBAudioActivityIndicatorView *_suggestionsActivityIndicator;
    NSArray *_suggestedActivities;
}

@property(copy, nonatomic) NSArray *suggestedActivities; // @synthesize suggestedActivities=_suggestedActivities;
@property(retain, nonatomic) FBAudioActivityIndicatorView *suggestionsActivityIndicator; // @synthesize suggestionsActivityIndicator=_suggestionsActivityIndicator;
@property(retain, nonatomic) FBActivitySuggestionManager *activitySuggestionManager; // @synthesize activitySuggestionManager=_activitySuggestionManager;
@property(retain, nonatomic) FBComposerPickerCurrentLabel *taggedActivityIndicator; // @synthesize taggedActivityIndicator=_taggedActivityIndicator;
@property(retain, nonatomic) FBMemTaggableActivity *selectedTaggableActivity; // @synthesize selectedTaggableActivity=_selectedTaggableActivity;
@property(retain, nonatomic) FBNearbyPlace *selectedPlace; // @synthesize selectedPlace=_selectedPlace;
@property(retain, nonatomic) FBComposerActivityTagPickerModelController *modelController; // @synthesize modelController=_modelController;
@property(nonatomic) __weak id <FBComposerActivityTagPickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)prefetchControllerLoadingDidFail:(id)arg1 forModelController:(id)arg2 withError:(id)arg3;
- (void)prefetchControllerLoadingDidComplete:(id)arg1 forModelController:(id)arg2;
- (void)prefetchControllerLoadingDidBegin:(id)arg1 forModelController:(id)arg2;
- (void)suggestionManagerDidFinishUpdating:(id)arg1;
- (void)suggestionManagerDidChangeSuggestions:(id)arg1;
- (id)analyticsModule;
- (void)composerActivityTagIconPicker:(id)arg1 didPickTaggableActivity:(id)arg2;
- (void)_showIconPickerWithActivityComposition:(id)arg1 icons:(id)arg2;
- (void)composerActivityTagObjectPicker:(id)arg1 didPickTaggableActivity:(id)arg2;
- (void)composerPickerCurrentLabelDidTapImageView;
- (void)composerPickerCurrentLabelDidPreserveCurrentSelection;
- (void)composerPickerCurrentLabelDidRemoveCurrentSelection;
- (id)extrasWithSessionId:(id)arg1;
- (id)ridgeSessionExtras;
- (void)logWithExtrasForSuggestedActivityEvent:(id)arg1 suggestedActivity:(id)arg2 index:(id)arg3;
- (void)showObjectPickerForTaggableActivity:(id)arg1 withSkipButton:(BOOL)arg2;
- (void)didTapSuggestedActivity:(id)arg1;
- (void)didTapTaggableActivity:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)newCellWithIdentifier:(id)arg1;
- (id)cellIdentifierAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (id)taggableActivityForIndexPath:(id)arg1;
- (id)suggestedTaggableActivityForIndexPath:(id)arg1;
- (void)didTapDone:(id)arg1;
- (void)didTapCancel:(id)arg1;
- (void)composerActivityTagPickerModelControllerDidFilterActivitiesLocally:(id)arg1;
- (void)composerActivityTagPickerModelController:(id)arg1 didFailToLoadActivitiesWithError:(id)arg2;
- (void)composerActivityTagPickerModelControllerDidChangeActivities:(id)arg1 loadedFromCache:(BOOL)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)pullToRefreshViewDidTriggerRefresh:(id)arg1;
- (void)removeCurrentTaggedActivityIndicator;
- (void)addCurrentTaggedActivityIndicator;
- (void)didTapSuggestionsToggle:(id)arg1;
- (void)startFetchingSuggestions;
- (BOOL)composerToolTipCoordinator:(id)arg1 canDisplayTooltip:(id)arg2;
- (void)setupAccessibilityForAudioMatchButton;
- (void)showActivityIndicator;
- (void)showPullToRefreshView;
- (void)configureSuggestionManager;
- (void)checkMicrophonePermissions;
- (void)nuxViewControllerDidSelectLearnMore:(id)arg1;
- (void)nuxViewControllerDidSelectNotNow:(id)arg1;
- (void)nuxViewControllerDidSelectOptIn:(id)arg1;
- (void)_showExternalPlaybackAlert;
- (void)_showMicrophoneDisabledAlert;
- (void)_showRidgeDisabledTooltip;
- (void)_showRidgeEnabledTooltip;
- (void)_showRidgeTooltipWithIdentifier:(id)arg1 nuxBody:(id)arg2;
- (void)_hideRidgeNUX;
- (void)_showRidgeNUX;
- (void)viewDidAppear:(BOOL)arg1;
- (void)sizePullToRefreshView;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_prefetchObjectsForNumberOfActivities:(unsigned int)arg1;
- (void)_prefetchObjectsIfNecessary;
- (void)_logDidFailToLoadActivities;
- (void)_logDidLoadActivitiesFromCache:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)fb_showNavigationJewels;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 composerSourceType:(id)arg2 suggestionManager:(id)arg3 actorFBID:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

