//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol.h"

@class FBMemNotificationStoryMarkReadResponsePayload, FBNotificationStoryMarkReadInputData;

@protocol FBNotificationStoryMarkReadMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemNotificationStoryMarkReadResponsePayload *)rollbackOptimisticPayload:(FBNotificationStoryMarkReadInputData *)arg1;
- (FBMemNotificationStoryMarkReadResponsePayload *)optimisticPayload:(FBNotificationStoryMarkReadInputData *)arg1;
@end

