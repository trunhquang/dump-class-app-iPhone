//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAppService.h"
#import "FBCLPermissionManagerDelegate.h"

@class CLLocation, FBBackgroundFetchManager, FBBackgroundTaskHandler, FBCLApplicationEventSource, FBCLEventChannel, FBCLInAppLocationRequestEventSource, FBCLLocationCache, FBCLLocationLogger, FBCLLocationUpdaterDecider, FBCLLocationUpdaterSender, FBCLPermissionManager, FBIdleDetector, FBUserSession, NSArray, NSSet, NSString;

@interface FBCLBackgroundLocationService : NSObject <FBCLPermissionManagerDelegate, FBAppService>
{
    FBCLEventChannel *_eventChannel;
    NSArray *_producers;
    FBCLLocationUpdaterDecider *_decider;
    FBUserSession *_session;
    FBCLLocationUpdaterSender *_locationSender;
    FBCLApplicationEventSource *_appEventProd;
    FBCLInAppLocationRequestEventSource *_inAppEventProd;
    FBCLPermissionManager *_permissionManager;
    FBBackgroundFetchManager *_backgroundFetchManager;
    unsigned int _taskIdent;
    FBBackgroundTaskHandler *_backgroundTaskHandler;
    FBIdleDetector *_idleDetector;
    FBCLLocationCache *_locationCache;
    BOOL _isStarted;
    FBCLLocationLogger *_logger;
}

- (void).cxx_destruct;
- (void)updateLocationSettings;
- (BOOL)_updateLocationWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)updateLocationWithDesiredAccuracy:(double)arg1 acquisionTimeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)updateLocationWithDesiredAccuracy:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)updateLocation:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) CLLocation *mostRecentLocation;
@property(nonatomic) BOOL locationSharingEnabled;
@property(nonatomic) BOOL locationHistoryEnabled;
- (void)setLocationHistoryEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stopTaskHandler;
- (void)_teardownEventProducers;
- (void)_setupEventProducersWithBackgroundFetchManager:(id)arg1 locationLogger:(id)arg2;
- (void)_stopBackgroundLocation:(CDUnknownBlockType)arg1;
- (void)_startBackgroundLocation:(CDUnknownBlockType)arg1;
- (void)permissionManager:(id)arg1 permissionDidChanged:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)_startService;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

