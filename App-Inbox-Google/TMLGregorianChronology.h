//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TMLGregorianChronology : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)daysBeforeMonthWithInt:(int)arg1 withInt:(int)arg2;
+ (int)dayOfYearWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)doomsdayForYearWithInt:(int)arg1;
+ (int)dayOfWeekWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)weeksInYearWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)weeksInYearWithTMLDate:(id)arg1 withInt:(int)arg2;
+ (int)weeksInYearWithTMLDateTime:(id)arg1 withInt:(int)arg2;
+ (int)monthLengthWithInt:(int)arg1 withInt:(int)arg2;
+ (int)monthLengthWithTMLDate:(id)arg1;
+ (int)monthLengthWithTMLDateTime:(id)arg1;
+ (int)yearLengthWithInt:(int)arg1;
+ (int)yearLengthWithTMLDate:(id)arg1;
+ (int)yearLengthWithTMLDateTime:(id)arg1;
+ (BOOL)isLeapYearWithInt:(int)arg1;
+ (BOOL)isLeapYearWithTMLDate:(id)arg1;
+ (BOOL)isLeapYearWithTMLDateTime:(id)arg1;
- (id)init;

@end

