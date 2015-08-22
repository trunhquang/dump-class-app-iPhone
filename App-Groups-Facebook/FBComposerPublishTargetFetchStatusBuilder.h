//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBComposerPublishTargetFetchStatusBuilder : NSObject
{
    BOOL _hasFetchedGraphQLID;
    BOOL _hasFetchedTargetType;
    BOOL _hasFetchedTargetDescription;
    BOOL _hasFetchedName;
    BOOL _hasFetchedDisplayName;
    BOOL _hasFetchedProfilePictureURI;
    BOOL _hasFetchedCanViewerPostMediaToTimeline;
    BOOL _hasFetchedAllowMultiPhotoAttachments;
    BOOL _hasFetchedAllowMultiMediaAttachments;
    BOOL _hasFetchedFixedPrivacyExplanation;
    BOOL _hasFetchedAlbumMediaOwnerIdentifier;
    BOOL _hasFetchedAlbumMediaOwnerType;
    BOOL _hasFetchedAlbumType;
}

+ (id)composerPublishTargetFetchStatusFromExistingComposerPublishTargetFetchStatus:(id)arg1;
+ (id)composerPublishTargetFetchStatus;
- (id)withHasFetchedAlbumType:(BOOL)arg1;
- (id)withHasFetchedAlbumMediaOwnerType:(BOOL)arg1;
- (id)withHasFetchedAlbumMediaOwnerIdentifier:(BOOL)arg1;
- (id)withHasFetchedFixedPrivacyExplanation:(BOOL)arg1;
- (id)withHasFetchedAllowMultiMediaAttachments:(BOOL)arg1;
- (id)withHasFetchedAllowMultiPhotoAttachments:(BOOL)arg1;
- (id)withHasFetchedCanViewerPostMediaToTimeline:(BOOL)arg1;
- (id)withHasFetchedProfilePictureURI:(BOOL)arg1;
- (id)withHasFetchedDisplayName:(BOOL)arg1;
- (id)withHasFetchedName:(BOOL)arg1;
- (id)withHasFetchedTargetDescription:(BOOL)arg1;
- (id)withHasFetchedTargetType:(BOOL)arg1;
- (id)withHasFetchedGraphQLID:(BOOL)arg1;
- (id)build;

@end

