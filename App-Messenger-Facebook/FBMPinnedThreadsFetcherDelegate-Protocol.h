//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMPinnedThreadsFetcher, NSArray, NSError;

@protocol FBMPinnedThreadsFetcherDelegate <NSObject>
- (void)pinnedThreadsFetcher:(FBMPinnedThreadsFetcher *)arg1 didFailToFetchPinnedThreads:(NSError *)arg2;
- (void)pinnedThreadsFetcher:(FBMPinnedThreadsFetcher *)arg1 didFetchPinnedThreads:(NSArray *)arg2 updateTime:(long long)arg3;
@end
