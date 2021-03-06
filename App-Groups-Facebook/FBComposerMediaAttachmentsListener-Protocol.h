//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerAttachment, FBMultiPickerPhotoAttachment, NSArray, NSString, UIImage;

@protocol FBComposerMediaAttachmentsListener <NSObject>
- (void)updatedPhotosTags:(NSArray *)arg1 forAssetWithID:(NSString *)arg2;
- (void)updatedPhotoTaggingAsset:(id <FBPhotoTaggingAssetProtocol>)arg1;
- (void)updatedTemporaryDisplayImageForAttachment:(FBMultiPickerPhotoAttachment *)arg1;
- (void)updatedMentions:(NSArray *)arg1 forAttachment:(id <FBPhotoAttachmentProtocol>)arg2;
- (void)updatedCaption:(NSString *)arg1 forAttachment:(id <FBPhotoAttachmentProtocol>)arg2;
- (void)selectedStickerAttachments:(NSArray *)arg1;
- (void)selectedMediaAttachments:(NSArray *)arg1 allowPhotosAlongsideVideos:(BOOL)arg2;
- (void)selectedVideoAttachment:(FBComposerAttachment *)arg1;
- (void)selectedImageAttachments:(NSArray *)arg1;
- (void)failedToOpenInvalidMediaAttachment:(id <FBMediaAttachmentProtocol>)arg1;
- (void)draggedImageAttachmentAtIndex:(unsigned int)arg1 toDestinationIndex:(unsigned int)arg2;
- (void)deselectedMediaAttachmentWithThumbnailImage:(UIImage *)arg1;
- (void)deselectedMediaAttachment:(id <FBMediaAttachmentProtocol>)arg1;
- (void)clearedAllSelectedAttachments;
@end

