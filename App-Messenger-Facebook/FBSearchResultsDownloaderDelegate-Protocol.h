//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@protocol FBSearchResultsDownloaderDelegate <NSObject>
- (void)downloader:(id <FBSearchResultsDownloaderProtocol>)arg1 didLoadConnection:(id <FBGraphQLConnectionPageProtocol>)arg2 latency:(unsigned long long)arg3 isCachedResponse:(BOOL)arg4 isHeadRequest:(BOOL)arg5;

@optional
- (void)downloader:(id <FBSearchResultsDownloaderProtocol>)arg1 didFailWithError:(NSError *)arg2;
@end

