//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBMPhotoViewDelegate.h"
#import "FBModalFullscreenControllerDataSource.h"
#import "FBModalFullscreenControllerDelegate.h"
#import "MNPhotoOverlayViewDelegate.h"
#import "MNPhotoViewNodeDelegate.h"

@class FBMPhotoViewImageDownloadController, FBModalFullscreenController, MNPhotoOverlayView, MNPhotoViewNode, MNPhotoViewNodeReusePool, MNPhotosViewMaskAttributes, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, _MNTwoDimensionArray;

@interface MNPhotosView : UIView <FBMPhotoViewDelegate, MNPhotoViewNodeDelegate, FBModalFullscreenControllerDelegate, FBModalFullscreenControllerDataSource, MNPhotoOverlayViewDelegate>
{
    FBModalFullscreenController *_modalFullscreenController;
    UIView *_touchBlockingUnderlayView;
    MNPhotoOverlayView *_photoOverlayView;
    UIImageView *_photosMaskingOverlayView;
    NSMutableArray *_photoViewNodes;
    _MNTwoDimensionArray *_photoViewNodesGrid;
    MNPhotoViewNode *_openedNode;
    FBMPhotoViewImageDownloadController *_photoViewImageDownloadController;
    MNPhotoViewNodeReusePool *_photoViewNodeReusePool;
    NSMutableDictionary *_photoViewModelsToNodes;
    BOOL _photosSending;
    BOOL _alignsToRight;
    NSArray *_photoViewModels;
    id <MNPhotosViewDelegate> _delegate;
    MNPhotosViewMaskAttributes *_photosViewMaskAttributes;
}

+ (struct CGSize)sizeForSinglePhotoViewModel:(id)arg1 maxWidth:(float)arg2;
+ (struct CGSize)sizeForPhotoViewModels:(id)arg1 maxWidth:(float)arg2;
@property(readonly, nonatomic) BOOL alignsToRight; // @synthesize alignsToRight=_alignsToRight;
@property(readonly, copy, nonatomic) MNPhotosViewMaskAttributes *photosViewMaskAttributes; // @synthesize photosViewMaskAttributes=_photosViewMaskAttributes;
@property(nonatomic) BOOL photosSending; // @synthesize photosSending=_photosSending;
@property(nonatomic) __weak id <MNPhotosViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *photoViewModels; // @synthesize photoViewModels=_photoViewModels;
- (void).cxx_destruct;
- (void)openPhotoWithViewModel:(id)arg1 animated:(BOOL)arg2;
- (void)overlayView:(id)arg1 didTapContextualActionButton:(id)arg2;
- (id)_relativeNodeForNode:(id)arg1 withOffset:(int)arg2;
- (id)_photoViewNodeForModel:(id)arg1;
- (id)modalFullscreenController:(id)arg1 nodeBeforeNode:(id)arg2;
- (id)modalFullscreenController:(id)arg1 nodeAfterNode:(id)arg2;
- (id)existingModalLayerForAttachmentNode:(id)arg1;
- (void)_enableInterationsOnAllNodes;
- (void)_disableInteractionsOnAllNodesExceptTappedNode:(id)arg1;
- (BOOL)attachmentNode:(id)arg1 shouldBeginGesture:(id)arg2;
- (void)attachmentNodeMayClose:(id)arg1;
- (void)attachmentNodeDidClose:(id)arg1;
- (void)attachmentNodeWillClose:(id)arg1 animated:(BOOL)arg2;
- (void)attachmentNodeDidOpen:(id)arg1;
- (void)attachmentNodeWillOpen:(id)arg1 animated:(BOOL)arg2;
- (void)attachmentNodeMayOpen:(id)arg1;
- (struct CGRect)closeFrameForMaskOfPhotoView:(id)arg1;
- (id)photoViewCloseView:(id)arg1;
- (struct CGRect)closeFrameForPhotoViewNode:(id)arg1;
- (struct CGRect)photoViewCloseFrame:(id)arg1;
- (id)modalPresentationView:(id)arg1;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)handleIntent:(id)arg1;
- (id)modalPresentationStackManager;
- (id)maskForPhotoViewNodeInPhotosView:(id)arg1;
- (id)maskForPhotoNode:(id)arg1;
- (void)photoViewNode:(id)arg1 doubleTappedAtPoint:(struct CGPoint)arg2;
- (void)didSelectPhotoView:(id)arg1;
- (unsigned int)_supportedPhotoGesturesForClosingNode;
- (unsigned int)_supportedPhotoGesturesForClosedNode;
- (unsigned int)_supportedPhotoGesturesForOpenNode;
- (unsigned int)_supportedPhotoGesturesForOpeningNode;
- (struct CGRect)_frameForRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (void)_layoutPhotoViewNode:(id)arg1 row:(unsigned int)arg2 column:(unsigned int)arg3;
- (void)layoutSubviews;
- (void)_recyclePhotoViewNode:(id)arg1;
- (id)_dequeuePhotoViewNodeForModel:(id)arg1;
- (void)_tearDownPhotoViewNode:(id)arg1;
- (void)_setUpPhotoViewNode:(id)arg1 withPhotoViewModel:(id)arg2;
- (void)_updatePhotoViewNodeGrid;
- (void)_updateVisiblePhotoViewNodes;
- (void)_updatePhotosOverlay;
- (void)_addMaskViewForPhotoViewNodeIfNeeded:(id)arg1;
- (void)_updatePhotoMasks;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPhotoViewModels:(id)arg1 photosViewMaskAttributes:(id)arg2 alignsToRight:(BOOL)arg3;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 photoViewImageDownloadController:(id)arg2 photoViewNodeReusePool:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
