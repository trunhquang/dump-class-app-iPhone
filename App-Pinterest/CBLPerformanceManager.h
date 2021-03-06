//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_semaphore>, NSTimer;

@interface CBLPerformanceManager : NSObject
{
    NSMutableArray *_metrics;
    NSObject<OS_dispatch_semaphore> *_lockSemaphore;
    NSTimer *_uploadTimer;
}

+ (id)sharedManager;
+ (BOOL)useSubmetricsEndpoint;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *lockSemaphore; // @synthesize lockSemaphore=_lockSemaphore;
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
- (void).cxx_destruct;
- (id)currentMetrics;
- (void)uploadMetrics;
- (id)startMetricWithMetricClass:(Class)arg1 completion:(CDUnknownBlockType)arg2;
- (id)startMetricWithMetricClass:(Class)arg1;
- (void)processMetricType:(unsigned int)arg1;
- (void)processNetworkRequestOperation:(id)arg1;
- (void)processEvent:(id)arg1;
- (void)processBackground:(id)arg1;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

