//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBRecentActivitySentinelSettings, NSDate, NSDateFormatter, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface FBRecentActivitySentinel : NSObject
{
    NSDate *_lastPersistToDiskTime;
    NSMutableArray *_recentEventsRingBuffer;
    NSMutableDictionary *_recentEventsRingBufferContainer;
    NSObject<OS_dispatch_queue> *_recentEventsRingBufferContainerSyncQueue;
    FBRecentActivitySentinelSettings *_settings;
    NSDateFormatter *_dateFormatter;
    NSObject<OS_dispatch_queue> *_saveToDiskQueue;
}

- (void).cxx_destruct;
- (void)recordEvent:(id)arg1 module:(id)arg2 extra:(id)arg3;
- (void)significantEventDidOccur:(id)arg1 module:(id)arg2 extra:(id)arg3;
- (void)recentActivitySentinelOnlyEventDidOccur:(id)arg1 extra:(id)arg2;
- (void)significantEventDidOccur:(id)arg1 module:(id)arg2 extraBlock:(CDUnknownBlockType)arg3;
- (void)addSignificantEventToRecentEventsRingBufferContainer:(id)arg1 module:(id)arg2 extra:(id)arg3 extraBlock:(CDUnknownBlockType)arg4;
- (id)customizeActivitiesBeforeReport:(id)arg1;
- (id)recentActivitiesFromPreviousSession;
- (id)recentActivitiesFromDisk;
- (id)recentActivitiesFromCurrentSession:(BOOL)arg1;
- (BOOL)timeIsWithinTimeInterval:(id)arg1 timeInterval:(double)arg2;
- (id)arrayOfStringsWithEvaluatedExtraBlocks:(id)arg1;
- (id)arrayOfStrings:(id)arg1;
- (id)initWithSettings:(id)arg1;
- (void)moveSavedFileToPrevious;
- (id)previousRecentActivitiesFilename;
- (id)recentActivitiesFilename;

@end
