//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeFieldDecoratedDateTimeField.h"

@class OrgJodaTimeChronoBasicChronology;

@interface OrgJodaTimeChronoGJYearOfEraDateTimeField : OrgJodaTimeFieldDecoratedDateTimeField
{
    OrgJodaTimeChronoBasicChronology *iChronology_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)readResolve;
- (long long)remainderWithLong:(long long)arg1;
- (long long)roundCeilingWithLong:(long long)arg1;
- (long long)roundFloorWithLong:(long long)arg1;
- (int)getMaximumValue;
- (int)getMinimumValue;
- (long long)setWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)getDifferenceAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getDifferenceWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)addWrapFieldWithOrgJodaTimeReadablePartial:(id)arg1 withInt:(int)arg2 withIntArray:(id)arg3 withInt:(int)arg4;
- (long long)addWrapFieldWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (int)getWithLong:(long long)arg1;
- (id)initWithOrgJodaTimeDateTimeField:(id)arg1 withOrgJodaTimeChronoBasicChronology:(id)arg2;

@end

