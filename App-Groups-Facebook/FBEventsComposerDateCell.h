//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class FBCalendarDateContextRow;

@interface FBEventsComposerDateCell : UICollectionViewCell
{
    FBCalendarDateContextRow *_startDateContextRow;
    FBCalendarDateContextRow *_endDateContextRow;
}

@property(readonly, nonatomic) FBCalendarDateContextRow *endDateContextRow; // @synthesize endDateContextRow=_endDateContextRow;
@property(readonly, nonatomic) FBCalendarDateContextRow *startDateContextRow; // @synthesize startDateContextRow=_startDateContextRow;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

