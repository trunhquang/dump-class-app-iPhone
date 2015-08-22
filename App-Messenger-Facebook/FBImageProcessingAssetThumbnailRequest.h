//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBImageProcessingConcurrentRequest.h"

@class NSURL, UIImage;

@interface FBImageProcessingAssetThumbnailRequest : FBImageProcessingConcurrentRequest
{
    UIImage *_generatedThumbnail;
    NSURL *_assetURL;
    struct CGSize _thumbnailSize;
}

@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(retain, nonatomic) NSURL *assetURL; // @synthesize assetURL=_assetURL;
@property(readonly, nonatomic) UIImage *generatedThumbnail; // @synthesize generatedThumbnail=_generatedThumbnail;
- (void).cxx_destruct;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)executeWithContext:(id)arg1;
- (id)initWithAssetURL:(id)arg1 thumbnailSize:(struct CGSize)arg2 completionBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;

@end
