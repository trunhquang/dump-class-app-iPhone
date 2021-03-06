//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBComposerMagicStoryAttachment, FBComposerPhotoAttachment, FBComposerStorylineAttachment, FBComposerVideoHighlightAttachment, FBCompositionLinkShare, FBMSticker, FBMultiPickerVideoAttachment, FBNearbyPlace, NSArray;

@interface FBComposerAttachment : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBComposerPhotoAttachment *_photoAttachment_attachment;
    FBMultiPickerVideoAttachment *_videoAttachment_attachment;
    FBCompositionLinkShare *_sharedLinkAttachment_sharedLink;
    NSArray *_sharedLinkAttachment_shareTrackingCodes;
    FBComposerMagicStoryAttachment *_magicStoryAttachment_magicStoryAttachment;
    FBComposerVideoHighlightAttachment *_videoHighlightAttachment_videoHighlightAttachment;
    FBMultiPickerVideoAttachment *_loopsAttachment_attachment;
    float _loopsAttachment_timeBetweenFrames;
    FBNearbyPlace *_placeAttachment_nearbyPlace;
    FBMSticker *_stickerAttachment_attachment;
    FBComposerStorylineAttachment *_storylineAttachment_storylineAttachment;
}

+ (id)videoHighlightAttachmentWithVideoHighlightAttachment:(id)arg1;
+ (id)videoAttachmentWithAttachment:(id)arg1;
+ (id)storylineAttachmentWithStorylineAttachment:(id)arg1;
+ (id)stickerAttachmentWithAttachment:(id)arg1;
+ (id)sharedLinkAttachmentWithSharedLink:(id)arg1 shareTrackingCodes:(id)arg2;
+ (id)placeAttachmentWithNearbyPlace:(id)arg1;
+ (id)photoAttachmentWithAttachment:(id)arg1;
+ (id)magicStoryAttachmentWithMagicStoryAttachment:(id)arg1;
+ (id)loopsAttachmentWithAttachment:(id)arg1 timeBetweenFrames:(float)arg2;
- (void).cxx_destruct;
- (void)matchPhotoAttachment:(CDUnknownBlockType)arg1 videoAttachment:(CDUnknownBlockType)arg2 sharedLinkAttachment:(CDUnknownBlockType)arg3 magicStoryAttachment:(CDUnknownBlockType)arg4 videoHighlightAttachment:(CDUnknownBlockType)arg5 loopsAttachment:(CDUnknownBlockType)arg6 placeAttachment:(CDUnknownBlockType)arg7 stickerAttachment:(CDUnknownBlockType)arg8 storylineAttachment:(CDUnknownBlockType)arg9;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

