//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBTextView.h"

@interface FBNavigationBarSearchTextField_DEPRECATEDTextView : FBTextView
{
    struct UIEdgeInsets _hitTestSlop;
}

@property struct UIEdgeInsets hitTestSlop; // @synthesize hitTestSlop=_hitTestSlop;
- (float)widthWithText:(id)arg1;
@property(readonly, nonatomic) float leftPadding;
- (BOOL)isAboveMaximumHeightThreshold;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

