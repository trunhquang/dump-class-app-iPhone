//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLLocation, FBMLocationUpdater, NSError;

@protocol FBMLocationUpdateListener <NSObject>
- (void)locationUpdater:(FBMLocationUpdater *)arg1 didReceiveAuthorizationStatusChange:(int)arg2;
- (void)locationUpdater:(FBMLocationUpdater *)arg1 didFailToReceiveLocationUpdate:(NSError *)arg2;
- (void)locationUpdater:(FBMLocationUpdater *)arg1 didReceiveLastKnownGoodLocation:(CLLocation *)arg2;
- (void)locationUpdater:(FBMLocationUpdater *)arg1 didReceiveLatestInaccurateLocationUpdate:(CLLocation *)arg2;
- (void)locationUpdater:(FBMLocationUpdater *)arg1 didReceiveLocationUpdate:(CLLocation *)arg2;
@end

