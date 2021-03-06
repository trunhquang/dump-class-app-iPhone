//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBPhotoTagSuggestionModelOperation.h"

@class FBMemModelPhotoTaggingAssetStore, NSString;

@interface FBPhotoTagSuggestionMemModelOperation : NSObject <FBPhotoTagSuggestionModelOperation>
{
    FBMemModelPhotoTaggingAssetStore *_memModelPhotoTaggingAssetStore;
}

- (void).cxx_destruct;
- (id)_vect2FromSize:(struct CGSize)arg1;
- (void)clearPhotoAssetsForAssetIDs:(id)arg1;
- (void)setSuggesionsLoadedValue:(unsigned int)arg1 forAsset:(id)arg2;
- (void)setLoadedFaceboxesTagSuggestions:(id)arg1 forAsset:(id)arg2;
- (void)loadStoredFaceFeatures:(BOOL)arg1 andTags:(BOOL)arg2 withAssetID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)saveNamedFaces:(id)arg1 withAssetID:(id)arg2 suggestionLoaded:(unsigned int)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)initWithMemModelPhotoTaggingAssetStore:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

