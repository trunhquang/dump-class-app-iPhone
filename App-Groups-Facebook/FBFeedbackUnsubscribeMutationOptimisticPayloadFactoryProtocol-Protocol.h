//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol.h"

@class FBFeedbackUnsubscribeInputData, FBMemFeedbackUnsubscribeResponsePayload;

@protocol FBFeedbackUnsubscribeMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemFeedbackUnsubscribeResponsePayload *)rollbackOptimisticPayload:(FBFeedbackUnsubscribeInputData *)arg1;
- (FBMemFeedbackUnsubscribeResponsePayload *)optimisticPayload:(FBFeedbackUnsubscribeInputData *)arg1;
@end

