//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GIPSlidesViewDelegate.h"

@class GIPSlidesView, UIButton;

@interface GIPLightboxView : UIView <GIPSlidesViewDelegate>
{
    UIButton *backButton_;
    UIView *topToolbar_;
    UIView *actionButton_;
    UIButton *shareButton_;
    BOOL toolbarHidden;
    BOOL shouldMirrorLayout_;
    id <GIPLightboxViewDelegate> delegate_;
    GIPSlidesView *slidesView_;
}

@property(readonly, nonatomic) UIView *actionButton; // @synthesize actionButton=actionButton_;
@property(readonly, nonatomic) GIPSlidesView *slidesView; // @synthesize slidesView=slidesView_;
@property(nonatomic) __weak id <GIPLightboxViewDelegate> delegate; // @synthesize delegate=delegate_;
- (void).cxx_destruct;
- (void)slidesView:(id)arg1 didChangeToSlideAtIndex:(int)arg2;
- (void)slidesView:(id)arg1 singleTapOnSlideAtIndex:(int)arg2;
- (void)mirrorView:(id)arg1 withContainerSize:(struct CGSize)arg2;
- (void)shareButtonPressed:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)createSubviews;
- (void)setToolbarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isToolbarHidden;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 actionButton:(id)arg2 backButton:(id)arg3 shouldMirrorLayout:(BOOL)arg4;

@end

