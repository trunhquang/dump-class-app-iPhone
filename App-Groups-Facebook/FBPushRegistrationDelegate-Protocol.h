//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPushRegisterRequestParams, NSError;

@protocol FBPushRegistrationDelegate <NSObject>
- (void)unregisterRequestDidFailWithError:(NSError *)arg1 cancelled:(BOOL)arg2;
- (void)unregisterRequestDidComplete;
- (void)registerRequest:(FBPushRegisterRequestParams *)arg1 DidFailWithError:(NSError *)arg2 cancelled:(BOOL)arg3;
- (void)registerRequestDidComplete:(FBPushRegisterRequestParams *)arg1;
@end

