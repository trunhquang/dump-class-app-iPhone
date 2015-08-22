//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFViewController.h"

#import "PSPDFViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"

@class FVDocument, FVPSPDFBarButtonItem, FVStylesheet, NSString, UIActionSheet;

@interface FVPSPDFViewController : PSPDFViewController <UIActionSheetDelegate, PSPDFViewControllerDelegate>
{
    BOOL _shareActionSheetVisible;
    FVDocument *_originalDocument;
    id _actionTarget;
    CDUnknownBlockType _originalAction;
    CDUnknownBlockType _convertedAction;
    int _barButtonItems;
    FVStylesheet *_stylesheet;
    FVPSPDFBarButtonItem *_shareBarButtonItem;
    UIActionSheet *_shareActionSheet;
}

+ (id)viewControllerWithBuilder:(CDUnknownBlockType)arg1;
@property(nonatomic) BOOL shareActionSheetVisible; // @synthesize shareActionSheetVisible=_shareActionSheetVisible;
@property(retain, nonatomic) UIActionSheet *shareActionSheet; // @synthesize shareActionSheet=_shareActionSheet;
@property(retain, nonatomic) FVPSPDFBarButtonItem *shareBarButtonItem; // @synthesize shareBarButtonItem=_shareBarButtonItem;
@property(retain, nonatomic) FVStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) int barButtonItems; // @synthesize barButtonItems=_barButtonItems;
@property(copy, nonatomic) CDUnknownBlockType convertedAction; // @synthesize convertedAction=_convertedAction;
@property(copy, nonatomic) CDUnknownBlockType originalAction; // @synthesize originalAction=_originalAction;
@property(nonatomic) __weak id actionTarget; // @synthesize actionTarget=_actionTarget;
@property(retain, nonatomic) FVDocument *originalDocument; // @synthesize originalDocument=_originalDocument;
- (void).cxx_destruct;
- (void)pdfViewController:(id)arg1 didBeginPageDragging:(id)arg2;
- (void)pdfViewController:(id)arg1 didBeginPageZooming:(id)arg2;
- (void)inlineSearchManagerSearchWillDisappear:(id)arg1;
- (void)inlineSearchManagerSearchWillAppear:(id)arg1;
- (void)dismissShareActionSheet;
- (int)preferredStatusBarStyle;
- (BOOL)hideControlsAnimated:(BOOL)arg1;
- (BOOL)showControlsAnimated:(BOOL)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showShareActionSheet:(id)arg1;
- (id)customize;
- (void)commonInitWithDocument:(id)arg1 configuration:(id)arg2;
- (id)initWithOriginalDocument:(id)arg1 convertedData:(id)arg2 actionTarget:(id)arg3 originalAction:(CDUnknownBlockType)arg4 convertedAction:(CDUnknownBlockType)arg5 barButtonItems:(int)arg6 stylesheet:(id)arg7;
- (BOOL)originalDocumentIsPdf;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

