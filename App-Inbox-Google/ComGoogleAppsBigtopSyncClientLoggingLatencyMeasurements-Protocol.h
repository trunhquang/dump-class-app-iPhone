//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatLoggingEventsFlushable.h"
#import "ComGoogleAppsXplatLoggingEventsStoppable.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol ComGoogleAppsBigtopSyncClientLoggingLatencyMeasurements <ComGoogleAppsXplatLoggingEventsFlushable, ComGoogleAppsXplatLoggingEventsStoppable, NSObject, JavaObject>
- (void)recordFailureDurationWithInt:(int)arg1 withInt:(int)arg2;
- (void)recordDurationWithInt:(int)arg1 withInt:(int)arg2;
- (void)recordFailureWithInt:(int)arg1;
- (void)recordStartWithInt:(int)arg1;
@end

