//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

@interface UFIOSBatteryData : PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) float batteryLevel; // @dynamic batteryLevel;
@property(nonatomic) int batteryState; // @dynamic batteryState;
@property(retain, nonatomic) NSString *checkinDetails; // @dynamic checkinDetails;
@property(nonatomic) long long durationMicros; // @dynamic durationMicros;
@property(nonatomic) BOOL hasBatteryLevel; // @dynamic hasBatteryLevel;
@property(nonatomic) BOOL hasBatteryState; // @dynamic hasBatteryState;
@property(nonatomic) BOOL hasCheckinDetails; // @dynamic hasCheckinDetails;
@property(nonatomic) BOOL hasDurationMicros; // @dynamic hasDurationMicros;
@property(nonatomic) BOOL hasUsageDetails; // @dynamic hasUsageDetails;
@property(nonatomic) BOOL hasUsagePercent; // @dynamic hasUsagePercent;
@property(retain, nonatomic) NSString *usageDetails; // @dynamic usageDetails;
@property(nonatomic) int usagePercent; // @dynamic usagePercent;

@end

