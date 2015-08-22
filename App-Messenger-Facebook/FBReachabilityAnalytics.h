//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReachabilityQualityAnalyticsLogger.h"

@class FBAnalytics, FBRadioTechnologyFetcher, FBReachabilityAnnouncer, NSObject<OS_dispatch_queue>, NSString;

@interface FBReachabilityAnalytics : NSObject <FBReachabilityQualityAnalyticsLogger>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
    FBAnalytics *_analytics;
    FBRadioTechnologyFetcher *_radioTechnologyFetcher;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)createWithAndAddToReachabilityAnnouncer:(id)arg1;
- (void).cxx_destruct;
- (void)_asyncLogEvent:(id)arg1 key:(id)arg2 estimate:(double)arg3;
- (void)logLatencyUpdate:(double)arg1;
- (void)logUploadBandwidthUpdate:(double)arg1;
- (void)logDownloadBandwidthUpdate:(double)arg1;
- (id)initWithReachabilityAnnouncer:(id)arg1 analytics:(id)arg2 radioTechnologyFetcher:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
