//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NIFormElementCell.h"

@class UISegmentedControl;

@interface NISegmentedControlFormElementCell : NIFormElementCell
{
    UISegmentedControl *_segmentedControl;
}

@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
- (void).cxx_destruct;
- (void)selectedSegmentDidChangeValue;
- (BOOL)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

