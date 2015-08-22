//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PSPDFAnnotationGridViewControllerDelegate.h"
#import "PSPDFAnnotationStyleViewControllerDelegate.h"
#import "PSPDFCacheDelegate.h"
#import "PSPDFFontPickerViewControllerDelegate.h"
#import "PSPDFLongPressGestureRecognizerDelegate.h"
#import "PSPDFNoteAnnotationViewControllerDelegate.h"
#import "PSPDFRenderDelegate.h"
#import "PSPDFResizableViewDelegate.h"
#import "PSPDFSignatureSelectorViewControllerDelegate.h"
#import "PSPDFSignatureViewControllerDelegate.h"
#import "PSPDFSignedFormElementViewControllerDelegate.h"
#import "PSPDFTextSelectionViewDataSource.h"
#import "PSPDFTextSelectionViewDelegate.h"
#import "PSPDFUnsignedFormElementViewControllerDelegate.h"
#import "UIAccessibilityReadingContent.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSBlockOperation, NSHashTable, NSMutableArray, NSMutableSet, NSString, PSPDFAnnotation, PSPDFAnnotationContainerView, PSPDFCache, PSPDFDebouncedTimer, PSPDFDocument, PSPDFPageInfo, PSPDFRenderQueue, PSPDFRenderStatusView, PSPDFResizableView, PSPDFTextSelectionView, PSPDFTouchHighlightView, UIColor, UIImageView;

@interface PSPDFPageView : UIView <PSPDFUnsignedFormElementViewControllerDelegate, PSPDFSignedFormElementViewControllerDelegate, PSPDFSignatureViewControllerDelegate, PSPDFSignatureSelectorViewControllerDelegate, PSPDFAnnotationStyleViewControllerDelegate, PSPDFNoteAnnotationViewControllerDelegate, PSPDFFontPickerViewControllerDelegate, PSPDFTextSelectionViewDelegate, UIAccessibilityReadingContent, PSPDFTextSelectionViewDataSource, PSPDFLongPressGestureRecognizerDelegate, PSPDFRenderDelegate, PSPDFCacheDelegate, PSPDFResizableViewDelegate, PSPDFAnnotationGridViewControllerDelegate, UIScrollViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    double _lastScrollUpdate;
    struct CGPoint _lastScrollOffset;
    struct CGPoint _targetContentOffset;
    float _lastZoomScale;
    struct CGRect _currentClipRect;
    NSMutableArray *_annotationsTemporarilyAsOverlay;
    struct {
        unsigned int updateViewScheduled:1;
        unsigned int updateViewShouldAnimate:1;
        unsigned int hasLoadedAnnotationViews:1;
        unsigned int targetContentOffsetValid:1;
        unsigned int isWithinDisplayDocumentMethod:1;
        unsigned int isCancellingLongPressGesture:1;
        unsigned int annotationMovedOrChangedDuringLongPress:1;
        unsigned int skipHidingPopoverOnNextSingleTap:1;
    } _flags;
    BOOL _suspendUpdate;
    BOOL _rendering;
    NSArray *_selectedAnnotations;
    id <PSPDFPresentationContext> _presentationContext;
    UIImageView *_contentView;
    UIImageView *_renderView;
    PSPDFAnnotationContainerView *_annotationContainerView;
    PSPDFTextSelectionView *_selectionView;
    PSPDFRenderStatusView *_renderStatusView;
    float _renderStatusViewOffset;
    float _PDFScale;
    UIColor *_highlightColor;
    unsigned int _page;
    PSPDFPageInfo *_pageInfo;
    id <PSPDFPageViewDelegate> _delegate;
    unsigned int _hideAnnotationTypes;
    CDUnknownBlockType _updateShadowBlock;
    NSBlockOperation *_annotationLoadOperation;
    NSBlockOperation *_textParserLoadOperation;
    NSHashTable *_lastVisibleMenuItems;
    PSPDFResizableView *_annotationSelectionView;
    PSPDFTouchHighlightView *_linkTouchView;
    PSPDFAnnotation *_lastAccessibilityAnnotation;
    PSPDFDebouncedTimer *_annotationViewUpdateTimer;
    PSPDFDebouncedTimer *_updateRenderViewTimer;
    NSMutableSet *_viewsToBeAdded;
    NSMutableSet *_viewsToBeRemoved;
    NSMutableSet *_blocksToBeExecuted;
    PSPDFCache *_cache;
    PSPDFRenderQueue *_renderQueue;
    unsigned long long _lastRenderTime;
    struct CGSize _renderSize;
}

