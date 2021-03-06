//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class CAShapeLayer, UIColor, UIImageView;

@interface PSPDFColorView : UIControl
{
    BOOL _markTransparentColor;
    BOOL _drawCheckerPattern;
    UIColor *_color;
    int _borderStyle;
    float _cornerRadius;
    CAShapeLayer *_touchDownLayer;
    UIImageView *_checkmarkView;
}

+ (id)keyPathsForValuesAffectingRedraw;
+ (struct CGPath *)newPathForBorderStyle:(int)arg1 boundingRect:(struct CGRect)arg2 cornerRadious:(float)arg3;
+ (id)colorViewWithColor:(id)arg1 borderStyle:(int)arg2;
@property(retain, nonatomic) UIImageView *checkmarkView; // @synthesize checkmarkView=_checkmarkView;
@property(retain, nonatomic) CAShapeLayer *touchDownLayer; // @synthesize touchDownLayer=_touchDownLayer;
@property(nonatomic) float cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) BOOL drawCheckerPattern; // @synthesize drawCheckerPattern=_drawCheckerPattern;
@property(nonatomic) BOOL markTransparentColor; // @synthesize markTransparentColor=_markTransparentColor;
@property(nonatomic) int borderStyle; // @synthesize borderStyle=_borderStyle;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

