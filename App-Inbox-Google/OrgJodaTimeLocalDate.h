//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseBaseLocal.h"

#import "JavaIoSerializable.h"
#import "OrgJodaTimeReadablePartial.h"

@class NSString, OrgJodaTimeChronology;

@interface OrgJodaTimeLocalDate : OrgJodaTimeBaseBaseLocal <OrgJodaTimeReadablePartial, JavaIoSerializable>
{
    long long iLocalMillis_;
    OrgJodaTimeChronology *iChronology_;
    // Error parsing type: Ai, name: iHash_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toString;
+ (id)__annotations_toDateMidnightWithOrgJodaTimeDateTimeZone_;
+ (id)__annotations_toDateMidnight;
+ (id)__annotations_toDateTimeAtMidnightWithOrgJodaTimeDateTimeZone_;
+ (id)__annotations_toDateTimeAtMidnight;
+ (id)__annotations_parseWithNSString_;
+ (void)initialize;
+ (id)fromDateFieldsWithJavaUtilDate:(id)arg1;
+ (id)fromCalendarFieldsWithJavaUtilCalendar:(id)arg1;
+ (id)parseWithNSString:(id)arg1 withOrgJodaTimeFormatDateTimeFormatter:(id)arg2;
+ (id)parseWithNSString:(id)arg1;
+ (id)nowWithOrgJodaTimeChronology:(id)arg1;
+ (id)nowWithOrgJodaTimeDateTimeZone:(id)arg1;
+ (id)now;
- (void)dealloc;
- (id)toStringWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)toStringWithNSString:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)dayOfWeek;
- (id)dayOfMonth;
- (id)dayOfYear;
- (id)weekOfWeekyear;
- (id)monthOfYear;
- (id)weekyear;
- (id)year;
- (id)yearOfEra;
- (id)yearOfCentury;
- (id)centuryOfEra;
- (id)era;
- (id)withDayOfWeekWithInt:(int)arg1;
- (id)withDayOfMonthWithInt:(int)arg1;
- (id)withDayOfYearWithInt:(int)arg1;
- (id)withWeekOfWeekyearWithInt:(int)arg1;
- (id)withMonthOfYearWithInt:(int)arg1;
- (id)withWeekyearWithInt:(int)arg1;
- (id)withYearWithInt:(int)arg1;
- (id)withYearOfCenturyWithInt:(int)arg1;
- (id)withYearOfEraWithInt:(int)arg1;
- (id)withCenturyOfEraWithInt:(int)arg1;
- (id)withEraWithInt:(int)arg1;
- (int)getDayOfWeek;
- (int)getDayOfMonth;
- (int)getDayOfYear;
- (int)getWeekOfWeekyear;
- (int)getMonthOfYear;
- (int)getWeekyear;
- (int)getYear;
- (int)getYearOfCentury;
- (int)getYearOfEra;
- (int)getCenturyOfEra;
- (int)getEra;
- (id)propertyWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (id)minusDaysWithInt:(int)arg1;
- (id)minusWeeksWithInt:(int)arg1;
- (id)minusMonthsWithInt:(int)arg1;
- (id)minusYearsWithInt:(int)arg1;
- (id)minusWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)plusDaysWithInt:(int)arg1;
- (id)plusWeeksWithInt:(int)arg1;
- (id)plusMonthsWithInt:(int)arg1;
- (id)plusYearsWithInt:(int)arg1;
- (id)plusWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)withPeriodAddedWithOrgJodaTimeReadablePeriod:(id)arg1 withInt:(int)arg2;
- (id)withFieldAddedWithOrgJodaTimeDurationFieldType:(id)arg1 withInt:(int)arg2;
- (id)withFieldWithOrgJodaTimeDateTimeFieldType:(id)arg1 withInt:(int)arg2;
- (id)withFieldsWithOrgJodaTimeReadablePartial:(id)arg1;
- (id)withLocalMillisWithLong:(long long)arg1;
- (id)toDate;
- (id)toIntervalWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)toInterval;
- (id)toDateTimeWithOrgJodaTimeLocalTime:(id)arg1 withOrgJodaTimeDateTimeZone:(id)arg2;
- (id)toDateTimeWithOrgJodaTimeLocalTime:(id)arg1;
- (id)toLocalDateTimeWithOrgJodaTimeLocalTime:(id)arg1;
- (id)toDateMidnightWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)toDateMidnight;
- (id)toDateTimeAtCurrentTimeWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)toDateTimeAtCurrentTime;
- (id)toDateTimeAtMidnightWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)toDateTimeAtMidnight;
- (id)toDateTimeAtStartOfDayWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)toDateTimeAtStartOfDay;
- (int)compareToWithId:(id)arg1;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)getChronology;
- (long long)getLocalMillis;
- (BOOL)isSupportedWithOrgJodaTimeDurationFieldType:(id)arg1;
- (BOOL)isSupportedWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (int)getWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (int)getValueWithInt:(int)arg1;
- (id)getFieldWithInt:(int)arg1 withOrgJodaTimeChronology:(id)arg2;
- (int)size;
- (id)readResolve;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withOrgJodaTimeChronology:(id)arg4;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithId:(id)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithId:(id)arg1 withOrgJodaTimeDateTimeZone:(id)arg2;
- (id)initWithId:(id)arg1;
- (id)initWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;
- (id)initWithLong:(long long)arg1 withOrgJodaTimeDateTimeZone:(id)arg2;
- (id)initWithLong:(long long)arg1;
- (id)initWithOrgJodaTimeChronology:(id)arg1;
- (id)initWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

