//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOPopoverView.h"

@interface GOOPopoverMenuView : GOOPopoverView
{
    unsigned int _anchorCorner;
}

+ (Class)layerClass;
- (struct UIEdgeInsets)frameInsets;
- (void)updateAnchorCornerForRect:(struct CGRect)arg1;
- (void)pointAtRect:(struct CGRect)arg1 arrowDirections:(unsigned int)arg2;
- (void)animateOut;
- (void)prepareToAnimateOut;
- (void)animateInWithDuration:(double)arg1;
- (BOOL)shouldDisplayArrow;
- (void)pointAtView:(id)arg1 withOffset:(struct CGSize)arg2 anchorCorner:(unsigned int)arg3;
- (id)shadowLayer;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;

@end

