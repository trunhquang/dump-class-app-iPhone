//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFContentCell.h"

@class UIImageView;

@interface AFContentPackGetMoreCell : AFContentCell
{
    UIImageView *_circleImageView;
}

@property(retain, nonatomic) UIImageView *circleImageView; // @synthesize circleImageView=_circleImageView;
- (void).cxx_destruct;
- (void)adjustSelectedState;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) UIImageView *previewView;

@end
