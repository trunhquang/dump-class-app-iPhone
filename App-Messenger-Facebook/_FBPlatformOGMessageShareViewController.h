//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBPlatformNewThreadViewController.h"

#import "FBPlatformShareDataLoadListener.h"

@class FBComposerHighlightedText, NSString;

@interface _FBPlatformOGMessageShareViewController : FBPlatformNewThreadViewController <FBPlatformShareDataLoadListener>
{
    unsigned int _loadedImageAttachmentCount;
    FBComposerHighlightedText *_loadedRobotext;
}

- (void).cxx_destruct;
- (void)_updateSharedObject;
- (void)_updateRobotext;
- (void)platformLoadedVideoAttachment:(id)arg1;
- (void)platformLoadedTaggedUsers:(id)arg1;
- (void)platformLoadedSharedLink:(id)arg1;
- (void)platformLoadedRobotext:(id)arg1;
- (void)platformLoadedRef:(id)arg1;
- (void)platformLoadedPlace:(id)arg1 placeIsUserSelected:(BOOL)arg2;
- (void)platformLoadedOGMediaAttachmentsForUpload:(id)arg1 ogMediaAttachmentsForDisplay:(id)arg2;
- (void)platformLoadedImageAttachments:(id)arg1;
- (void)platformLoadedAppAttribution:(id)arg1;
- (void)platformLoadedActionType:(id)arg1 actionParameters:(id)arg2 actionPropertyToCreatedObjectType:(id)arg3;
- (void)platformActionProcessorDidComplete:(id)arg1;
- (void)platformActionProcessor:(id)arg1 didCompleteOperation:(id)arg2;
- (unsigned int)imageAttachmentCount;
- (id)linkShareControllerMethodContext;
- (id)validateAction;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithAction:(id)arg1 navigationCoordinator:(id)arg2 composeViewControllerProvider:(id)arg3 peoplePickerViewControllerProvider:(id)arg4 keyboardResettingTracker:(id)arg5 session:(id)arg6 contactSuggestions:(id)arg7 attachmentPreparer:(id)arg8 userStore:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

