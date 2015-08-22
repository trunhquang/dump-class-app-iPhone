//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMediaAssetProtocol.h"

@class FBCPUImageFilterState, FBGLFilter, FBPhotoAssetEdits, NSData, NSDictionary, NSObject<OS_dispatch_semaphore>, NSString, UIImage;

@interface FBPhotoAsset : NSObject <FBMediaAssetProtocol>
{
    FBPhotoAssetEdits *_edits;
    UIImage *_thumbnail;
    NSData *_assetData;
    NSObject<OS_dispatch_semaphore> *_serializeSemaphore;
    BOOL _isScreenShot;
    NSString *_assetType;
    NSString *_assetID;
    UIImage *_standardImage;
    UIImage *_standardCroppedImage;
    UIImage *_standardFilteredImage;
    NSDictionary *_derivedContext;
}

@property(retain, nonatomic) NSDictionary *derivedContext; // @synthesize derivedContext=_derivedContext;
@property(retain, nonatomic) FBPhotoAssetEdits *edits; // @synthesize edits=_edits;
@property(retain, nonatomic) UIImage *standardFilteredImage; // @synthesize standardFilteredImage=_standardFilteredImage;
@property(retain, nonatomic) UIImage *standardCroppedImage; // @synthesize standardCroppedImage=_standardCroppedImage;
@property(retain, nonatomic) UIImage *standardImage; // @synthesize standardImage=_standardImage;
@property(readonly, nonatomic) BOOL isScreenShot; // @synthesize isScreenShot=_isScreenShot;
@property(readonly, copy, nonatomic) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *assetType; // @synthesize assetType=_assetType;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)removeTagSuggestionsForPhotoTagsEdge:(id)arg1 withSession:(id)arg2;
- (void)removePhotoTagsEdge:(id)arg1 withSession:(id)arg2;
- (void)addPhotoTagsEdge:(id)arg1 withSession:(id)arg2;
- (void)addPhotoTagsEdges:(id)arg1 withSession:(id)arg2;
@property(readonly, nonatomic) BOOL isReadyForUse;
@property(readonly, nonatomic) BOOL hasPhotoOverlayLayer;
@property(readonly, nonatomic) BOOL anyFilterApplied;
@property(readonly, nonatomic) BOOL layeredFilterApplied;
@property(readonly, nonatomic) BOOL luxApplied;
@property(readonly, nonatomic) FBCPUImageFilterState *appliedCPUFilter;
@property(readonly, nonatomic) FBGLFilter *appliedNonLuxFilter;
- (id)initWithAssetID:(id)arg1 thumbnail:(id)arg2 isScreenShot:(BOOL)arg3;
- (id)initWithAssetID:(id)arg1 thumbnail:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

