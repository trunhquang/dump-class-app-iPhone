//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel, UITapGestureRecognizer;

@interface SPNuxView : UIView
{
    float _leftWidth;
    float _rightWidth;
    float _arrowMidpoint;
    BOOL _pointingUp;
    UITapGestureRecognizer *_tapperGestureRecognizer;
    id <SPNuxViewDelegate> _delegate;
    UILabel *_textLabel;
    struct CGPoint _focalPoint;
}

@property(nonatomic) struct CGPoint focalPoint; // @synthesize focalPoint=_focalPoint;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) __weak id <SPNuxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)rotateTextNone;
- (void)rotateTextHalfCircle;
- (void)bringNuxToFront;
- (void)animateOffset:(struct CGPoint)arg1 andDuration:(double)arg2;
- (void)fadeOut;
- (void)bounce2AnimationStopped;
- (void)bounce1AnimationStopped;
- (void)kickOffFadeIn;
- (void)fadeIntoView:(id)arg1;
- (void)dismiss;
- (void)showInView:(id)arg1;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;
- (void)onTap:(id)arg1;
- (void)dealloc;
- (id)initWithPoint:(struct CGPoint)arg1 message:(id)arg2 pointingUp:(BOOL)arg3 delegate:(id)arg4;

@end

