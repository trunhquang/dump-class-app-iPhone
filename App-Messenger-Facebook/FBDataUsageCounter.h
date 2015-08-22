//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBDataUsageStats, NSObject<OS_dispatch_queue>, NSURL;

@interface FBDataUsageCounter : NSObject
{
    NSURL *_URL;
    FBDataUsageStats *_dataUsageStats;
    unsigned long long _dataSinceBeginning;
    unsigned long long _dataSinceYesterday;
    unsigned long long _dataSinceLastMonth;
    unsigned long long _dataPrefetchedSinceBeginning;
    unsigned long long _dataPrefetchedSinceYesterday;
    unsigned long long _dataPrefetchedSinceLastMonth;
    unsigned long long _cellDataSinceBeginning;
    unsigned long long _cellDataSinceYesterday;
    unsigned long long _cellDataSinceLastMonth;
    unsigned long long _dataWatchedSinceBeginning;
    unsigned long long _dataWatchedSinceYesterday;
    unsigned long long _dataWatchedSinceLastMonth;
    unsigned long long _dataPrefetchedWatchedSinceBeginning;
    unsigned long long _dataPrefetchedWatchedSinceYesterday;
    unsigned long long _dataPrefetchedWatchedSinceLastMonth;
    double _timeSinceBeginning;
    double _timeSinceYesterday;
    double _timeSinceLastMonth;
    id <FBPerforming> _performer;
    NSObject<OS_dispatch_queue> *_scheduleQueue;
    BOOL _scheduledSaving;
}

@property(nonatomic) unsigned long long dataWatchedSinceLastMonth; // @synthesize dataWatchedSinceLastMonth=_dataWatchedSinceLastMonth;
@property(nonatomic) unsigned long long dataWatchedSinceBeginning; // @synthesize dataWatchedSinceBeginning=_dataWatchedSinceBeginning;
- (void).cxx_destruct;
- (void)_saveAsync:(BOOL)arg1 wasReset:(BOOL)arg2;
- (void)_resetAndLogForBeginningOfDayIfNeeded;
- (void)_resetForBeginningOfMonthIfNeeded;
- (void)_logDailyDataUsage;
- (void)_scheduleNextSave;
- (void)increaseDataWatched:(unsigned long long)arg1 prefetchWatched:(unsigned long long)arg2;
- (void)increaseTime:(double)arg1;
- (void)increaseDownloadedData:(unsigned long long)arg1 isPrefetching:(BOOL)arg2 isCellular:(BOOL)arg3;
@property(readonly, nonatomic) double timeSinceLastMonth;
@property(readonly, nonatomic) double timeSinceBeginning;
- (unsigned long long)dataPrefetchedWatchedSinceLastMonth;
- (unsigned long long)dataPrefetchedWatchedSinceBeginning;
- (unsigned long long)cellDataSinceLastMonth;
- (unsigned long long)cellDataSinceBeginning;
- (unsigned long long)dataPrefetchedSinceLastMonth;
- (unsigned long long)dataPrefetchedSinceBeginning;
@property(readonly, nonatomic) unsigned long long dataSinceLastMonth;
@property(readonly, nonatomic) unsigned long long dataSinceBeginning;
- (id)initWithURL:(id)arg1 scheduleQueue:(id)arg2 performer:(id)arg3;
- (void)reset;

@end
