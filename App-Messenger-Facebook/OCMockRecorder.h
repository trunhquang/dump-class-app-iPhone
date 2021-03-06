//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class NSInvocation, NSMutableArray;

@interface OCMockRecorder : NSProxy
{
    id signatureResolver;
    BOOL recordedAsClassMethod;
    BOOL ignoreNonObjectArgs;
    NSInvocation *recordedInvocation;
    NSMutableArray *invocationHandlers;
}

- (BOOL)matchesInvocation:(id)arg1;
- (BOOL)matchesSelector:(SEL)arg1;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)ignoringNonObjectArgs;
- (id)classMethod;
- (id)invocationHandlers;
- (id)andForwardToRealObject;
- (id)andDo:(CDUnknownBlockType)arg1;
- (id)andCall:(SEL)arg1 onObject:(id)arg2;
- (id)andPost:(id)arg1;
- (id)andThrow:(id)arg1;
- (id)andReturnValue:(id)arg1;
- (id)andReturn:(id)arg1;
- (void)releaseInvocation;
- (id)description;
- (void)dealloc;
- (id)initWithSignatureResolver:(id)arg1;

@end

