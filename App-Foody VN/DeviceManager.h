//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DevicePushSetting;

@interface DeviceManager : NSObject
{
    DevicePushSetting *_pushSetting;
}

+ (id)getInstance;
@property(retain, nonatomic) DevicePushSetting *pushSetting; // @synthesize pushSetting=_pushSetting;
- (void).cxx_destruct;
- (id)init;

@end

