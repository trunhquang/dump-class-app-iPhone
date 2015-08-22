//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAssetsLibraryDataSource.h"

@class FBAssetsLibrary;

@interface FBCameraRollDataSource : FBAssetsLibraryDataSource
{
    unsigned int _updateCount;
    FBAssetsLibrary *_assetsLibrary;
}

- (void).cxx_destruct;
- (int)_libraryIndexForFirstAssetWithType:(id)arg1;
- (id)displayIcon;
- (id)displayTitle;
- (int)numDataSourceAssets;
- (id)dataSourceID;
- (id)dataSourceDescription;
- (int)cameraRollIndexForAssetWithURL:(id)arg1;
- (int)cameraRollIndexForFirstVideo;
- (int)cameraRollIndexForFirstPhoto;
- (void)refreshGroupURL;
- (id)initWithGroupURL:(id)arg1 assetsLibrary:(id)arg2 session:(id)arg3;

@end
