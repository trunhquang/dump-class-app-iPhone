//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NewRelicInternalUtils : NSObject
{
}

+ (BOOL)validateString:(id)arg1 usingRegularExpression:(id)arg2;
+ (id)cleanseStringForCollector:(id)arg1;
+ (id)normalizedStringFromString:(id)arg1;
+ (id)normalizedStringFromURL:(id)arg1;
+ (id)deviceModelViaSysCtrl;
+ (void)setMachModel:(id)arg1;
+ (id)machModel;
+ (id)deviceModel;
+ (id)reachability;
+ (id)getCurrentWanType;
+ (int)networkStatus;
+ (id)carrierName;
+ (BOOL)isWebViewThread;
+ (id)osVersion;
+ (id)deviceId;
+ (id)agentVersion;

@end

