//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"
#import "FBCLEventChannelListener.h"
#import "FBCLLocationUpdateRequestDelegate.h"

@class CLLocationManager, FBCLEventChannel, FBCLLocationCache, FBCLLocationCollectionConfig, FBCLLocationLogger, FBCLLocationQualityChecker, FBCLLocationUpdateRequest, FBCLLocationUpdaterSender, NSString;

@interface FBCLLocationUpdaterDecider : NSObject <FBCLEventChannelListener, CLLocationManagerDelegate, FBCLLocationUpdateRequestDelegate>
{
    BOOL _started;
    FBCLEventChannel *_eventChannel;
    FBCLLocationCollectionConfig *_configuration;
    FBCLLocationUpdateRequest *_locationUpdateRequest;
    FBCLLocationUpdaterSender *_locationSender;
    FBCLLocationLogger *_logger;
    FBCLLocationCache *_locationCache;
    CLLocationManager *_locationManager;
    double _lastUpdate;
    double _lastQualityAccuracyOverwrite;
    FBCLLocationQualityChecker *_qualityChecker;
    id <FBBackgroundStateManaging> _backgroundStateManaging;
    unsigned short _failureToImprove;
}

- (void).cxx_destruct;
- (id)makeLocationUpdateRequest;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)_configForStaleLocation:(id)arg1 forDate:(id)arg2;
- (void)_addLocationsToCache:(id)arg1 forDate:(id)arg2;
- (void)_finalizeLocationRequest:(id)arg1;
- (void)_sendLocationWithCacheResponse:(id)arg1 fromEventSet:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;
- (void)_uploadLocationFromCache:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;
- (BOOL)_shouldStartLocationRequest:(id)arg1;
- (BOOL)_isHighPriorityEvent:(id)arg1;
- (void)_uploadLocation:(id)arg1;
- (void)_logLocationTrace:(id)arg1 withEventSet:(id)arg2;
- (void)locationUpdateRequest:(id)arg1 didFinish:(BOOL)arg2 error:(id)arg3;
- (void)_runCompletionHandlerIfNeeded:(id)arg1 completionResult:(unsigned int)arg2;
- (void)onCoalescedEvents:(id)arg1;
- (void)onEvent:(id)arg1;
- (id)queuePerformer;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithEventChannel:(id)arg1 locationManager:(id)arg2 locationSender:(id)arg3 locationLogger:(id)arg4 qualityChecker:(id)arg5 locationCache:(id)arg6 configuration:(id)arg7 backgroundStateManaging:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

