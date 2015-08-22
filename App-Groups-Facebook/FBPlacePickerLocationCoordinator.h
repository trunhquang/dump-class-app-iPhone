//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, NSTimer;

@interface FBPlacePickerLocationCoordinator : NSObject
{
    id <FBPlacePickerLocationCoordinatorDelegate> _delegate;
    CLLocation *_lastLocation;
    id <FBLocationManagerSubscription> _token;
    NSTimer *_accurateFixTimeoutTimer;
    double _timeoutForAccurateLocation;
    double _desiredAccuracy;
}

@property(retain, nonatomic) NSTimer *accurateFixTimeoutTimer; // @synthesize accurateFixTimeoutTimer=_accurateFixTimeoutTimer;
@property(nonatomic) double desiredAccuracy; // @synthesize desiredAccuracy=_desiredAccuracy;
@property(nonatomic) double timeoutForAccurateLocation; // @synthesize timeoutForAccurateLocation=_timeoutForAccurateLocation;
@property(retain, nonatomic) id <FBLocationManagerSubscription> token; // @synthesize token=_token;
@property(retain, nonatomic) CLLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) __weak id <FBPlacePickerLocationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)description;
- (void)_cancelAccurateFixTimeoutTimer;
- (void)_startAccurateFixTimeoutTimer;
- (void)_fireAccurateFixTimeoutTimer:(id)arg1;
- (void)_locationManagerDidCallbackWithLocation:(id)arg1 Error:(id)arg2;
- (double)_locationAccuracyForLocationManager;
- (BOOL)_location:(id)arg1 withDesiredAccuracy:(double)arg2;
@property(readonly, nonatomic) BOOL isPollingStarted_DEPRECATED;
- (BOOL)_isLocationConsiderablyBetterThanLastLocation:(id)arg1;
@property(readonly, nonatomic) BOOL hasLocationService_DEPRECATED;
@property(readonly, nonatomic) BOOL isLocationAuthorizationNotDetermined_DEPRECATED;
- (void)stopPollingLocation;
- (void)startPollingLocation;
- (void)dealloc;
- (id)initWithDesiredAccuracy:(double)arg1 timeoutForAccurateLocation:(double)arg2;
- (id)init;

@end

