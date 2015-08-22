//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GIPLoadingHalfCircle, NSArray, NSTimer;

@interface GIPLoadingIndicator : UIView
{
    GIPLoadingHalfCircle *topHalf_;
    GIPLoadingHalfCircle *bottomHalf_;
    GIPLoadingHalfCircle *flipper_;
    id <GIPLoadingIndicatorDelegate> delegate_;
    NSTimer *timer_;
    int frameNum_;
    unsigned int stage_;
    BOOL shouldStop_;
    NSArray *blueColorArray_;
    NSArray *greenColorArray_;
    NSArray *redColorArray_;
    NSArray *yellowColorArray_;
}

@property(retain, nonatomic) NSArray *yellowColorArray; // @synthesize yellowColorArray=yellowColorArray_;
@property(retain, nonatomic) NSArray *redColorArray; // @synthesize redColorArray=redColorArray_;
@property(retain, nonatomic) NSArray *greenColorArray; // @synthesize greenColorArray=greenColorArray_;
@property(nonatomic) id <GIPLoadingIndicatorDelegate> delegate; // @synthesize delegate=delegate_;
@property(retain, nonatomic) NSArray *blueColorArray; // @synthesize blueColorArray=blueColorArray_;
- (void)dealloc;
- (void)stopLoader;
- (void)removeIcon;
- (void)animateFlipperFrom:(struct CATransform3D)arg1 to:(struct CATransform3D)arg2 halfFlipCount:(unsigned int)arg3;
- (void)endingAnimation:(id)arg1;
- (void)normalTick;
- (void)startTick;
- (void)timerTick;
- (void)startLoader;
- (id)interpolateFrom:(id)arg1 toColor:(id)arg2 frameCount:(int)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 withDelegate:(id)arg2;

@end

