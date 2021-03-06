//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNComposerExtension.h"
#import "MNStickerStorePresenterDelegate.h"
#import "MNStickerTrayViewControllerDelegate.h"

@class FBAnalytics, FBMStickerManager, FBUserSession, MNComposerIconColourExperimentContext, MNStickerStorePresenter, MNStickerTrayViewController, NSString;

@interface MNComposerStickerExtension : NSObject <MNStickerTrayViewControllerDelegate, MNStickerStorePresenterDelegate, MNComposerExtension, FBClassProvidable>
{
    id <FBProvider> _stickerTrayViewControllerProvider;
    FBMStickerManager *_stickerManager;
    MNStickerTrayViewController *_stickerTrayViewController;
    MNStickerStorePresenter *_stickerStorePresenter;
    FBAnalytics *_analytics;
    id <MNComposerExtensionPresentationStrategy> _presentationStrategy;
    FBUserSession *_session;
    MNComposerIconColourExperimentContext *_iconColorExperimentContext;
    id <MNComposerExtensionDelegate> _delegate;
    id <MNComposerExtensionSendDelegate> _sendDelegate;
    id <MNComposerExtensionEditDelegate> _editDelegate;
    NSString *_placeholderText;
}

@property(readonly, copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(nonatomic) __weak id <MNComposerExtensionEditDelegate> editDelegate; // @synthesize editDelegate=_editDelegate;
@property(nonatomic) __weak id <MNComposerExtensionSendDelegate> sendDelegate; // @synthesize sendDelegate=_sendDelegate;
@property(nonatomic) __weak id <MNComposerExtensionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_composerIcon;
- (void)_initComposerIconExperimentContextIfNecessary;
- (void)_didSelectSticker:(id)arg1;
- (void)stickerStorePresenterDidDismiss:(id)arg1;
- (void)stickerTrayViewController:(id)arg1 didSelectStickerStoreWith:(unsigned long long)arg2 fromSourceView:(id)arg3;
- (void)stickerTrayViewController:(id)arg1 didSelectSticker:(id)arg2;
- (id)viewControllerForPresentation;
- (id)extensionIdentifier;
- (int)category;
- (id)tabBarItem;
- (BOOL)isThirdParty;
- (BOOL)isEligible;
- (BOOL)canEditText;
- (int)soundName;
- (void)tearDown;
- (void)setUp;
- (id)presentationStrategy;
- (void)didSelect:(BOOL)arg1 source:(int)arg2;
- (BOOL)shouldPresent:(BOOL)arg1 source:(int)arg2;
- (void)openStickerPack:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

