//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, FBBackgroundTaskHandler, FBCLEventSet, FBCLLocationCollectionConfig, FBDelayer, NSArray, NSMutableArray, NSString;

@interface FBCLLocationUpdateRequest : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    FBCLLocationCollectionConfig *_configuration;
    FBBackgroundTaskHandler *_backgroundTaskHandler;
    unsigned int _taskId;
    NSMutableArray *_lastLocations;
    FBDelayer *_locationAcquisionDelayer;
    double _locationRequestStartTime;
    id <FBCLLocationUpdateRequestDelegate> _delegate;
    FBCLEventSet *_eventSet;
    unsigned int _state;
}

+ (BOOL)location:(id)arg1 withinAccuracy:(float)arg2 andTime:(float)arg3;
@property(copy, nonatomic) FBCLLocationCollectionConfig *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) FBCLEventSet *eventSet; // @synthesize eventSet=_eventSet;
@property(nonatomic) __weak id <FBCLLocationUpdateRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateLocationTimeout:(double)arg1;
@property(readonly, copy, nonatomic) NSArray *locations;
- (void)addLocations:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)_endBackgroundTask;
- (void)_stopUpdatingLocation;
- (void)_startUpdatingLocation;
- (void)invalidate;
- (void)cancelRequest;
- (void)startRequest;
- (void)dealloc;
- (id)initWithCLLocationManager:(id)arg1 backgroundTaskHandler:(id)arg2 configuration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

