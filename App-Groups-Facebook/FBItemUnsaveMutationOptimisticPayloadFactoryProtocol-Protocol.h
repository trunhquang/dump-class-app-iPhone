//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBOptimisticPayloadFactoryProtocol.h"

@class FBItemUnsaveInputData, FBMemItemUnsaveResponsePayload;

@protocol FBItemUnsaveMutationOptimisticPayloadFactoryProtocol <FBOptimisticPayloadFactoryProtocol>
- (FBMemItemUnsaveResponsePayload *)rollbackOptimisticPayload:(FBItemUnsaveInputData *)arg1;
- (FBMemItemUnsaveResponsePayload *)optimisticPayload:(FBItemUnsaveInputData *)arg1;
@end

