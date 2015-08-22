//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTNetworkRecord_TypeEnum, NSString;

@protocol JBTNetworkRecord <NSObject, JavaObject>
- (NSString *)getOriginalMessage;
- (NSString *)getDebugString;
- (NSString *)getDescription;
- (int)getSizeInBytes;
- (NSString *)getChannelName;
- (long long)getTimestampMs;
- (JBTNetworkRecord_TypeEnum *)getType;
- (int)getId;
@end

