//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBGraphQLMutationBase.h"

@class FBGraphQLQuery;

@interface _FBPageLeavePulsarMutationCall : FBGraphQLMutationBase
{
    FBGraphQLQuery *_mutation;
}

- (void).cxx_destruct;
- (id)payloadFromResponse:(id)arg1;
- (id)mutationRequest:(id)arg1;
- (id)mutationName;
- (id)initWithInput:(id)arg1 optimisticPayloadFactory:(id)arg2 mutation:(id)arg3 successHandler:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;

@end

