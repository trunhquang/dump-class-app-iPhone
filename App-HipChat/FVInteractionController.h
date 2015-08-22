//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FVMBProgressHUDDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"

@class FVActivityHUD, FVDocument, FVEventPublisher, FVFileHelper, FVStylesheet, NSData, NSString, NSURL, UIActionSheet, UIBarButtonItem, UIView, UIViewController;

@interface FVInteractionController : NSObject <FVMBProgressHUDDelegate, UIDocumentInteractionControllerDelegate, UIActionSheetDelegate>
{
    BOOL _actionSheetVisible;
    unsigned int _interactionType;
    FVStylesheet *_stylesheet;
    FVDocument *_document;
    NSData *_convertedData;
    UIView *_view;
    UIBarButtonItem *_barButtonItem;
    id <FVInteractionControllerDelegate> _delegate;
    NSURL *_cachedUrl;
    FVActivityHUD *_hud;
    FVFileHelper *_fileHelper;
    UIViewController *_viewController;
    int _convertableType;
    UIActionSheet *_actionSheet;
    FVEventPublisher *_eventPublisher;
}

@property(nonatomic) __weak FVEventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
@property(nonatomic) int convertableType; // @synthesize convertableType=_convertableType;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) FVFileHelper *fileHelper; // @synthesize fileHelper=_fileHelper;
@property(retain, nonatomic) FVActivityHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) __weak NSURL *cachedUrl; // @synthesize cachedUrl=_cachedUrl;
@property(nonatomic) __weak id <FVInteractionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL actionSheetVisible; // @synthesize actionSheetVisible=_actionSheetVisible;
@property(nonatomic) __weak UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(retain, nonatomic) NSData *convertedData; // @synthesize convertedData=_convertedData;
@property(retain, nonatomic) FVDocument *document; // @synthesize document=_document;
@property(retain, nonatomic) FVStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) unsigned int interactionType; // @synthesize interactionType=_interactionType;
- (void).cxx_destruct;
- (id)convertedButtonTitle;
- (id)originalButtonTitle;
- (void)hudButtonPressed:(id)arg1;
- (void)dispatchDismissal;
- (void)documentInteractionControllerDidDismissOptionsMenu:(id)arg1;
- (void)documentInteractionControllerWillPresentOptionsMenu:(id)arg1;
- (void)actionSheetCancel:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)presentDocumentInteractionControllerForOriginalFile;
- (void)cacheAndPresentFileWithData:(id)arg1;
- (void)presentDocumentInteractionControllerForConvertedFile;
- (void)presentDocumentInteractionControllerForFileAtURL:(id)arg1;
- (id)controllerFor:(id)arg1;
- (void)presentDocumentInteraction;
- (id)initWithViewController:(id)arg1 eventPublisher:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

