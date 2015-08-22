//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAnalytics;

@interface FBClientProxyLogger : NSObject
{
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (void)logPrefetchCancel:(id)arg1 videoID:(id)arg2 offset:(unsigned int)arg3 cancelReason:(id)arg4;
- (void)logNetworkerDidThrottleRangeReq:(id)arg1 mediaType:(id)arg2 offset:(unsigned int)arg3 requestLength:(unsigned int)arg4 videoID:(id)arg5;
- (void)logNetworkerDidThrottleResume:(id)arg1 mediaType:(id)arg2 offset:(unsigned int)arg3 videoID:(id)arg4;
- (void)logNetworkerDidThrottlePause:(id)arg1 mediaType:(id)arg2 offset:(unsigned int)arg3 videoID:(id)arg4;
- (void)logNetworkerDidCancelForURL:(id)arg1 mediaType:(id)arg2 progress:(int)arg3 offset:(unsigned int)arg4 videoID:(id)arg5;
- (void)logNetworkerDidFinishForURL:(id)arg1 mediaType:(id)arg2 bytes:(unsigned int)arg3 duration:(int)arg4 offset:(unsigned int)arg5 videoID:(id)arg6;
- (void)logNetworkerDidDequeueForURL:(id)arg1 mediaType:(id)arg2 error:(id)arg3 videoID:(id)arg4;
- (void)logNetworkerDidStartForURL:(id)arg1 mediaType:(id)arg2 offset:(unsigned int)arg3 videoID:(id)arg4;
- (void)logNetworkerDidFail:(id)arg1 forURL:(id)arg2 statusCode:(unsigned int)arg3 mediaType:(id)arg4 videoID:(id)arg5;
- (void)logNetworkerReceivedHeaders:(id)arg1 forURL:(id)arg2 statusCode:(unsigned int)arg3 mediaType:(id)arg4 enabledCDNCacheQuery:(BOOL)arg5 videoID:(id)arg6;
- (void)logNetworkerReceivedFirstData:(id)arg1 forURL:(id)arg2 mediaType:(id)arg3 videoID:(id)arg4;
- (void)logDidSendRedirectForURL:(id)arg1 proxyType:(id)arg2 videoID:(id)arg3;
- (void)logDidLaunchProxyOnPort:(unsigned int)arg1 lastPort:(unsigned int)arg2 withError:(id)arg3;
- (void)logDidShutdownProxyWithOpenConnections:(int)arg1;
- (void)logDidFinishConnectionForPlaylist:(id)arg1 socket:(id)arg2 proxyType:(id)arg3 bytes:(unsigned int)arg4 duration:(unsigned int)arg5 offset:(unsigned int)arg6 requestLength:(unsigned int)arg7 videoID:(id)arg8 cancelReason:(id)arg9;
- (void)logDidFinishConnectionForURL:(id)arg1 socket:(id)arg2 proxyType:(id)arg3 bytes:(unsigned int)arg4 duration:(unsigned int)arg5 bytesCached:(unsigned int)arg6 prefetchedBytesCached:(unsigned int)arg7 cacheReadDurationMS:(unsigned int)arg8 prefetchCacheReadDurationMS:(unsigned int)arg9 offset:(unsigned int)arg10 requestLength:(unsigned int)arg11 videoID:(id)arg12 cancelReason:(id)arg13;
- (void)logDidCloseConnectionForURL:(id)arg1 socket:(id)arg2 videoID:(id)arg3 proxyType:(id)arg4 offset:(unsigned int)arg5 requestLength:(unsigned int)arg6 bytes:(unsigned int)arg7 bytesCached:(unsigned int)arg8 prefetchBytesCached:(unsigned int)arg9 error:(id)arg10;
- (void)logDidReadConnectionForURL:(id)arg1 socket:(id)arg2 videoID:(id)arg3 proxyType:(id)arg4 offset:(unsigned int)arg5 requestLength:(unsigned int)arg6;
- (void)logDidAcceptConnectionForSocket:(id)arg1;
- (void)_logEvent:(id)arg1 URL:(id)arg2 error:(id)arg3 extra:(id)arg4;
- (id)initWithAnalytics:(id)arg1;
- (id)init;

@end

