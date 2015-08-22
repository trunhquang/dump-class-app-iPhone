//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSObject<OS_dispatch_queue>, NSSet;

@protocol FBGraphQLFetcher <NSObject>
- (void)maybePrefetchUnits:(NSSet *)arg1 prefetchPriority:(unsigned int)arg2 configurationCallback:(void (^)(FBGraphQLFetchConfigurationBuilder *))arg3;
- (void)maybePrefetch:(NSDictionary *)arg1 configurationCallback:(void (^)(FBGraphQLFetchConfigurationBuilder *))arg2;
- (void)maybePrefetch:(id <FBGraphQLFetchUnit>)arg1 prefetchPriority:(unsigned int)arg2 configurationCallback:(void (^)(FBGraphQLFetchConfigurationBuilder *))arg3;
- (id <FBServiceTransactionMutating>)fetchDataForUnits:(NSSet *)arg1 configurationCallback:(void (^)(FBGraphQLFetchConfigurationBuilder *))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 cachedResponseCallback:(void (^)(NSArray *))arg4 networkResponseCallback:(void (^)(NSArray *))arg5 errorCallback:(void (^)(NSError *, id <FBNetworkerRequestStatus>))arg6;
- (id <FBServiceTransactionMutating>)fetchDataForUnit:(id <FBGraphQLFetchUnit>)arg1 configurationCallback:(void (^)(FBGraphQLFetchConfigurationBuilder *))arg2 callbackQueue:(NSObject<OS_dispatch_queue> *)arg3 cachedResponseCallback:(void (^)(FBGraphQLFetcherCacheLookupResponse *))arg4 networkResponseCallback:(void (^)(FBGraphQLResponse *, id <FBNetworkerRequestStatus>))arg5 errorCallback:(void (^)(NSError *, id <FBNetworkerRequestStatus>))arg6;
@end

