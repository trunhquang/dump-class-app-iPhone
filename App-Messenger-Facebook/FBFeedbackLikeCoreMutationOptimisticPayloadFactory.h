//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBFeedbackLikeMutationOptimisticPayloadFactoryProtocol.h"

@class FBMemFeedback, NSString;

@interface FBFeedbackLikeCoreMutationOptimisticPayloadFactory : NSObject <FBFeedbackLikeMutationOptimisticPayloadFactoryProtocol>
{
    FBMemFeedback *_feedback;
}

- (void).cxx_destruct;
- (id)rollbackOptimisticPayload:(id)arg1;
- (id)optimisticPayload:(id)arg1;
- (id)buildFeedbackFromInput:(id)arg1 withDoesLikeFeedback:(id)arg2 likerCount:(id)arg3;
- (id)initWithFeedback:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
