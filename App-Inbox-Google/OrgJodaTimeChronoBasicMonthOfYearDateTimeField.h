//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeFieldImpreciseDateTimeField.h"

@class OrgJodaTimeChronoBasicChronology;

@interface OrgJodaTimeChronoBasicMonthOfYearDateTimeField : OrgJodaTimeFieldImpreciseDateTimeField
{
    OrgJodaTimeChronoBasicChronology *iChronology_;
    int iMax_;
    int iLeapMonth_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)readResolve;
- (long long)remainderWithLong:(long long)arg1;
- (long long)roundFloorWithLong:(long long)arg1;
- (int)getMaximumValue;
- (int)getMinimumValue;
- (id)getLeapDurationField;
- (int)getLeapAmountWithLong:(long long)arg1;
- (BOOL)isLeapWithLong:(long long)arg1;
- (id)getRangeDurationField;
- (long long)setWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)getDifferenceAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWrapFieldWithLong:(long long)arg1 withInt:(int)arg2;
- (id)addWithOrgJodaTimeReadablePartial:(id)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withInt:(int)arg4;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (int)getWithLong:(long long)arg1;
- (BOOL)isLenient;
- (id)initWithOrgJodaTimeChronoBasicChronology:(id)arg1 withInt:(int)arg2;

@end

