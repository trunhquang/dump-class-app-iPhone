//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAnalyticsTimeSpentDelegate.h"
#import "FBReachabilityListener.h"
#import "FBRealtimeAnalyticsLogger.h"
#import "FBSoftErrorReporter.h"

@class FBAnalyticsContext, FBAnalyticsLocalStorageSetter, FBAnalyticsTimeSpent, FBRadioTechnologyFetcher, FBReachabilityAnnouncer, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface FBAnalytics : NSObject <FBReachabilityListener, FBRealtimeAnalyticsLogger, FBSoftErrorReporter, FBAnalyticsTimeSpentDelegate>
{
    id <FBAnalyticsConfiguration> _configuration;
    NSObject<OS_dispatch_queue> *_queue;
    FBAnalyticsContext *_contextRegular;
    FBAnalyticsContext *_contextLowLatencyLowLoss;
    NSString *_userFBID;
    CDUnknownBlockType _requestTimeSpentPingBlock;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_navigationObservers;
    NSMutableDictionary *_navigationObserverCount;
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    id _reachabilityAnnouncerSubscription;
    unsigned int _reachabilityState;
    id _radioTechnologyStatusObserver;
    NSString *_radioTechnology;
    FBRadioTechnologyFetcher *_radioTechnologyFetcher;
    double _lastActivityTime;
    FBAnalyticsLocalStorageSetter *_localStorageSetter;
    struct Mutex _sampledLock;
    BOOL _sampled;
    NSMutableArray *_blocksToExecuteWhenSampledSet;
    // Error parsing type: {atomic<signed char>="__a_"Ac}, name: _queueSuspended
    struct FBAnalyticsModuleStack _moduleStack;
    id <FBBackgroundStateManaging> _backgroundStateManager;
    NSString *_lastNavigationTapPoint;
    FBAnalyticsTimeSpent *_timeSpent;
}

