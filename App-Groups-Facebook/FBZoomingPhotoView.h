//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "FBZoomingPhotoViewDelegate.h"

@class NSString, UIView;

@interface FBZoomingPhotoView : UIScrollView <FBZoomingPhotoViewDelegate>
{
    BOOL _needsSetZoomScale;
    BOOL _zoomEnabled;
    BOOL _managePhotoViewLayout;
    UIView *_photoView;
    float _defaultZoomScale;
    int _zoomContentMode;
    id <FBZoomingPhotoViewDelegate> _forwarder;
    float _oldScale;
    struct CGPoint _oldCenter;
}

@property(nonatomic) float oldScale; // @synthesize oldScale=_oldScale;
@property(nonatomic) struct CGPoint oldCenter; // @synthesize oldCenter=_oldCenter;
@property(nonatomic) __weak id <FBZoomingPhotoViewDelegate> forwarder; // @synthesize forwarder=_forwarder;
@property(nonatomic) BOOL managePhotoViewLayout; // @synthesize managePhotoViewLayout=_managePhotoViewLayout;
@property(nonatomic) BOOL zoomEnabled; // @synthesize zoomEnabled=_zoomEnabled;
@property(nonatomic) int zoomContentMode; // @synthesize zoomContentMode=_zoomContentMode;
@property(nonatomic) float defaultZoomScale; // @synthesize defaultZoomScale=_defaultZoomScale;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView=_photoView;
- (void).cxx_destruct;
- (void)resetPhotoViewSize:(struct CGSize)arg1 withContentMode:(int)arg2;
- (void)resetZoomDefaultAnimated:(BOOL)arg1;
- (void)movePhotoToCenterAnimated:(BOOL)arg1;
- (void)setDefaultZoomScales;
- (void)restoreZooming;
- (void)rememberZooming;
- (struct CGPoint)minimumContentOffset;
- (struct CGPoint)maximumContentOffset;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(float)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
@property(readonly, nonatomic, getter=isZoomed) BOOL zoomed; // @dynamic zoomed;
@property(nonatomic) __weak id <FBZoomingPhotoViewDelegate> delegate;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

