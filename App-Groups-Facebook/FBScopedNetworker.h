//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBInvalidating.h"
#import "FBNetworkDispatch.h"

@class NSHashTable, NSString;

@interface FBScopedNetworker : NSObject <FBNetworkDispatch, FBInvalidating>
{
    id <FBNetworkDispatch> _networker;
    NSHashTable *_requestTokens;
    struct mutex _requestsMutex;
    BOOL _invalidated;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)requestTokens;
- (void)cancelAllRequests;
- (id)innerAddRequest:(id)arg1;
- (id)addRequest:(id)arg1;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (id)init;
- (id)initWithNetworkDispatch:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