+ (void)resetSharedAnalytics;
+ (void)setSharedAnalytics:(id)arg1;
+ (BOOL)hasSharedAnalytics;
+ (id)sharedAnalytics;
@property(retain, nonatomic) FBAnalyticsTimeSpent *timeSpent; // @synthesize timeSpent=_timeSpent;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *lastNavigationTapPoint; // @synthesize lastNavigationTapPoint=_lastNavigationTapPoint;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)syncFBAnalyticsQueue;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)_updateExceptionShownModule:(id)arg1;
- (void)_updateExceptionTopViewController:(id)arg1 moduleName:(id)arg2;
- (void)executeOnEveryContext:(CDUnknownBlockType)arg1;
- (id)contextForChannel:(int)arg1;
- (BOOL)createDirectoryAtPath:(id)arg1 fileManager:(id)arg2;
- (id)newContextWithConfiguration:(id)arg1 logDirectoryPath:(id)arg2 networkPriority:(unsigned int)arg3 processingQueue:(id)arg4 batchLogCountThreshold:(unsigned int)arg5 maxNetworkErrorRetryCount:(unsigned int)arg6 channelDescription:(id)arg7;
- (void)logPerfRequest:(id)arg1 withURL:(id)arg2 requestBeginTime:(double)arg3 responseEndTime:(double)arg4 requestType:(id)arg5 requestComponent:(id)arg6 bytesUp:(long long)arg7 bytesDown:(long long)arg8 expectedBytesDownOnWire:(long long)arg9 success:(BOOL)arg10;
- (void)logNetworkRequestWithURL:(id)arg1 queueAddTime:(double)arg2 requestBeginTime:(double)arg3 requestEndTime:(double)arg4 responseBeginTime:(double)arg5 responseEndTime:(double)arg6 bytesUp:(long long)arg7 bytesDown:(long long)arg8 expectedBytesDownOnWire:(long long)arg9 success:(BOOL)arg10;
- (void)resumeNonRealtimeLogUpload;
- (void)pauseNonRealtimeLogUploadTTL:(double)arg1;
- (void)willHandleException:(id)arg1;
- (void)systemClockDidChangeNotification:(id)arg1;
- (void)processTouchEvent:(double)arg1;
- (void)unobserveNavigationController:(id)arg1;
- (void)observeNavigationController:(id)arg1;
- (void)logNavigationEventFromViewController:(id)arg1 toViewController:(id)arg2 depth:(unsigned int)arg3 animationDuration:(double)arg4;
- (void)logNavigationEventFromViewController:(id)arg1 toViewController:(id)arg2 depth:(unsigned int)arg3;
- (void)userAttemptedLogOut;
- (void)logManualRefresh:(id)arg1 className:(id)arg2 uuid:(id)arg3;
- (void)logContent:(id)arg1 className:(id)arg2 uuid:(id)arg3 state:(unsigned int)arg4 extra:(id)arg5;
- (void)_unobserveRadioTechnologyStatus;
- (void)_observeRadioTechnologyStatus;
- (void)_logReachabilityState:(unsigned int)arg1 radioTechnology:(id)arg2;
- (void)_unobserveReachabilityStatus;
- (void)_observeReachabilityStatus;
- (void)logModuleVisibility:(id)arg1 moduleViewController:(id)arg2 className:(id)arg3 otherModule:(id)arg4 otherClassName:(id)arg5 uuid:(id)arg6 show:(BOOL)arg7 extra:(id)arg8;
- (void)observeEverything;
- (void)analyticsTimeSpent:(id)arg1 didProduceImmediateActiveSecondsData:(id)arg2;
- (void)analyticsTimeSpent:(id)arg1 didProduceBitArray:(id)arg2;
- (void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned int)arg4 value:(double)arg5 extraBlock:(CDUnknownBlockType)arg6;
- (void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 value:(double)arg4 extraBlock:(CDUnknownBlockType)arg5;
- (void)logEvent:(id)arg1 module:(id)arg2 value:(double)arg3 extraBlock:(CDUnknownBlockType)arg4;
- (void)logEvent:(id)arg1 module:(id)arg2 value:(double)arg3;
- (void)_logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3 uuid:(id)arg4;
- (void)logCounter:(id)arg1 value:(id)arg2 eventName:(id)arg3;
- (void)logCounter:(id)arg1 value:(id)arg2;
- (void)logCounter:(id)arg1;
- (unsigned int)_wrapArc4RandomUniform:(unsigned int)arg1;
- (unsigned int)samplingFrequencyForEvent:(id)arg1 tag:(id)arg2;
- (void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned int)arg4 value:(id)arg5 extraBlock:(CDUnknownBlockType)arg6 timestamp:(double)arg7;
- (void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraBlock:(CDUnknownBlockType)arg4 timestamp:(double)arg5;
- (void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 samplingFreq:(unsigned int)arg4 extraBlock:(CDUnknownBlockType)arg5;
- (void)logEvent:(id)arg1 module:(id)arg2 uuid:(id)arg3 extraBlock:(CDUnknownBlockType)arg4;
- (void)logEvent:(id)arg1 module:(id)arg2 extraBlock:(CDUnknownBlockType)arg3;
- (void)logRealtimeEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4;
- (void)logRealtimeEvent:(id)arg1 module:(id)arg2 extra:(id)arg3;
- (void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4 realtime:(BOOL)arg5;
- (void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3 timestamp:(double)arg4;
- (void)logEvent:(id)arg1 module:(id)arg2 extraObjectsAndKeys:(id)arg3;
- (void)logEvent:(id)arg1 module:(id)arg2 extra:(id)arg3;
- (void)logEvent:(id)arg1 module:(id)arg2;
- (void)removeWillSavePendingDelegate:(id)arg1;
- (void)addWillSavePendingDelegate:(id)arg1;
- (void)processNow:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)flushPendingLogs:(BOOL)arg1;
- (void)cancelTimers;
- (void)startTimers;
- (void)cancelTimer:(id)arg1;
- (id)startTimerAtQueue:(id)arg1 initialTimeSeconds:(double)arg2 intervalSeconds:(double)arg3 handlerBlock:(CDUnknownBlockType)arg4;
- (void)toggleState:(unsigned int)arg1;
@property(getter=isSampled) BOOL sampled;
- (void)notifyTimeSpentInNoninteractiveEvent:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3;
- (id)radioTechnologyFetcher;
- (void)setUseBinaryUpload:(BOOL)arg1;
- (void)setExceptionHandler:(id)arg1;
- (void)setUserFBID:(id)arg1 application:(id)arg2 analyticsConfiguration:(id)arg3;
- (void)setUserFBID:(id)arg1 application:(id)arg2;
- (void)dealloc;
- (void)invalidate;
- (void)resume;
- (void)suspendQueueForSeconds:(unsigned int)arg1;
- (BOOL)getQueueSuspended;
- (id)init;
- (id)initWithConfiguration:(id)arg1 logDirectoryPath:(id)arg2;
- (id)initWithConfiguration:(id)arg1 logDirectoryPath:(id)arg2 queueDelay:(unsigned int)arg3;
- (void)logRealtimeEvent:(id)arg1 analyticsInfo:(id)arg2 extra:(id)arg3;
- (void)logEvent:(id)arg1 analyticsInfo:(id)arg2 extra:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

