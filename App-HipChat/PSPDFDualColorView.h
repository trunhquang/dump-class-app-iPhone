//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface PSPDFDualColorView : UIView
{
    BOOL _drawCheckerPattern;
    BOOL _markTransparentColor;
    BOOL _renderSecondaryColor;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    UIColor *_borderColor;
    float _radius;
    float _overlap;
    float _gap;
}

@property(nonatomic) BOOL renderSecondaryColor; // @synthesize renderSecondaryColor=_renderSecondaryColor;
@property(nonatomic) BOOL markTransparentColor; // @synthesize markTransparentColor=_markTransparentColor;
@property(nonatomic) BOOL drawCheckerPattern; // @synthesize drawCheckerPattern=_drawCheckerPattern;
@property(nonatomic) float gap; // @synthesize gap=_gap;
@property(nonatomic) float overlap; // @synthesize overlap=_overlap;
@property(nonatomic) float radius; // @synthesize radius=_radius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(retain, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (void).cxx_destruct;
- (int)findIntersectionOfCircle:(struct CGPoint)arg1 circle:(struct CGPoint)arg2 radius:(float)arg3 sol1:(struct CGPoint *)arg4 sol2:(struct CGPoint *)arg5;
- (id)circlePaths;
- (id)diagonalLineForPath:(id)arg1;
- (void)drawIndicatorForColor:(id)arg1 withPath:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
