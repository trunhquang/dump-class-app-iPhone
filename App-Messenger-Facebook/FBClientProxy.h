//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVAssetResourceLoaderDelegate.h"
#import "FBInvalidating.h"
#import "FBPlaylistDownloaderDelegate.h"
#import "FBVideoDownloaderDelegate.h"
#import "GCDAsyncSocketDelegate.h"

@class FBCache, FBClientProxyDataAnalytics, FBClientProxyLogger, FBClientProxyURLGenerator, FBExperimentManager, FBLayeredCache, FBVideoInitializationTrackerContainer, FBVideoPrefetchManager, GCDAsyncSocket, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface FBClientProxy : NSObject <GCDAsyncSocketDelegate, FBVideoDownloaderDelegate, FBPlaylistDownloaderDelegate, FBInvalidating, AVAssetResourceLoaderDelegate>
{
    BOOL _enableCDNCacheStatusQuery;
    GCDAsyncSocket *_listenSocket;
    unsigned int _listenPort;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_downloaderForDataKey;
    NSMutableDictionary *_downloaderForRequest;
    NSMutableDictionary *_listeners;
    NSMutableDictionary *_listenersForResourceLoaderConnections;
    NSMutableSet *_sockets;
    NSMutableDictionary *_playlistForURL;
    NSMutableDictionary *_playlistForSocket;
    id <FBBlockDataCache> _blockDataCache;
    FBLayeredCache *_playlistCache;
    long _listenOnce;
    FBClientProxyURLGenerator *_proxyURLGenerator;
    BOOL _invalidated;
    FBCache *_requestPriorityMemorization;
    BOOL _useResourceLoader;
    BOOL _shouldCancelDownloadsDirectly;
    BOOL _shouldCancelLoadingOfAssets;
    BOOL _hlsThrottling;
    FBExperimentManager *_experimentManager;
    FBVideoInitializationTrackerContainer *_videoInitializationTrackerContainer;
    unsigned int _maximumProxiedHLSSegments;
    FBClientProxyDataAnalytics *_dataAnalytics;
    FBVideoPrefetchManager *_prefetchManager;
    id <FBNetworkDispatch> _networkDispatcher;
    FBClientProxyLogger *_logger;
}

@property(readonly, nonatomic) FBClientProxyLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) id <FBNetworkDispatch> networkDispatcher; // @synthesize networkDispatcher=_networkDispatcher;
@property(readonly, nonatomic) FBVideoPrefetchManager *prefetchManager; // @synthesize prefetchManager=_prefetchManager;
@property(readonly, nonatomic) FBClientProxyDataAnalytics *dataAnalytics; // @synthesize dataAnalytics=_dataAnalytics;
- (void).cxx_destruct;
- (void)_handleCloseRequest:(id)arg1 shouldLog:(BOOL)arg2 error:(id)arg3;
- (void)_handleAVPlayerRequest:(id)arg1;
- (id)_buildDownloaderWithDataKey:(id)arg1 url:(id)arg2 prefetchURL:(id)arg3 videoID:(id)arg4 scenePath:(id)arg5 priority:(int)arg6 definition:(int)arg7;
- (void)_prepareForVideoDownloadWithUrl:(id)arg1 proxyURL:(id)arg2 throttlingDelegate:(id)arg3 definition:(int)arg4 playRequested:(BOOL)arg5;
- (void)_listen;
- (unsigned int)_randomPortNumber;
- (id)_CRLFCRLFData;
- (void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1;
- (id)_extractDownloaderFromUrl:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForResponseToAuthenticationChallenge:(id)arg2;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)playlistDownloader:(id)arg1 didFailWithError:(id)arg2 respondFallback:(BOOL)arg3;
- (void)playlistDownloader:(id)arg1 didFinishWithPlaylist:(id)arg2 cacheAllowed:(BOOL)arg3;
- (void)playlistDownloader:(id)arg1 didReceiveData:(id)arg2;
- (void)cachePlaylist:(id)arg1 forURL:(id)arg2;
- (void)_cachePlaylistData:(id)arg1 forURL:(id)arg2;
- (void)videoDownloaderDidFinish:(id)arg1 error:(id)arg2;
- (void)videoDownloader:(id)arg1 didReceiveData:(id)arg2 isPrefetching:(BOOL)arg3 isFetchingFirstChunk:(BOOL)arg4;
- (void)videoDownloaderDidRedirect:(id)arg1;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long)arg3;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)removeVideoInitializationTracker:(id)arg1;
- (id)videoInitializationTrackerWithVideoID:(id)arg1;
- (BOOL)supportsAssetCanceling;
- (void)cancelNetworkIfDownloading:(id)arg1;
- (void)throttleTrafficIfDownloading:(id)arg1 throttler:(id)arg2;
- (unsigned int)currentDownloadCount;
- (id)getDispatchQueue;
- (void)clearAllVideosCache:(CDUnknownBlockType)arg1;
- (void)listen;
- (void)prepareDownloaderWithProxyURL:(id)arg1 throttlingDelegate:(id)arg2;
- (id)prepareDownloaderAndGetProxyURLforURL:(id)arg1 videoID:(id)arg2 trackerID:(id)arg3 definition:(int)arg4 videoType:(int)arg5 throttlingDelegate:(id)arg6 playRequested:(BOOL)arg7;
- (id)proxyURLforURL:(id)arg1 videoID:(id)arg2 trackerID:(id)arg3 definition:(int)arg4 videoType:(int)arg5;
- (id)requestPriorityAttributesForVideoId:(id)arg1;
- (BOOL)hasInitialDataForVideoID:(id)arg1 videoURL:(id)arg2 definition:(int)arg3;
- (BOOL)hasNonPrefetchDataForDataKey:(id)arg1 url:(id)arg2 videoID:(id)arg3 definition:(int)arg4 length:(unsigned int)arg5;
- (BOOL)hasDownloaderForDataKey:(id)arg1;
- (void)clearScenePathAndPriorityforVideoID:(id)arg1;
- (void)setScenePath:(id)arg1 andPriority:(int)arg2 forVideoID:(id)arg3;
- (void)dealloc;
- (id)initWithSession:(id)arg1 blockDataCache:(id)arg2 playlistCache:(id)arg3 logger:(id)arg4;
- (id)init;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
