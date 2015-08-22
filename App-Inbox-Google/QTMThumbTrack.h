//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "QTMInkTouchControllerDelegate.h"

@class CALayer, CAShapeLayer, NSString, QTMColorGroup, QTMInkTouchController, QTMThumbView, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface QTMThumbTrack : UIControl <QTMInkTouchControllerDelegate>
{
    UIPanGestureRecognizer *_panRecognizer;
    float _panThumbGrabPosition;
    UITapGestureRecognizer *_tapRecognizer;
    float _lastDispatchedValue;
    UIColor *_thumbOnColor;
    UIColor *_trackOnColor;
    UIColor *_clearColor;
    QTMInkTouchController *_touchController;
    UIView *_trackView;
    CAShapeLayer *_trackMaskLayer;
    CALayer *_trackOnLayer;
    BOOL _isTrackingTouches;
    BOOL _shouldDisplayInk;
    BOOL _disabledTrackHasThumbGaps;
    BOOL _trackEndsAreRounded;
    BOOL _trackEndsAreInset;
    BOOL _interpolateOnOffColors;
    BOOL _continuousUpdateEvents;
    BOOL _panningAllowedOnEntireControl;
    BOOL _tapsAllowedOnThumb;
    id <QTMThumbTrackDelegate> _delegate;
    QTMColorGroup *_colorGroup;
    UIColor *_thumbOffColor;
    UIColor *_trackOffColor;
    UIColor *_thumbDisabledColor;
    UIColor *_trackDisabledColor;
    unsigned int _numDiscreteValues;
    float _value;
    float _minimumValue;
    float _maximumValue;
    float _trackHeight;
    float _thumbRadius;
    float _filledTrackAnchorValue;
    QTMThumbView *_thumbView;
}

@property(nonatomic) BOOL tapsAllowedOnThumb; // @synthesize tapsAllowedOnThumb=_tapsAllowedOnThumb;
@property(nonatomic) BOOL panningAllowedOnEntireControl; // @synthesize panningAllowedOnEntireControl=_panningAllowedOnEntireControl;
@property(nonatomic) BOOL continuousUpdateEvents; // @synthesize continuousUpdateEvents=_continuousUpdateEvents;
@property(retain, nonatomic) QTMThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) float filledTrackAnchorValue; // @synthesize filledTrackAnchorValue=_filledTrackAnchorValue;
@property(nonatomic) BOOL interpolateOnOffColors; // @synthesize interpolateOnOffColors=_interpolateOnOffColors;
@property(nonatomic) BOOL trackEndsAreInset; // @synthesize trackEndsAreInset=_trackEndsAreInset;
@property(nonatomic) BOOL trackEndsAreRounded; // @synthesize trackEndsAreRounded=_trackEndsAreRounded;
@property(nonatomic) BOOL disabledTrackHasThumbGaps; // @synthesize disabledTrackHasThumbGaps=_disabledTrackHasThumbGaps;
@property(nonatomic) BOOL shouldDisplayInk; // @synthesize shouldDisplayInk=_shouldDisplayInk;
@property(nonatomic) float thumbRadius; // @synthesize thumbRadius=_thumbRadius;
@property(nonatomic) float trackHeight; // @synthesize trackHeight=_trackHeight;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
@property(nonatomic) unsigned int numDiscreteValues; // @synthesize numDiscreteValues=_numDiscreteValues;
@property(retain, nonatomic) UIColor *trackDisabledColor; // @synthesize trackDisabledColor=_trackDisabledColor;
@property(retain, nonatomic) UIColor *thumbDisabledColor; // @synthesize thumbDisabledColor=_thumbDisabledColor;
@property(retain, nonatomic) UIColor *trackOffColor; // @synthesize trackOffColor=_trackOffColor;
@property(retain, nonatomic) UIColor *thumbOffColor; // @synthesize thumbOffColor=_thumbOffColor;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(nonatomic) __weak id <QTMThumbTrackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interruptAnimation;
- (BOOL)isTracking;
- (void)sendDiscreteChangeAction;
- (void)sendContinuousChangeAction;
- (void)setValueFromThumbPosition:(struct CGPoint)arg1 isTap:(BOOL)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)updatePanRecognizerTarget;
- (float)closestValueToTargetValue:(float)arg1;
- (float)relativeValueForValue:(float)arg1;
- (void)updateTrackMask;
- (void)updateViewsAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)updateColorsAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (void)updateThumbTrackAnimated:(BOOL)arg1 previousValue:(float)arg2 completion:(CDUnknownBlockType)arg3;
- (float)thumbPanRange;
- (float)thumbPanOffset;
- (BOOL)isThumbAtStart;
- (BOOL)shouldInkTouchControllerProcessInkTouches:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (float)valueForThumbPosition:(struct CGPoint)arg1;
- (struct CGPoint)thumbPositionForValue:(float)arg1;
@property(readonly, nonatomic) struct CGPoint thumbPosition;
@property(nonatomic) float thumbMaxRippleRadius;
- (void)setValue:(float)arg1 animated:(BOOL)arg2 userGenerated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setValue:(float)arg1 animated:(BOOL)arg2;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 colorGroup:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

