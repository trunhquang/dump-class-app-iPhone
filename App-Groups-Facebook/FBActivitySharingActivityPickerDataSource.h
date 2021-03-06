//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBActivitySharingAudioActivitySuggestionStateCoordinatorDelegate.h"
#import "FBActivitySharingPickerDataSourceProtocol.h"
#import "FBActivitySharingSimpleActivityTaggingControllerDelegate.h"
#import "FBComposerActivityTagIconPickerViewControllerDelegate.h"
#import "FBPlacePickerSearchBarDelegate.h"
#import "FBTableViewSectionDataSource.h"
#import "UITableViewDelegate.h"

@class FBActivitySharingActivityPickerSearchField, FBActivitySharingAudioActivityIndicatorButton, FBActivitySharingAudioActivitySuggestionStateCoordinator, FBActivitySharingBootstrapper, FBActivitySharingComposition, FBActivitySharingGenericSearchField, FBActivitySharingSimpleActivityTaggingController, FBActivitySharingTableViewCellFactory, FBActivitySuggestionManager, FBAudioActivityReloadButton, FBComposerActivityTagPickerModelController, FBMemTaggableActivity, FBTaggableActivityComposition, FBUserSession, NSString, UINavigationController, UITableViewCell, UIViewController;

@interface FBActivitySharingActivityPickerDataSource : NSObject <FBActivitySharingSimpleActivityTaggingControllerDelegate, FBComposerActivityTagIconPickerViewControllerDelegate, FBActivitySharingAudioActivitySuggestionStateCoordinatorDelegate, FBPlacePickerSearchBarDelegate, FBTableViewSectionDataSource, UITableViewDelegate, FBActivitySharingPickerDataSourceProtocol>
{
    FBUserSession *_session;
    FBActivitySharingTableViewCellFactory *_cellFactory;
    FBActivitySharingSimpleActivityTaggingController *_activityPicker;
    UINavigationController *_navigationController;
    UITableViewCell *_inactiveSearchField;
    BOOL _verbSearchFieldActivated;
    FBTaggableActivityComposition *_selectedActivityComposition;
    FBMemTaggableActivity *_selectedActivity;
    FBActivitySharingAudioActivityIndicatorButton *_audioActivityIndicatorButton;
    FBAudioActivityReloadButton *_audioActivityReloadButton;
    FBActivitySharingBootstrapper *_bootstrapper;
    BOOL _initialFilledIn;
    BOOL _isInChainMode;
    id <FBTableViewMutating> _tableViewMutator;
    int _state;
    id <FBActivitySharingPickerDataSourceDelegate> _delegate;
    UIViewController *_containingViewController;
    FBActivitySharingComposition *_composition;
    int _initialState;
    FBActivitySuggestionManager *_activitySuggestionManager;
    FBComposerActivityTagPickerModelController *_prefetchedActivityController;
    FBActivitySharingAudioActivitySuggestionStateCoordinator *_suggestionStateCoordinator;
    FBActivitySharingActivityPickerSearchField *_objectSearchField;
    FBActivitySharingGenericSearchField *_verbSearchField;
}

@property(retain, nonatomic) FBActivitySharingGenericSearchField *verbSearchField; // @synthesize verbSearchField=_verbSearchField;
@property(retain, nonatomic) FBActivitySharingActivityPickerSearchField *objectSearchField; // @synthesize objectSearchField=_objectSearchField;
@property(retain, nonatomic) FBActivitySharingAudioActivitySuggestionStateCoordinator *suggestionStateCoordinator; // @synthesize suggestionStateCoordinator=_suggestionStateCoordinator;
@property(retain, nonatomic) FBComposerActivityTagPickerModelController *prefetchedActivityController; // @synthesize prefetchedActivityController=_prefetchedActivityController;
@property(retain, nonatomic) FBActivitySuggestionManager *activitySuggestionManager; // @synthesize activitySuggestionManager=_activitySuggestionManager;
@property(nonatomic) int initialState; // @synthesize initialState=_initialState;
@property(nonatomic) BOOL isInChainMode; // @synthesize isInChainMode=_isInChainMode;
@property(nonatomic) BOOL initialFilledIn; // @synthesize initialFilledIn=_initialFilledIn;
@property(nonatomic) FBActivitySharingComposition *composition; // @synthesize composition=_composition;
@property(retain, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property(nonatomic) __weak id <FBActivitySharingPickerDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)audioActivitySuggestionStateCoordinatorDidBeginReload:(id)arg1;
- (void)audioActivitySuggestionStateCoordinatorDidDisableRidge:(id)arg1;
- (void)audioActivitySuggestionStateCoordinator:(id)arg1 didDismissRidgeNUX:(id)arg2;
- (void)audioActivitySuggestionStateCoordinator:(id)arg1 didTriggerRidgeNUX:(id)arg2;
- (void)audioActivitySuggestionStateCoordinator:(id)arg1 didChangeSuggestions:(id)arg2;
- (id)_leftBarButtonItemForTopViewController;
- (void)_activateVerbSearchField;
- (void)_updateAudioSuggestionReloadCell;
- (id)inactiveSearchField;
- (BOOL)_shouldShowReloadCell;
- (BOOL)_shouldShowAudioActivityIndicator;
- (void)_backButtonTapped:(id)arg1;
- (void)composerActivityTagIconPicker:(id)arg1 didPickTaggableActivity:(id)arg2;
- (void)activitySharingTableViewFilledInCellDidTapIcon:(id)arg1;
- (void)activitySharingTableViewFilledInCellDidTapClearButton:(id)arg1;
- (void)activityTaggingControllerDidNavigate:(id)arg1;
- (void)activityTaggingController:(id)arg1 didPickActivity:(id)arg2;
- (void)activityTaggingController:(id)arg1 didPickActivityAndObject:(id)arg2 willPickIcon:(BOOL)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)pickerSection;
- (id)reuseIdentifierForSearchFieldCell;
- (id)searchFieldCell;
- (BOOL)didBecomeFlowDestination;
- (BOOL)canBeFlowDestination;
- (BOOL)isFilledIn;
- (id)placeholder;
- (id)iconImageView;
- (id)selection;
- (id)prefix;
- (void)cleanup;
- (void)deactivate;
- (void)activate;
- (void)dealloc;
- (id)initWithSession:(id)arg1 cellFactory:(id)arg2 composition:(id)arg3 bootstrapper:(id)arg4;

// Remaining properties
@property(nonatomic, getter=isActive) BOOL active;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

