//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMThreadKey, MNWAnalyticsEventsBatch, MNWOutgoingMessage;

@interface MNWParentAppRequest : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBMThreadKey *_threadDataRequest_threadKey;
    FBMThreadKey *_messageSendRequest_threadKey;
    MNWOutgoingMessage *_messageSendRequest_outgoingMessage;
    MNWAnalyticsEventsBatch *_analyticsRequest_analyticsEventsBatch;
}

+ (id)threadListDataRequest;
+ (id)threadDataRequestWithThreadKey:(id)arg1;
+ (id)sessionRequest;
+ (id)messageSendRequestWithThreadKey:(id)arg1 outgoingMessage:(id)arg2;
+ (id)analyticsRequestWithAnalyticsEventsBatch:(id)arg1;
- (void).cxx_destruct;
- (void)matchSessionRequest:(CDUnknownBlockType)arg1 threadListDataRequest:(CDUnknownBlockType)arg2 threadDataRequest:(CDUnknownBlockType)arg3 messageSendRequest:(CDUnknownBlockType)arg4 analyticsRequest:(CDUnknownBlockType)arg5;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

