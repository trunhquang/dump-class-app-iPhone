//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonUtilEventBus;

@interface ComGoogleCumulusQueryClientWorkerCQBatchMonitor : NSObject
{
    id <JavaUtilMap> clientIdToBatchStatus_;
    id <JavaUtilMap> batchIdToClientId_;
    id <JavaUtilMap> batchIdToQueryIds_;
    id <JavaUtilMap> queryIdToBatchIds_;
    id <JavaUtilMap> batchIdToUpdates_;
    id <JavaUtilMap> batchIdToCompleteSpan_;
    id <JavaUtilMap> batchIdToCollectSpan_;
    id <JavaUtilMap> batchIdToWaitSpan_;
    id <JavaUtilSet> waitingBatches_;
    ComGoogleCumulusCommonUtilEventBus *notifyBus_;
}

+ (void)initialize;
- (void)dealloc;
- (void)createBatchStatusUpdateWithNSString:(id)arg1;
- (int)getBatchResultCountWithNSString:(id)arg1;
- (id)description;
- (id)removeBatchStatusUpdatesWithNSString:(id)arg1;
- (BOOL)hasBatchStatusUpdatesWithNSString:(id)arg1;
- (void)clearResultWithNSString:(id)arg1;
- (void)addResultWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)stopResultCollectionWithNSString:(id)arg1;
- (void)startResultCollectionWithNSString:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3 withComGoogleCumulusApiMetricsSpan:(id)arg4;
- (int)getMonitoredCqResultCount;
- (int)getMonitoredBatchCount;
- (id)initWithComGoogleCumulusCommonUtilEventBus:(id)arg1;

@end

