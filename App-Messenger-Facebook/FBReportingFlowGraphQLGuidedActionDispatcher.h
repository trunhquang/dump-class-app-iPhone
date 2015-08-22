//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReportingFlowGuidedActionDispatchingProtocol.h"

@class FBUserSession, NSString;

@interface FBReportingFlowGraphQLGuidedActionDispatcher : NSObject <FBReportingFlowGuidedActionDispatchingProtocol>
{
    FBUserSession *_session;
    NSString *_actorID;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)performGuidedAction:(id)arg1 nodeID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)performMessageGuidedAction:(id)arg1 nodeID:(id)arg2 completionBlock:(CDUnknownBlockType)arg3 targetFBID:(id)arg4 message:(id)arg5;
- (id)initWithUserSession:(id)arg1 actorID:(id)arg2;

@end
