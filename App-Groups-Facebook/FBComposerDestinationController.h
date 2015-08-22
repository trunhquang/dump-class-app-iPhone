//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAvatarPickerControllerDelegate.h"
#import "FBComposerCompositionStateChangedListener.h"
#import "FBComposerDestinationChooserDelegate.h"
#import "FBComposerDestinationOptionsProviderDelegate.h"
#import "FBComposerPickerController.h"

@class FBComposerCompositionState, FBComposerDestinationChooserTableViewController, FBComposerDestinationOption, FBComposerDestinationOptionsProvider, FBUserSession, NSArray, NSString;

@interface FBComposerDestinationController : NSObject <FBComposerDestinationChooserDelegate, FBComposerDestinationOptionsProviderDelegate, FBComposerPickerController, FBAvatarPickerControllerDelegate, FBComposerCompositionStateChangedListener>
{
    FBComposerDestinationChooserTableViewController *_destinationChooserTableViewController;
    FBComposerDestinationOption *_currentDestination;
    FBComposerDestinationOptionsProvider *_destinationOptionsProvider;
    CDUnknownBlockType _secondaryChooserFactory;
    FBUserSession *_session;
    NSArray *_destinationOptions;
    FBComposerCompositionState *_compositionState;
    id <FBServiceTransactionMutating> _token;
    BOOL _userHasInteractedWithDestinationChooser;
    id <FBComposerDestinationChooserControllerDelegate> _delegate;
}

@property(readonly, nonatomic) BOOL userHasInteractedWithDestinationChooser; // @synthesize userHasInteractedWithDestinationChooser=_userHasInteractedWithDestinationChooser;
@property(nonatomic) __weak id <FBComposerDestinationChooserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_informDelegateComposerPickerControllerDidFinishAndCanceled:(BOOL)arg1;
- (void)_setDestinationOption:(id)arg1;
- (void)optionsHaveChanged:(id)arg1;
- (void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;
- (void)destinationChooser:(id)arg1 hasChosenDestinationOption:(id)arg2;
- (void)destinationChooserDidTapCancelButton:(id)arg1;
- (void)dismissPopoverController;
- (unsigned int)popoverAllowedArrowDirection;
- (struct CGSize)popoverContentSizeForOrientation:(int)arg1;
- (unsigned int)popoverStyle;
- (id)presentableViewController;
- (BOOL)_compostitionAttachmentsAreAllowedForAuthorType:(unsigned int)arg1 targetType:(unsigned int)arg2 destinationType:(int)arg3;
- (id)_filterDestinationOptions:(id)arg1;
- (void)destinationChooser:(id)arg1 willAppear:(BOOL)arg2;
- (id)getDestinationOption;
- (id)_backButtonForSecondaryNavigation;
- (void)_configureViewControllers;
- (void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2;
- (id)initWithSession:(id)arg1 secondaryDestinationChooserFactory:(CDUnknownBlockType)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

