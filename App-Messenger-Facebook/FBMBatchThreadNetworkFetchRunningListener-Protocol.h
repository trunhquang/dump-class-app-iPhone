//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSError, NSSet;

@protocol FBMBatchThreadNetworkFetchRunningListener <NSObject>
- (void)threadFetchRunner:(id <FBMBatchThreadNetworkFetchRunning>)arg1 didFailFetchForThreadDescriptors:(NSSet *)arg2 withError:(NSError *)arg3;
- (void)threadFetchRunner:(id <FBMBatchThreadNetworkFetchRunning>)arg1 didFetchThreads:(NSDictionary *)arg2 andEncounteredErrors:(NSDictionary *)arg3;
@end