+ (id)pageViewQueue;
@property(readonly, nonatomic) PSPDFRenderQueue *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(readonly, nonatomic) PSPDFCache *cache; // @synthesize cache=_cache;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(retain, nonatomic) NSMutableSet *blocksToBeExecuted; // @synthesize blocksToBeExecuted=_blocksToBeExecuted;
@property(retain, nonatomic) NSMutableSet *viewsToBeRemoved; // @synthesize viewsToBeRemoved=_viewsToBeRemoved;
@property(retain, nonatomic) NSMutableSet *viewsToBeAdded; // @synthesize viewsToBeAdded=_viewsToBeAdded;
@property(retain, nonatomic) PSPDFDebouncedTimer *updateRenderViewTimer; // @synthesize updateRenderViewTimer=_updateRenderViewTimer;
@property(retain, nonatomic) PSPDFDebouncedTimer *annotationViewUpdateTimer; // @synthesize annotationViewUpdateTimer=_annotationViewUpdateTimer;
@property(retain, nonatomic) PSPDFAnnotation *lastAccessibilityAnnotation; // @synthesize lastAccessibilityAnnotation=_lastAccessibilityAnnotation;
@property(retain, nonatomic) PSPDFTouchHighlightView *linkTouchView; // @synthesize linkTouchView=_linkTouchView;
@property(retain, nonatomic) PSPDFResizableView *annotationSelectionView; // @synthesize annotationSelectionView=_annotationSelectionView;
@property(nonatomic, getter=isRendering) BOOL rendering; // @synthesize rendering=_rendering;
@property(retain, nonatomic) NSHashTable *lastVisibleMenuItems; // @synthesize lastVisibleMenuItems=_lastVisibleMenuItems;
@property(nonatomic) unsigned long long lastRenderTime; // @synthesize lastRenderTime=_lastRenderTime;
@property(retain) NSBlockOperation *textParserLoadOperation; // @synthesize textParserLoadOperation=_textParserLoadOperation;
@property(retain) NSBlockOperation *annotationLoadOperation; // @synthesize annotationLoadOperation=_annotationLoadOperation;
@property(copy, nonatomic) CDUnknownBlockType updateShadowBlock; // @synthesize updateShadowBlock=_updateShadowBlock;
@property(nonatomic) unsigned int hideAnnotationTypes; // @synthesize hideAnnotationTypes=_hideAnnotationTypes;
@property(nonatomic) BOOL suspendUpdate; // @synthesize suspendUpdate=_suspendUpdate;
@property(nonatomic) __weak id <PSPDFPageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PSPDFPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(nonatomic) unsigned int page; // @synthesize page=_page;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(nonatomic) float PDFScale; // @synthesize PDFScale=_PDFScale;
@property(nonatomic) float renderStatusViewOffset; // @synthesize renderStatusViewOffset=_renderStatusViewOffset;
@property(retain, nonatomic) PSPDFRenderStatusView *renderStatusView; // @synthesize renderStatusView=_renderStatusView;
@property(retain, nonatomic) PSPDFTextSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(readonly, nonatomic) PSPDFAnnotationContainerView *annotationContainerView; // @synthesize annotationContainerView=_annotationContainerView;
@property(readonly, nonatomic) UIImageView *renderView; // @synthesize renderView=_renderView;
@property(retain, nonatomic) UIImageView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <PSPDFPresentationContext> presentationContext; // @synthesize presentationContext=_presentationContext;
- (void).cxx_destruct;
- (BOOL)accessibilityScroll:(int)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityPageContent;
- (struct CGRect)accessibilityFrameForLineNumber:(int)arg1;
- (id)accessibilityContentForLineNumber:(int)arg1;
- (int)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (void)insertAnnotations:(id)arg1 forPage:(unsigned int)arg2 inDocument:(id)arg3;
- (void)annotationGridViewController:(id)arg1 didSelectAnnotationSet:(id)arg2;
- (void)annotationGridViewControllerDidCancel:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (struct CGRect)centerBoundingBox:(struct CGRect)arg1 aroundPDFPoint:(struct CGPoint)arg2;
- (void)centerAnnotationSet:(id)arg1 aroundPDFPoint:(struct CGPoint)arg2;
- (void)centerAnnotation:(id)arg1 aroundPDFPoint:(struct CGPoint)arg2;
- (struct CGPoint)targetPointForImagePicker:(id)arg1;
- (BOOL)shouldScaleAnnotationWhenResizing:(id)arg1 usesResizeKnob:(BOOL)arg2;
- (void)commitChangeForResizableView:(id)arg1 alwaysSendNotification:(BOOL)arg2 transformOptional:(BOOL)arg3;
- (void)resizableViewDidEndEditing:(id)arg1;
- (void)resizableViewChangedFrame:(id)arg1 outerKnobType:(unsigned int)arg2;
- (void)resizableViewDidBeginEditing:(id)arg1;
- (void)didRenderImage:(id)arg1 document:(id)arg2 page:(unsigned int)arg3 size:(struct CGSize)arg4;
- (void)renderQueue:(id)arg1 jobDidFinish:(id)arg2;
- (BOOL)pressRecognizerShouldHandlePressImmediately:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)executeLooseFocusEventIfAnnotationsAreLoadedWithTouches:(id)arg1;
- (unsigned int)executeActionsAtPoint:(struct CGPoint)arg1 forTriggerEvents:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)annotationsRemovedNotification:(id)arg1;
- (void)annotationsAddedNotification:(id)arg1;
- (void)annotationChangedNotification:(id)arg1;
- (void)audioPlayerDidChangeNotification:(id)arg1;
- (void)adjustContentAfterKeyboardDidShow:(id)arg1;
- (BOOL)selectFormElement:(id)arg1 atViewPoint:(struct CGPoint)arg2 options:(id)arg3 animated:(BOOL)arg4;
- (BOOL)singleTappedAtViewPoint:(struct CGPoint)arg1;
- (BOOL)documentHasLoadedAnnotations;
- (BOOL)singleTapped:(id)arg1;
- (id)highlightableAnnotationsAtPoint:(struct CGPoint)arg1 includeFullPageAnnotations:(BOOL)arg2;
- (id)tappableAnnotationsOfType:(unsigned int)arg1 atPoint:(struct CGPoint)arg2 filterNonEditable:(BOOL)arg3;
- (struct CGRect)hitTestRectForPoint:(struct CGPoint)arg1;
- (float)pageHitTestRectSize;
- (id)tappableAnnotationsForLongPressAtPoint:(struct CGPoint)arg1;
- (id)tappableAnnotationsAtPoint:(struct CGPoint)arg1;
- (BOOL)longPress:(id)arg1;
- (BOOL)canSelectAnnotation:(id)arg1;
- (void)bringPageToFront;
- (void)selectAnnotation:(id)arg1 animated:(BOOL)arg2;
- (id)documentProvider;
- (void)propagateSelectionToAnnotationViews:(id)arg1 selected:(BOOL)arg2;
- (void)updateAnnotationSelection;
@property(readonly, nonatomic) float zoomScale;
- (struct CGRect)rectForAnnotation:(id)arg1;
- (struct CGRect)rectForAnnotations:(id)arg1;
- (void)updateSelectionAnimated:(BOOL)arg1;
- (void)discardSelectionAnimated:(BOOL)arg1;
- (void)hidePageElementsNotification:(id)arg1;
- (void)removeEmptyTextAnnotations:(id)arg1;
@property(copy, nonatomic) NSArray *selectedAnnotations; // @synthesize selectedAnnotations=_selectedAnnotations;
- (void)setSelectedAnnotations:(id)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (void)updateAnnotationSelectionView;
- (void)destroyAnnotationSelectionView;
- (void)setupAnnotationSelectionView;
- (BOOL)shouldRenderAnnotationAsOverlay:(id)arg1;
- (BOOL)shouldSynchronizeViewAddRemovalForAnnotation:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)pspdf_scrollView:(id)arg1 willZoomToScale:(float)arg2 animated:(BOOL)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scheduleUpdateRenderView;
- (id)objectsAtRect:(struct CGRect)arg1 options:(id)arg2;
- (id)objectsAtPoint:(struct CGPoint)arg1 options:(id)arg2;
- (struct CGRect)convertViewRectToGlyphRect:(struct CGRect)arg1;
- (struct CGRect)convertGlyphRectToViewRect:(struct CGRect)arg1;
- (struct CGRect)convertPDFRectToViewRect:(struct CGRect)arg1;
- (struct CGRect)convertViewRectToPDFRect:(struct CGRect)arg1;
- (struct CGPoint)convertPDFPointToViewPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertViewPointToPDFPoint:(struct CGPoint)arg1;
- (void)undoManagerDidUndoOrRedo:(id)arg1;
- (id)keyboardHandler;
- (void)preloadTextParser;
@property(readonly, nonatomic, getter=isRightPage) BOOL rightPage;
@property(readonly, nonatomic) PSPDFDocument *document;
- (id)configuration;
- (id)firstAnnotationViewOfClass:(Class)arg1;
- (void)recycleAnnotationViews;
- (id)visibleAnnotationViews;
- (void)loadPageAnnotationsWithAnimation;
- (id)annotationViewForAnnotation:(id)arg1;
- (void)addAnnotation:(id)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (void)updateAnnotationView:(id)arg1;
- (BOOL)removeAnnotation:(id)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (void)performBlockOnNextPageUpdate:(CDUnknownBlockType)arg1;
- (void)addViewOnNextPageUpdate:(id)arg1;
- (void)removeViewOnNextPageUpdate:(id)arg1;
- (void)loadPageAnnotationsAnimated:(BOOL)arg1 blockWhileParsing:(BOOL)arg2;
- (void)orderLoadedAnnotationViews;
- (void)callDelegateOnAnnotationViews:(id)arg1 didShow:(BOOL)arg2;
- (void)callChangePageBoundsOnAnnotationViews;
- (id)annotationForAnnotationView:(id)arg1;
- (void)setAnnotation:(id)arg1 forAnnotationView:(id)arg2;
- (void)updateStatusViewForContinuousMode;
- (void)updateStatusViewForPagedMode;
- (void)updateStatusView;
- (void)setBackgroundImage:(id)arg1 animated:(BOOL)arg2;
- (void)setAnimateShapesBoundsChangesOnDrawViewsEnabled:(BOOL)arg1 duration:(double)arg2;
- (void)requestRenderedFullPageImageAnimated:(BOOL)arg1;
- (void)updateRenderViewForced:(BOOL)arg1 cancelRunningJobs:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)shouldShowRenderViewWithZoomScale:(float)arg1;
- (BOOL)shouldShowRenderView;
- (BOOL)isViewTooLargeForFullImage;
- (void)updateRenderView;
- (id)annotationsForRenderRequest;
- (void)updateRenderingIndicatorAnimated;
- (void)updateViewImmediate;
- (void)updateViewAnimated:(BOOL)arg1;
- (void)updateView;
- (id)renderOptionsDictWithZoomScale:(float)arg1 animated:(BOOL)arg2;
- (id)skipAnnotationsArray;
- (id)scrollView;
- (void)updateShadowAnimated:(BOOL)arg1;
- (id)parentViewController;
- (float)scaleForPageView;
- (id)textParser;
@property(readonly, nonatomic) struct CGRect visibleRect;
- (void)prepareForReuse;
- (void)displayPage:(unsigned int)arg1 pageRect:(struct CGRect)arg2 scale:(float)arg3 presentationContext:(id)arg4;
- (id)pageViewImageLoader;
- (void)setHidden:(BOOL)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)didChangeInterfaceOrientationNotification:(id)arg1;
- (void)willChangeInterfaceOrientationNotification:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;
- (void)setupNotifications;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (Class)classForClass:(Class)arg1;
- (void)signedFormElementViewController:(id)arg1 removedSignatureFromDocument:(id)arg2;
- (void)unsignedFormElementViewController:(id)arg1 signedDocument:(id)arg2 error:(id)arg3;
- (void)unsignedFormElementViewControllerRequestsInkSignature:(id)arg1;
@property(readonly, nonatomic) BOOL textSelectionShouldSnapToWord;
@property(readonly, nonatomic) unsigned int textSelectionMode;
@property(readonly, nonatomic, getter=isImageSelectionEnabled) BOOL imageSelectionEnabled;
@property(readonly, nonatomic, getter=isTextSelectionEnabled) BOOL textSelectionEnabled;
- (void)dictionary:(id)arg1;
- (void)addHighlightAnnotationWithType:(unsigned int)arg1;
- (id)menuItemsForImageSelection:(id)arg1;
- (id)presentWikipediaBrowserAtRect:(struct CGRect)arg1 withSearchTerm:(id)arg2;
- (id)presentWikipediaBrowserForSelectedText;
- (id)menuItemsForTextSelection:(id)arg1;
- (void)textSelectionView:(id)arg1 didSelectText:(id)arg2 withGlyphs:(id)arg3 atRect:(struct CGRect)arg4;
- (BOOL)textSelectionView:(id)arg1 shouldSelectText:(id)arg2 withGlyphs:(id)arg3 atRect:(struct CGRect)arg4;
- (BOOL)textSelectionView:(id)arg1 updateMenuAnimated:(BOOL)arg2;
- (BOOL)canShowMenuController;
- (void)fontStyleViewController:(id)arg1 didSelectFont:(id)arg2;
- (void)fontPickerDidSelectFont:(id)arg1;
- (void)fontPickerViewController:(id)arg1 didSelectFont:(id)arg2;
- (void)colorSelectionController:(id)arg1 didSelectColor:(id)arg2 finishedSelection:(BOOL)arg3 context:(void *)arg4;
- (id)colorSelectionControllerSelectedColor:(id)arg1 context:(void *)arg2;
- (void)noteAnnotationController:(id)arg1 willDismissWithAnnotation:(id)arg2;
- (void)dismissViewController:(id)arg1;
- (void)noteAnnotationController:(id)arg1 didClearContentsForAnnotation:(id)arg2;
- (void)noteAnnotationController:(id)arg1 didDeleteAnnotation:(id)arg2;
- (id)annotationStyleController:(id)arg1 annotationViewForAnnotation:(id)arg2;
- (void)annotationStyleController:(id)arg1 didChangeProperty:(id)arg2;
- (void)signatureSelectorViewControllerWillCreateNewSignature:(id)arg1;
- (void)signatureSelectorViewController:(id)arg1 didSelectSignature:(id)arg2;
- (id)signatureAnnotationForRect:(struct CGRect)arg1 withLines:(id)arg2 lineWidth:(float)arg3 color:(id)arg4 sizeReductionFactor:(float)arg5 naturalDrawingEnabled:(BOOL)arg6 rotation:(unsigned int)arg7;
- (void)signatureViewControllerDidSave:(id)arg1;
- (void)signatureViewControllerDidCancel:(id)arg1;
- (void)showSignatureControllerAtRect:(struct CGRect)arg1 withTitle:(id)arg2 shouldSaveSignature:(BOOL)arg3 animated:(BOOL)arg4;
- (void)showSignatureSelectionControllerAtRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)showNewSignatureMenuAtRect:(struct CGRect)arg1 animated:(BOOL)arg2;
- (BOOL)showDigitalSignatureMenuForSignatureField:(id)arg1 animated:(BOOL)arg2;
- (void)prepareSheetController:(id)arg1 withTitle:(id)arg2 andContext:(id)arg3 forEditableLinkAnnotation:(id)arg4;
- (BOOL)showLinkPreviewActionSheetForAnnotation:(id)arg1 fromRect:(struct CGRect)arg2 animated:(BOOL)arg3;
- (void)handleTouchUpForAnnotationIgnoredByDelegate:(id)arg1 inRect:(struct CGRect)arg2;
- (void)handleTouchUpForAnnotationIgnoredByDelegate:(id)arg1;
- (void)showMenuIfSelectedAnimated:(BOOL)arg1 allowPopovers:(BOOL)arg2;
- (void)showMenuIfSelectedAnimated:(BOOL)arg1;
- (void)showFontPickerForAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)showColorPickerForAnnotation:(id)arg1 animated:(BOOL)arg2;
- (void)showColorPickerForAnnotation:(id)arg1 isFillColor:(BOOL)arg2 animated:(BOOL)arg3;
- (id)showNoteControllerForAnnotation:(id)arg1 showKeyboard:(BOOL)arg2 animated:(BOOL)arg3;
- (struct CGRect)presentationRectForAnnotation:(id)arg1;
- (struct CGRect)presentationRectForAnnotations:(id)arg1;
- (id)passthroughViewsForPopoverController;
- (id)defaultPresentationOptionsForAnnotations:(id)arg1;
- (void)selectHighlightAnnotationTypeForAnnotation:(id)arg1;
- (unsigned int)availableHighlightAnnotationTypeCount;
- (id)opacityMenuItemForAnnotation:(id)arg1 withColor:(id)arg2;
- (void)changeAnnotationColor:(id)arg1 isFillColor:(BOOL)arg2 annotation:(id)arg3;
- (void)selectColorForAnnotation:(id)arg1 isFillColor:(BOOL)arg2;
- (id)colorMenuItemsForAnnotation:(id)arg1 isFillColor:(BOOL)arg2;
- (id)colorMenuItemsForAnnotation:(id)arg1;
- (id)fillColorMenuItemsForAnnotation:(id)arg1;
- (id)defaultColorOptionsForAnnotationType:(unsigned int)arg1;
- (id)menuItemsForNewAnnotationAtPoint:(struct CGPoint)arg1;
- (BOOL)shouldMoveStyleMenuEntriesIntoSubmenu;
- (id)menuItemsForAnnotations:(id)arg1;
- (id)annotationsProcessableForMenu:(id)arg1;
- (id)showInspectorForAnnotations:(id)arg1 options:(id)arg2 animated:(BOOL)arg3;
- (BOOL)useAnnotationInspectorForAnnotations:(id)arg1;
- (id)lineEndingMenuItemsForAnnotation:(id)arg1 pointNumber:(unsigned int)arg2;
- (void)showSubmenuForAnnotation:(id)arg1 animated:(BOOL)arg2 populateWithItems:(CDUnknownBlockType)arg3;
- (id)thicknessMenuItemForAnnotation:(id)arg1 options:(id)arg2;
- (id)availableLineWidths;
- (id)availableFontSizes;
- (void)showMenuForAnnotations:(id)arg1 targetRect:(struct CGRect)arg2 allowPopovers:(BOOL)arg3 animated:(BOOL)arg4;
- (void)pasteAnnotationsToPoint:(struct CGPoint)arg1;
- (BOOL)canPasteAnnotations;
- (id)policy;
- (BOOL)canCreateFreeTextAnnotationFromPasteboard;
- (BOOL)canCreateLinkAnnotationFromPasteboard;
- (BOOL)canCreateImageAnnotationFromPasteboard;
- (id)copyAnnotations:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
