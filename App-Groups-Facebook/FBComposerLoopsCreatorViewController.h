//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerLoopsCreatorViewDelegate.h"
#import "FBScenePathHolding.h"

@class FBComposerLoopsCreatorView, FBComposerLoopsLogger, FBComposerLoopsPhotoListenerAnnouncer, FBComposerLoopsSelectedPhotosDataSource, FBImageSequenceStabilizer, FBUserSession, NSArray, NSString;

@interface FBComposerLoopsCreatorViewController : UIViewController <FBComposerLoopsCreatorViewDelegate, FBScenePathHolding>
{
    FBComposerLoopsPhotoListenerAnnouncer *_announcer;
    BOOL _didDeleteAPhoto;
    BOOL _dismissStabilizeResults;
    float _imageFadeDurationPercentage;
    FBImageSequenceStabilizer *_imageStabilizer;
    BOOL _isReorderingAnImage;
    FBComposerLoopsCreatorView *_loopsCreatorView;
    FBComposerLoopsLogger *_loopsLogger;
    NSArray *_photoAttachments;
    FBComposerLoopsSelectedPhotosDataSource *_selectedPhotosDataSource;
    FBUserSession *_userSession;
    id <FBComposerLoopsCreatorViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerLoopsCreatorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_setNavigationItemsToEnabled:(BOOL)arg1;
- (void)_prepareHighResolutionImages;
- (void)_prepareAttachments;
- (float)_imageFadeDurationToUseForImageDuration:(float)arg1;
- (void)_prepareVideoAndDismiss;
- (void)_dismissStabilizeResults;
- (void)loopsCreatorViewDidSelectAPhoto:(id)arg1;
- (void)loopsCreatorViewDidZoomPhoto:(id)arg1;
- (void)loopsCreatorViewDidDragPhoto:(id)arg1;
- (void)loopsCreatorViewDidChangeSpeed:(id)arg1 toSpeed:(float)arg2;
- (void)loopsCreatorViewDidFinishReorderingPhoto:(id)arg1;
- (void)loopsCreatorViewDidTapStabilizeButton:(id)arg1 toggleOn:(BOOL)arg2;
- (void)loopsCreatorView:(id)arg1 didCropPhotoAtIndex:(unsigned int)arg2 cropInfoArray:(id)arg3;
- (void)loopsCreatorView:(id)arg1 willDeleteItemAtIndex:(unsigned int)arg2 deletedByDragging:(BOOL)arg3;
- (void)loopsCreatorView:(id)arg1 willMoveImageAtIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (void)loopsCreatorViewDidHitAddPhotoButton:(id)arg1;
- (void)addPhotoAttachments:(id)arg1;
- (void)_didTapCancel;
- (void)_didTapNext;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithPhotoAttachments:(id)arg1 timeBetweenFrames:(float)arg2 loopsLogger:(id)arg3 userSession:(id)arg4;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

