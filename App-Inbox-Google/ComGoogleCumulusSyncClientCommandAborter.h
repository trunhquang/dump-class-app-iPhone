//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonUtilEventBus;

@interface ComGoogleCumulusSyncClientCommandAborter : NSObject
{
    id <JavaUtilSet> abortInProgress_;
    id <JavaUtilSet> objectsRefetched_;
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    ComGoogleCumulusCommonUtilEventBus *batchStatusBus_;
    id <ComGoogleCumulusCommonClientRetryPolicy> commandRetryPolicy_;
    id <JCGCuWorkQueue> workQueue_;
}

+ (void)initialize;
- (void)dealloc;
- (void)abortPendingCommandsWithNSString:(id)arg1 withComGoogleCumulusCommandCommandProto_Error:(id)arg2;
- (BOOL)isAbortInProgressWithNSString:(id)arg1;
- (BOOL)clearAbortRefetchWithNSString:(id)arg1;
- (BOOL)isAbortRefetchWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusSyncClientObjectManager:(id)arg1 withComGoogleCumulusCommonUtilEventBus:(id)arg2 withComGoogleCumulusCommonClientRetryPolicy:(id)arg3 withJCGCuWorkQueue:(id)arg4;

@end

