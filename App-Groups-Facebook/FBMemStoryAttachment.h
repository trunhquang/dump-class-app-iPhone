//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBActionLinkDestinationsProtocol.h"

@class NSString;

@interface FBMemStoryAttachment : FBMemModelObject <FBActionLinkDestinationsProtocol>
{
}

- (BOOL)hasAppDestination;
- (int)storyAttachmentMetaData;
- (id)calculateClientSideFields;
- (id)derivedTarget;
- (id)linkVideoEndscreenIcon;
- (id)trimmedSource;
- (id)mediaImageSizedLargeSquare;
- (id)mediaImageSizedLarge;
- (id)mediaImageSized;
- (id)linkImageURLString;
- (id)targetOpenGraphEntity;
- (id)video;
- (id)photo;
- (BOOL)isNativeVideoAttachment;
- (BOOL)isVideoShare;
- (BOOL)isLinkShare;
- (BOOL)isPhotoAttachment;
- (BOOL)isLinkAttachment;
- (BOOL)isStickerAttachment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

