//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASImageCacheProtocol.h"
#import "ASImageDownloaderProtocol.h"
#import "CKNetworkImageDownloading.h"
#import "FBImageDownloadLogger.h"
#import "FBInvalidating.h"

@class FBCachedImageFactory, FBImageDownloaderRequestManager, NSString;

@interface FBImageDownloader : NSObject <CKNetworkImageDownloading, ASImageCacheProtocol, ASImageDownloaderProtocol, FBImageDownloadLogger, FBInvalidating>
{
    BOOL _invalidated;
    id <FBImageDownloaderCacheInternal> _imageCache;
    int _networkFetches;
    FBImageDownloaderRequestManager *_requestManager;
    FBCachedImageFactory *_cachedImageFactory;
    unsigned int _inMemoryCacheLimit;
}

+ (id)loggedOutImageDownloader;
@property(nonatomic) unsigned int inMemoryCacheLimit; // @synthesize inMemoryCacheLimit=_inMemoryCacheLimit;
- (void).cxx_destruct;
- (void)invalidate;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)resetStats;
- (void)logFinishWithType:(unsigned int)arg1;
- (CDStruct_a734b2e2)stats;
- (void)clearAllImageCache:(CDUnknownBlockType)arg1;
- (void)_fetchBetterDiskHits:(id)arg1 currentBestImage:(id)arg2 URL:(id)arg3 cacheFetch:(id)arg4;
- (void)_fetchBetterMemoryHits:(id)arg1 currentBestImage:(id)arg2 URL:(id)arg3 cacheFetch:(id)arg4;
- (id)fetchFirstCachedImageInURLs:(id)arg1 callPath:(id)arg2 options:(unsigned int)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)updateScenePath:(id)arg1 andPriority:(int)arg2 forImageDownload:(id)arg3;
- (void)cancelImageDownload:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 scenePath:(id)arg2 priority:(int)arg3 callPath:(id)arg4 options:(unsigned int)arg5 queue:(id)arg6 downloadProgressBlock:(CDUnknownBlockType)arg7 completionBlock:(CDUnknownBlockType)arg8;
- (id)downloadImageWithURL:(id)arg1 callPath:(id)arg2 queue:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithNetworker:(id)arg1 imageCache:(id)arg2 cachedImageFactory:(id)arg3 configuration:(id)arg4 scenePathAnnouncer:(id)arg5 adjustPartialCache:(BOOL)arg6;
- (id)initWithNetworker:(id)arg1 diskCache:(id)arg2 cachedImageFactory:(id)arg3 configuration:(id)arg4 scenePathAnnouncer:(id)arg5 adjustPartialCache:(BOOL)arg6;
- (id)downloadImageWithURL:(id)arg1 scenePath:(id)arg2 caller:(id)arg3 callbackQueue:(id)arg4 downloadProgressBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cancelImageDownloadForIdentifier:(id)arg1;
- (id)downloadImageWithURL:(id)arg1 callbackQueue:(id)arg2 downloadProgressBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchCachedImageWithURL:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

