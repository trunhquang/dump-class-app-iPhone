//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFView.h"

@class CAShapeLayer, UIColor;

@interface AFBrushSizeView : AFView
{
    BOOL _shouldHighlight;
    float _radius;
    UIColor *_color;
    CAShapeLayer *_mainCircleLayer;
    CAShapeLayer *_highlightLayer;
}

@property(nonatomic) BOOL shouldHighlight; // @synthesize shouldHighlight=_shouldHighlight;
@property(retain, nonatomic) CAShapeLayer *highlightLayer; // @synthesize highlightLayer=_highlightLayer;
@property(retain, nonatomic) CAShapeLayer *mainCircleLayer; // @synthesize mainCircleLayer=_mainCircleLayer;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) float radius; // @synthesize radius=_radius;
- (void).cxx_destruct;
- (float)viewRadius;
- (void)addDonutPathToContext:(struct CGContext *)arg1 withOuterRadius:(float)arg2 width:(float)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)prepareView;

@end
