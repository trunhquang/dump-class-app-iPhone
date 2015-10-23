//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class AFSliderThumbView, UIColor, UIView;

@interface AFSlider : UIControl
{
    float _value;
    float _maximumValue;
    float _minimumValue;
    float _originalValue;
    AFSliderThumbView *_thumbView;
    UIView *_trackContainerView;
    UIView *_trackFillView;
}

@property(retain, nonatomic) UIView *trackFillView; // @synthesize trackFillView=_trackFillView;
@property(retain, nonatomic) UIView *trackContainerView; // @synthesize trackContainerView=_trackContainerView;
@property(retain, nonatomic) AFSliderThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) float originalValue; // @synthesize originalValue=_originalValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)panDetected:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *thumbTintColor; // @dynamic thumbTintColor;
@property(retain, nonatomic) UIColor *maximumTrackTintColor; // @dynamic maximumTrackTintColor;
@property(retain, nonatomic) UIColor *minimumTrackTintColor; // @dynamic minimumTrackTintColor;
- (float)percentValue;
@property(readonly, nonatomic) UIView *handleView;
- (id)init;

@end

