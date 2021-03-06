//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBaseSingleFieldPeriod.h"

@interface OrgJodaTimeDays : OrgJodaTimeBaseBaseSingleFieldPeriod
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toString;
+ (id)__annotations_parseDaysWithNSString_;
+ (void)initialize;
+ (id)parseDaysWithNSString:(id)arg1;
+ (id)standardDaysInWithOrgJodaTimeReadablePeriod:(id)arg1;
+ (id)daysInWithOrgJodaTimeReadableInterval:(id)arg1;
+ (id)daysBetweenWithOrgJodaTimeReadablePartial:(id)arg1 withOrgJodaTimeReadablePartial:(id)arg2;
+ (id)daysBetweenWithOrgJodaTimeReadableInstant:(id)arg1 withOrgJodaTimeReadableInstant:(id)arg2;
+ (id)daysWithInt:(int)arg1;
- (id)description;
- (BOOL)isLessThanWithOrgJodaTimeDays:(id)arg1;
- (BOOL)isGreaterThanWithOrgJodaTimeDays:(id)arg1;
- (id)negated;
- (id)dividedByWithInt:(int)arg1;
- (id)multipliedByWithInt:(int)arg1;
- (id)minusWithOrgJodaTimeDays:(id)arg1;
- (id)minusWithInt:(int)arg1;
- (id)plusWithOrgJodaTimeDays:(id)arg1;
- (id)plusWithInt:(int)arg1;
- (int)getDays;
- (id)toStandardDuration;
- (id)toStandardSeconds;
- (id)toStandardMinutes;
- (id)toStandardHours;
- (id)toStandardWeeks;
- (id)getPeriodType;
- (id)getFieldType;
- (id)readResolve;
- (id)initWithInt:(int)arg1;

@end

