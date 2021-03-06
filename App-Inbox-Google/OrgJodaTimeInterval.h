//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBaseInterval.h"

#import "JavaIoSerializable.h"
#import "OrgJodaTimeReadableInterval.h"

@class NSString;

@interface OrgJodaTimeInterval : OrgJodaTimeBaseBaseInterval <OrgJodaTimeReadableInterval, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)parseWithNSString:(id)arg1;
- (id)withPeriodBeforeEndWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)withPeriodAfterStartWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)withDurationBeforeEndWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)withDurationAfterStartWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)withEndWithOrgJodaTimeReadableInstant:(id)arg1;
- (id)withEndMillisWithLong:(long long)arg1;
- (id)withStartWithOrgJodaTimeReadableInstant:(id)arg1;
- (id)withStartMillisWithLong:(long long)arg1;
- (id)withChronologyWithOrgJodaTimeChronology:(id)arg1;
- (BOOL)abutsWithOrgJodaTimeReadableInterval:(id)arg1;
- (id)gapWithOrgJodaTimeReadableInterval:(id)arg1;
- (id)overlapWithOrgJodaTimeReadableInterval:(id)arg1;
- (id)toInterval;
- (id)initWithId:(id)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithId:(id)arg1;
- (id)initWithOrgJodaTimeReadablePeriod:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadablePeriod:(id)arg2;
- (id)initWithOrgJodaTimeReadableDuration:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableDuration:(id)arg2;
- (id)initWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimeChronology:(id)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withOrgJodaTimeDateTimeZone:(id)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

