//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAnalytics, FBUserSession, MNAdaptiveImageDownloader, MNCDNPhotoDownloader, MNPhotoImageCache, MNPhotoImageUploadCandidateStore;

@interface MNPhotoImageRequester : NSObject
{
    FBUserSession *_userSession;
    MNPhotoImageCache *_imageCache;
    MNPhotoImageUploadCandidateStore *_imageUploadCandidateStore;
    MNAdaptiveImageDownloader *_adaptiveImageDownloader;
    FBAnalytics *_analytics;
    MNCDNPhotoDownloader *_cdnPhotoDownloader;
    BOOL _shouldUseCDNPhotoDownloader;
}

- (void).cxx_destruct;
- (id)_downloadImageFromCDNDownloaderWithImageRequest:(id)arg1 photoViewModel:(id)arg2 queue:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)_downloadImageWithImageRequest:(id)arg1 photoViewModel:(id)arg2 queue:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)_cancelImageDownloadWithImageRequest:(id)arg1;
- (BOOL)_performImageCacheWithRequest:(id)arg1 photoViewModel:(id)arg2 callbackQueue:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (BOOL)_tryLoadImageFromUploadCandidateStoreWithPhotoViewModel:(id)arg1 size:(int)arg2 queue:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)fetchPhotoImageFromPhotoViewModel:(id)arg1 size:(int)arg2 imageFlags:(unsigned int)arg3 callPath:(id)arg4 queue:(id)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (void)cancelRequest:(id)arg1;
- (id)initWithUserSession:(id)arg1 imageCache:(id)arg2 uploadCandidateStore:(id)arg3 adaptiveImageDownloader:(id)arg4 analytics:(id)arg5 cdnPhotoDownloader:(id)arg6 shouldUseCDNPhotoDownloader:(BOOL)arg7;

@end
