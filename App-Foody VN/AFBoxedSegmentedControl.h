//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFSegmentedControl.h"

@class NSArray;

@interface AFBoxedSegmentedControl : AFSegmentedControl
{
    NSArray *_titles;
}

@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
- (void).cxx_destruct;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setContentColor:(id)arg1;
- (int)numberOfItems;
- (id)segmentItemForIndex:(int)arg1;
- (id)initWithTitles:(id)arg1;

@end

