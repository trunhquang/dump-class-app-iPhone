//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class UIColor;

@interface FBRoundedRectImageSpec : FBValueObject <NSCopying>
{
    float _topLeftRadius;
    float _topRightRadius;
    float _bottomLeftRadius;
    float _bottomRightRadius;
    UIColor *_innerColor;
    UIColor *_outerColor;
    UIColor *_innerStrokeColor;
    float _innerStrokeWidth;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(readonly, nonatomic) float innerStrokeWidth; // @synthesize innerStrokeWidth=_innerStrokeWidth;
@property(readonly, copy, nonatomic) UIColor *innerStrokeColor; // @synthesize innerStrokeColor=_innerStrokeColor;
@property(readonly, copy, nonatomic) UIColor *outerColor; // @synthesize outerColor=_outerColor;
@property(readonly, copy, nonatomic) UIColor *innerColor; // @synthesize innerColor=_innerColor;
@property(readonly, nonatomic) float bottomRightRadius; // @synthesize bottomRightRadius=_bottomRightRadius;
@property(readonly, nonatomic) float bottomLeftRadius; // @synthesize bottomLeftRadius=_bottomLeftRadius;
@property(readonly, nonatomic) float topRightRadius; // @synthesize topRightRadius=_topRightRadius;
@property(readonly, nonatomic) float topLeftRadius; // @synthesize topLeftRadius=_topLeftRadius;
- (void).cxx_destruct;
- (id)initWithTopLeftRadius:(float)arg1 topRightRadius:(float)arg2 bottomLeftRadius:(float)arg3 bottomRightRadius:(float)arg4 innerColor:(id)arg5 outerColor:(id)arg6 innerStrokeColor:(id)arg7 innerStrokeWidth:(float)arg8 contentInset:(struct UIEdgeInsets)arg9;

@end
