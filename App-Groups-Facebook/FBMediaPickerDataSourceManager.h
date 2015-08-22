//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAssetsLibraryListener.h"
#import "FBMediaImageManagerListener.h"
#import "FBMediaTraitsUpdateListener.h"

@class FBAssetsLibrary, FBCameraRollDataSource, FBMediaComposition, FBMediaImageManager, FBMediaPickerBaseTraits, FBPhotoAssetPreparersManager, FBPhotoStreamDataSource, FBUserSession, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface FBMediaPickerDataSourceManager : NSObject <FBAssetsLibraryListener, FBMediaTraitsUpdateListener, FBMediaImageManagerListener>
{
    NSMutableArray *_localDataSources;
    NSMutableDictionary *_dataSourceIDToDataSource;
    FBMediaImageManager *_imageManager;
    unsigned int _selectionPolicy;
    FBMediaComposition *_savedComposition;
    FBMediaPickerBaseTraits *_traits;
    FBMediaComposition *_currentComposition;
    FBPhotoStreamDataSource *_photoStreamDataSource;
    FBCameraRollDataSource *_cameraRollDataSource;
    FBPhotoAssetPreparersManager *_photoAssetPreparerManager;
    FBAssetsLibrary *_assetsLibrary;
    FBUserSession *_currentFBSession;
}

@property(retain, nonatomic) FBUserSession *currentFBSession; // @synthesize currentFBSession=_currentFBSession;
@property(readonly, nonatomic) FBAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(readonly, nonatomic) FBPhotoAssetPreparersManager *photoAssetPreparerManager; // @synthesize photoAssetPreparerManager=_photoAssetPreparerManager;
@property(retain, nonatomic) FBCameraRollDataSource *cameraRollDataSource; // @synthesize cameraRollDataSource=_cameraRollDataSource;
@property(readonly, nonatomic) FBPhotoStreamDataSource *photoStreamDataSource; // @synthesize photoStreamDataSource=_photoStreamDataSource;
@property(readonly, nonatomic) NSArray *localDataSources; // @synthesize localDataSources=_localDataSources;
@property(retain, nonatomic) FBMediaComposition *currentComposition; // @synthesize currentComposition=_currentComposition;
@property(readonly, nonatomic) FBMediaPickerBaseTraits *traits; // @synthesize traits=_traits;
- (void).cxx_destruct;
- (void)asyncPartiallyLoadAssetsIfAccessAuthorized;
- (void)updateThumbnailImage:(id)arg1 forPhotoAssetID:(id)arg2;
- (void)prepareImageForEditingFromPhotoAssetID:(id)arg1 useCroppedPhoto:(BOOL)arg2 applyStickers:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)applyEditsToThumbForPhotoAssetID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_resetPhotoAssetEditsForInMemoryPhotoAsset:(id)arg1;
- (unsigned int)_dataSourceIndexForAssetID:(id)arg1 withIndexHint:(unsigned int)arg2 inDataSource:(id)arg3;
- (unsigned int)_dataSourceIndexForAssetID:(id)arg1 withIndexHint:(unsigned int)arg2 dataSourceID:(id)arg3;
- (void)_removeInvalidSelectionFromComposition:(id)arg1;
- (void)_removeInvalidSelectionIfNeeded;
- (void)editsDidChangeForAsset:(id)arg1;
- (void)autoTagCreateIfNeededForPhotoAssetIDs:(id)arg1 createdType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearComposition;
- (void)restoreComposition;
- (void)persistComposition;
- (id)toggleSelectionAtDataSourceIndex:(unsigned int)arg1 fromDataSource:(id)arg2 quality:(unsigned int)arg3;
- (unsigned int)shareIndexForDataSourceIndex:(unsigned int)arg1 forDataSource:(id)arg2;
- (id)selectedMediaShareItemWithDataSourceIndex:(unsigned int)arg1 fromDataSource:(id)arg2;
- (unsigned int)datasourceIndexForShareIndex:(unsigned int)arg1;
- (id)datasourceForShareIndex:(unsigned int)arg1;
- (unsigned int)dataSourceIndexForMediaShareItem:(id)arg1;
- (unsigned int)dataSourceIndexForPhotoAttachment:(id)arg1;
- (id)requestThumbnailForAssetAtDataSourceIndex:(unsigned int)arg1 option:(unsigned int)arg2 forDataSource:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)requestThumbnailForPhotoShareItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)_editedThumbnailForAssetAtDataSourceIndex:(unsigned int)arg1 forDataSource:(id)arg2;
- (id)cachedThumbnailForAssetAtDataSourceIndex:(unsigned int)arg1 option:(unsigned int)arg2 forDataSource:(id)arg3;
- (id)thumbnailForAssetAtDataSourceIndex:(unsigned int)arg1 option:(unsigned int)arg2 forDataSource:(id)arg3;
- (id)thumbnailImagesForPhotoShareItemsInCurrentComposition;
- (id)thumbnailForPhotoShareItem:(id)arg1;
- (id)getOrMakeNewAssetForDataSourceIndex:(unsigned int)arg1 forDataSource:(id)arg2;
- (id)getOrMakeNewAssetForDataSourceIndex:(unsigned int)arg1 forDataSourceID:(id)arg2;
- (id)getOrMakeNewAssetForItem:(id)arg1;
- (id)getExistingAssetForItem:(id)arg1;
- (id)dataSourceWithID:(id)arg1;
@property(readonly, nonatomic) unsigned int numberOfDataSources;
@property(readonly, nonatomic) FBMediaImageManager *imageManager;
- (id)_localDataSourceWithGroupURL:(id)arg1;
- (void)_reloadLocalDataSources;
- (void)assetsLibraryDidLoadAssets;
- (void)didUpdateMediaTraits:(id)arg1;
- (void)dealloc;
- (id)initWithCurrentFBSession:(id)arg1 mediaPickerTraits:(id)arg2 assetsLibrary:(id)arg3;
- (id)_getVideoAttachmentFromShareItem:(id)arg1;
- (id)getPhotoAttachmentFromShareItem:(id)arg1;
- (id)mediaAttachmentsFromCurrentComposition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

