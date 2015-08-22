//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerToolTipCoordinatorDelegate.h"
#import "FBRidgeOnePageNUXViewControllerDelegate.h"

@class FBActivitySharingAudioActivityIndicatorButton, FBActivitySuggestionManager, FBAudioActivityReloadButton, FBComposerToolTipCoordinator, FBMemTaggableActivity, FBRidgeOnePageNUXViewController, FBUserSession, NSArray, NSString;

@interface FBActivitySharingAudioActivitySuggestionStateCoordinator : NSObject <FBRidgeOnePageNUXViewControllerDelegate, FBComposerToolTipCoordinatorDelegate>
{
    FBActivitySuggestionManager *_activitySuggestionManager;
    NSArray *_suggestedActivities;
    FBRidgeOnePageNUXViewController *_ridgeNUXViewController;
    NSString *_compositionID;
    FBComposerToolTipCoordinator *_toolTipCoordinator;
    FBUserSession *_userSession;
    BOOL _firstTimeRidgeEnabled;
    BOOL _firstTimeRidgeDisabled;
    FBActivitySharingAudioActivityIndicatorButton *_suggestionsActivityIndicator;
    FBMemTaggableActivity *_selectedVerb;
    FBAudioActivityReloadButton *_reloadSuggestionButton;
    id <FBActivitySharingAudioActivitySuggestionStateCoordinatorDelegate> _delegate;
}

@property(nonatomic) __weak id <FBActivitySharingAudioActivitySuggestionStateCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FBAudioActivityReloadButton *reloadSuggestionButton; // @synthesize reloadSuggestionButton=_reloadSuggestionButton;
@property(retain, nonatomic) FBMemTaggableActivity *selectedVerb; // @synthesize selectedVerb=_selectedVerb;
@property(retain, nonatomic) FBActivitySharingAudioActivityIndicatorButton *suggestionsActivityIndicator; // @synthesize suggestionsActivityIndicator=_suggestionsActivityIndicator;
- (void).cxx_destruct;
- (id)ridgeSessionExtras;
- (id)extrasWithSessionId:(id)arg1;
- (BOOL)composerToolTipCoordinator:(id)arg1 canDisplayTooltip:(id)arg2;
- (void)nuxViewControllerDidSelectLearnMore:(id)arg1;
- (void)nuxViewControllerDidSelectNotNow:(id)arg1;
- (void)nuxViewControllerDidSelectOptIn:(id)arg1;
- (void)checkMicrophonePermissions;
- (void)_showRidgeButtonTooltip;
- (void)_showRidgeDisabledTooltip;
- (void)_showRidgeEnabledTooltip;
- (void)_showRidgeTooltipWithIdentifier:(id)arg1 nuxBody:(id)arg2;
- (BOOL)isAudioActivityIndicatorEnabled;
- (void)_showExternalPlaybackAlert;
- (void)_showMicrophoneDisabledAlert;
- (void)_hideRidgeNUX;
- (void)_showRidgeNUX;
- (void)startFetchingSuggestions;
- (void)suggestionManagerDidFinishUpdating:(id)arg1;
- (void)suggestionManagerDidChangeSuggestions:(id)arg1;
- (void)didTapReloadButton:(id)arg1;
- (void)showEligibleTooltips;
- (void)didTapSuggestionsToggle:(id)arg1;
- (void)reset;
- (void)configureSuggestionManager;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 compositionID:(id)arg2 suggestionManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

