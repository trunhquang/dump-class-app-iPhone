//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PHPhotoLibraryChangeObserver.h"

@class ALAssetsLibrary, FBAssetThumbnailResourceManager, FBAssetsLibraryListenerAnnouncer, FBSerialOperationQueue, FBTempAssetsManager, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSString, NSURL, PHCachingImageManager;

@interface FBAssetsLibrary : NSObject <PHPhotoLibraryChangeObserver>
{
    NSObject<OS_dispatch_semaphore> *_writeSemaphore;
    ALAssetsLibrary *_assetsLibrary;
    float _delayBetweenImageWrites;
    NSObject<OS_dispatch_queue> *_assetsLibraryWorkQueue;
    NSObject<OS_dispatch_queue> *_assetsLoadingQueue;
    BOOL _listeningToChangeNotification;
    BOOL _needsReindexing;
    BOOL _wantsPartialIndex;
    FBAssetThumbnailResourceManager *_resourceManager;
    BOOL _observationStopped;
    FBTempAssetsManager *_tempAssetsManager;
    FBAssetsLibraryListenerAnnouncer *_announcer;
    BOOL _completedInitialIndex;
    BOOL _indexOutdated;
    NSURL *_cameraRollURL;
    NSURL *_photoStreamURL;
    int _pendingAssetWrites;
    unsigned int _mediaFilter;
    NSMutableDictionary *_assetsGroupMap;
    NSMutableDictionary *_assetArrayMap;
    NSArray *_sortedGroupURLs;
    FBSerialOperationQueue *_assetsLibraryQueue;
    unsigned int _status;
    PHCachingImageManager *_imageManager;
    double _indexStartTime;
}

+ (id)writeImageQueue;
+ (id)sharedPhotoOnlyInstance;
+ (id)sharedInstance;
@property(retain, nonatomic) PHCachingImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) BOOL indexOutdated; // @synthesize indexOutdated=_indexOutdated;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(nonatomic) double indexStartTime; // @synthesize indexStartTime=_indexStartTime;
@property(retain, nonatomic) FBSerialOperationQueue *assetsLibraryQueue; // @synthesize assetsLibraryQueue=_assetsLibraryQueue;
@property(copy, nonatomic) NSArray *sortedGroupURLs; // @synthesize sortedGroupURLs=_sortedGroupURLs;
@property(retain, nonatomic) NSMutableDictionary *assetArrayMap; // @synthesize assetArrayMap=_assetArrayMap;
@property(retain, nonatomic) NSMutableDictionary *assetsGroupMap; // @synthesize assetsGroupMap=_assetsGroupMap;
@property(readonly, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(nonatomic) unsigned int mediaFilter; // @synthesize mediaFilter=_mediaFilter;
@property(nonatomic) int pendingAssetWrites; // @synthesize pendingAssetWrites=_pendingAssetWrites;
@property(retain, nonatomic) NSURL *photoStreamURL; // @synthesize photoStreamURL=_photoStreamURL;
@property(retain, nonatomic) NSURL *cameraRollURL; // @synthesize cameraRollURL=_cameraRollURL;
@property(nonatomic) BOOL completedInitialIndex; // @synthesize completedInitialIndex=_completedInitialIndex;
- (void).cxx_destruct;
- (id)_assetAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)_assetAtIndexOld:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)_assetsGroupWithURL:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)requestImageDataAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)requestDefaultUTIAndImageDataAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)defaultUTIAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (void)overrideDelayBetweenImageWrites:(float)arg1;
- (void)fetchAssetForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)fetchImageForURL:(id)arg1 fullResolution:(BOOL)arg2 targetDimension:(int)arg3 networkAccessAllowed:(BOOL)arg4 completionBlock:(CDUnknownBlockType)arg5 failureBlock:(CDUnknownBlockType)arg6;
- (void)fetchImageForURL:(id)arg1 fullResolution:(BOOL)arg2 targetDimension:(int)arg3 completionBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
- (void)fetchImageForURL:(id)arg1 fullResolution:(BOOL)arg2 completionBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)fetchFullResolutionImageDataForURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)_reloadIfNeeded;
- (void)_reloadIfNeededAsync;
- (void)onAssetsLibraryChanged:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_updateLibraryStateWithAssetsGroupMap:(id)arg1 assetArrayMap:(id)arg2 extraData:(id)arg3;
- (void)_loadAssetsInGroupWithIndex:(unsigned int)arg1 assetsGroupMap:(id)arg2 assetArrayMap:(id)arg3 extraData:(id)arg4;
- (void)_loadAssetsIntoGroups:(id)arg1 extraData:(id)arg2;
- (void)_loadAssetsHelper;
- (void)_loadAssets;
- (BOOL)_shouldRetryWriteForError:(id)arg1;
- (id)phAssetURLFromALAssetURL:(id)arg1;
- (void)_writeImageData:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3 retryCount:(unsigned int)arg4 logger:(id)arg5;
- (void)writeImageData:(id)arg1 metadata:(id)arg2 completion:(CDUnknownBlockType)arg3 logger:(id)arg4;
- (id)fileURLForImageData:(id)arg1 withMetadata:(id)arg2;
- (void)quickSyncRemoveAssetAtIndex:(unsigned int)arg1;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)quickSyncVideo:(id)arg1 saveToDisk:(BOOL)arg2;
- (void)quickSyncWriteImage:(id)arg1 saveToDisk:(BOOL)arg2;
- (void)isValidAssetURL:(id)arg1 callbackQueue:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (int)numberOfAssetsInCameraRoll;
- (int)numberOfAssetsInGroupWithURL:(id)arg1;
- (id)thumbnailAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2 option:(unsigned int)arg3;
- (id)cachedThumbnailAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2 option:(unsigned int)arg3;
- (id)_requestThumbnailAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2 option:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)_assetKeyForAsset:(id)arg1 option:(unsigned int)arg2;
- (id)requestThumbnailAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2 option:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)assetIdAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)assetAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)metadataAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)locationAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)dateAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)assetDurationAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (BOOL)assetIsPlayableAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)assetTypeAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (id)assetURLAtIndex:(unsigned int)arg1 inGroupWithURL:(id)arg2;
- (unsigned int)groupTypeForGroupWithURL:(id)arg1;
- (id)posterImageForGroupWithURL:(id)arg1;
- (id)nameForGroupWithURL:(id)arg1;
- (void)requestPermissionAndLoadAssetsWithSession:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)loadAssetsIfAccessAuthorizedWithSession:(id)arg1;
- (void)asyncPartiallyLoadAssetsIfAccessAuthorizedWithSession:(id)arg1 failureBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSArray *groupURLs;
- (void)resumeObservation;
- (void)stopObservation;
- (void)dealloc;
- (id)init;
- (id)initWithMediaFilter:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

