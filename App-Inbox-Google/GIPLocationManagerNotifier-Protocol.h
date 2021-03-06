//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, GIPLocationManager, NSError;

@protocol GIPLocationManagerNotifier <NSObject>
- (void)gipLocationManager:(GIPLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)gipLocationManagerDidStopUpdating:(GIPLocationManager *)arg1;
- (void)gipLocationManager:(GIPLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)gipLocationManager:(GIPLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3;

@optional
- (void)setOwningLocationManager:(GIPLocationManager *)arg1;
@end

