//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MNAbstractComposerTrayExtension.h"

#import "FBAttachmentPickerDelegate.h"
#import "FBClassProvidable.h"

@class FBUserSession, MNComposerExtensionTrayPresentationStrategy, MNComposerIconColourExperimentContext, MNExternalLinkPickerPresenter, NSString;

@interface MNComposerExternalLinkExtension : MNAbstractComposerTrayExtension <FBClassProvidable, FBAttachmentPickerDelegate>
{
    MNComposerExtensionTrayPresentationStrategy *_presentationStrategy;
    MNExternalLinkPickerPresenter *_externaLinkPickerPresenter;
    FBUserSession *_session;
    MNComposerIconColourExperimentContext *_iconColorExperimentContext;
}

- (void).cxx_destruct;
- (id)_composerIcon;
- (void)_initComposerIconExperimentContextIfNecessary;
- (void)attachmentPicker:(id)arg1 failedToLoadLinkShareMetadataWithError:(id)arg2;
- (void)attachmentPicker:(id)arg1 didLoadLinkShareMetadata:(id)arg2;
- (void)attachmentPicker:(id)arg1 didSelectLinkShare:(id)arg2 withSessionID:(id)arg3 willLoadLinkMetadata:(BOOL)arg4;
- (void)attachmentPickerDidCancel:(id)arg1;
- (id)presentationStrategy;
- (BOOL)shouldPresent:(BOOL)arg1 source:(int)arg2;
- (void)didSelect:(BOOL)arg1 source:(int)arg2;
- (id)extensionIdentifier;
- (int)category;
- (id)tabBarItem;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

