//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CubicBezierCurve : NSObject
{
    struct CGPoint controlPoint1_;
    struct CGPoint controlPoint2_;
    struct CGPoint controlPoint3_;
    struct CGPoint controlPoint4_;
}

+ (id)bezierCurveFromTimingFunction:(id)arg1;
- (struct CGPoint)adjustedPoint:(struct CGPoint)arg1 forNewControlPoint4:(struct CGPoint)arg2;
- (struct CGPoint)adjustedPoint:(struct CGPoint)arg1 forNewControlPoint1:(struct CGPoint)arg2;
- (float)tValueForY:(float)arg1 minT:(float)arg2 maxT:(float)arg3;
- (float)tValueForX:(float)arg1 minT:(float)arg2 maxT:(float)arg3;
- (id)timingFunction;
- (void)moveControlPoint4To:(struct CGPoint)arg1;
- (void)moveControlPoint1To:(struct CGPoint)arg1;
- (id)splitBezierCurvesAtX:(float)arg1;
- (float)TValueForDerivativeValue:(float)arg1;
- (float)derivativeValueAtT:(float)arg1;
- (float)xValueForY:(float)arg1;
- (float)yValueForX:(float)arg1;
- (float)yValueForT:(float)arg1;
- (float)xValueForT:(float)arg1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2 controlPoint3:(struct CGPoint)arg3 controlPoint4:(struct CGPoint)arg4;

@end

