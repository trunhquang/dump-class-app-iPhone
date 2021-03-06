//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgJodaTimeBaseAbstractInstant.h"

#import "OrgJodaTimeReadableDateTime.h"

@class NSString;

@interface OrgJodaTimeBaseAbstractDateTime : OrgJodaTimeBaseAbstractInstant <OrgJodaTimeReadableDateTime>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)toStringWithNSString:(id)arg1 withJavaUtilLocale:(id)arg2;
- (id)toStringWithNSString:(id)arg1;
- (id)toGregorianCalendar;
- (id)toCalendarWithJavaUtilLocale:(id)arg1;
- (int)getMillisOfSecond;
- (int)getMillisOfDay;
- (int)getSecondOfMinute;
- (int)getSecondOfDay;
- (int)getMinuteOfHour;
- (int)getMinuteOfDay;
- (int)getHourOfDay;
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
- (int)getWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

