//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTRecurrenceFrequencyEnum;

@protocol JBTRecurrence <NSObject, JavaObject>
- (id <JavaUtilList>)getMonthList;
- (id <JavaUtilList>)getMonthdayList;
- (id <JavaUtilList>)getWeekdayList;
- (BOOL)hasUntilSec;
- (long long)getUntilSec;
- (BOOL)hasCount;
- (int)getCount;
- (int)getInterval;
- (JBTRecurrenceFrequencyEnum *)getFrequency;
- (id <JBTId>)getMasterTaskId;
- (id <JBTId>)getId;
@end

