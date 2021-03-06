//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIScrollViewDelegate.h"

@class CBLIndeterminateActivityIndicatorView, NSString, NSURL, UIImage, UIImageView;

@interface CBLZoomingImageView : UIScrollView <UIScrollViewDelegate>
{
    id <CBLZoomingImageViewDelegate> _zoomingDelegate;
    UIImageView *_imageView;
    UIImage *_image;
    NSURL *_imageURL;
    float _scaleToRestoreAfterResize;
    CBLIndeterminateActivityIndicatorView *_activityView;
    struct CGPoint _pointToCenterAfterResize;
}

@property(retain, nonatomic) CBLIndeterminateActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(nonatomic) float scaleToRestoreAfterResize; // @synthesize scaleToRestoreAfterResize=_scaleToRestoreAfterResize;
@property(nonatomic) struct CGPoint pointToCenterAfterResize; // @synthesize pointToCenterAfterResize=_pointToCenterAfterResize;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <CBLZoomingImageViewDelegate> zoomingDelegate; // @synthesize zoomingDelegate=_zoomingDelegate;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)minimumContentOffset;
- (struct CGPoint)maximumContentOffset;
- (void)recoverFromResizing;
- (void)prepareToResize;
- (void)setMaxMinZoomScalesForCurrentBounds;
- (struct CGRect)zoomRectForScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)updateZoomScale:(float)arg1 withCenter:(struct CGPoint)arg2;
- (void)updateZoomScaleWithGesture:(id)arg1 newScale:(float)arg2;
- (void)updateZoomScale:(float)arg1;
- (struct CGPoint)adjustPointIntoImageView:(struct CGPoint)arg1;
- (void)handleScrollViewTwoFingerTap:(id)arg1;
- (void)handleScrollViewDoubleTap:(id)arg1;
- (void)didSingleTap:(id)arg1;
- (void)didDoubleTap:(id)arg1;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)initialFrameForImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

