//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCaribouTasksDateTime_DateRangeEnum, ComGoogleCaribouTasksDateTime_PeriodEnum, ComGoogleCaribouTasksDateTime_Time;

@protocol ComGoogleCaribouTasksDateTimeOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (BOOL)getAllDay;
- (BOOL)hasAllDay;
- (BOOL)getUnspecifiedFutureTime;
- (BOOL)hasUnspecifiedFutureTime;
- (long long)getAbsoluteTimeMs;
- (BOOL)hasAbsoluteTimeMs;
- (ComGoogleCaribouTasksDateTime_DateRangeEnum *)getDateRange;
- (BOOL)hasDateRange;
- (ComGoogleCaribouTasksDateTime_PeriodEnum *)getPeriod;
- (BOOL)hasPeriod;
- (ComGoogleCaribouTasksDateTime_Time *)getTime;
- (BOOL)hasTime;
- (int)getDay;
- (BOOL)hasDay;
- (int)getMonth;
- (BOOL)hasMonth;
- (int)getYear;
- (BOOL)hasYear;
@end

