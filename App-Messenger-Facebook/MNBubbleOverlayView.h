//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIImageView;

@interface MNBubbleOverlayView : UIControl
{
    UIImageView *_cornerImageViews[4];
}

- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (void)layoutSubviews;
- (void)setBubbleAttributes:(struct MNBubbleViewAttributes)arg1 forCorners:(unsigned int)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
