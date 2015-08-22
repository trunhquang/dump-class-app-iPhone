//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLDownloadRequest, NSDictionary, NSString;

@protocol FBGraphQLConnectionSyncStoreRequestProvider <NSObject>
- (const struct FBGraphQLFieldSet *)edgeFieldSet;
- (id <FBConnectionPageProtocol>)connectionPageForResponse:(NSDictionary *)arg1;
- (FBGraphQLDownloadRequest *)connectionSyncStore:(id <FBGraphQLConnectionSyncStoreProtocol>)arg1 findRequest:(NSString *)arg2;
- (FBGraphQLDownloadRequest *)connectionSyncStore:(id <FBGraphQLConnectionSyncStoreProtocol>)arg1 previousRequestBefore:(NSString *)arg2;
- (FBGraphQLDownloadRequest *)connectionSyncStore:(id <FBGraphQLConnectionSyncStoreProtocol>)arg1 nextRequestAfter:(NSString *)arg2;
- (NSString *)requestProviderID;
@end

