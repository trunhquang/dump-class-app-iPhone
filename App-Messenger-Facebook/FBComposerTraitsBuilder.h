//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBComposerDefaultAlbumSelectionBehaviour, FBComposerForSaleConfiguration, FBComposerPrivacySetting, FBComposerPublishButtonTextBehaviour, NSString;

@interface FBComposerTraitsBuilder : NSObject
{
    unsigned int _interfaceStyle;
    int _checkinSearchType;
    NSString *_publisherIdentifier;
    NSString *_composerAnalyticsType;
    BOOL _showProfilePicture;
    BOOL _allowDraftRecovery;
    BOOL _allowCachingOfResultantPublication;
    BOOL _allowReactionAfterPublication;
    unsigned int _mentioningPermission;
    unsigned int _albumSelectionPermission;
    FBComposerDefaultAlbumSelectionBehaviour *_defaultAlbumSelectionBehaviour;
    BOOL _allowHashtags;
    unsigned int _photoAttachmentPermission;
    unsigned int _videoAttachmentPermission;
    BOOL _allowPostOptions;
    BOOL _allowLinkAttachments;
    BOOL _allowLinkAttachmentPicker;
    BOOL _scrapeLinkAttachments;
    FBComposerPublishButtonTextBehaviour *_publishButtonTextBehaviour;
    unsigned int _implicitPlaceTaggingPermission;
    BOOL _allowPlaceTagging;
    BOOL _allowPlaceAttachment;
    BOOL _allowBackDate;
    unsigned int _userTaggingPermission;
    unsigned int _activityTaggingPermission;
    unsigned int _zeroRatingSentryType;
    unsigned int _placeholderType;
    unsigned int _titleType;
    unsigned int _dismissalPermission;
    unsigned int _publishPermission;
    unsigned int _targetLoadType;
    unsigned int _privacySettingSavePermission;
    unsigned int _postSchedulingPermission;
    BOOL _allowQAndA;
    BOOL _shouldShowAudienceBar;
    BOOL _allowFaceDetection;
    BOOL _allowLargeThumbnailsDesign;
    unsigned int _userTaggingInMediaPermission;
    unsigned int _authorLoadType;
    unsigned int _privacySettingLoadType;
    FBComposerPrivacySetting *_initialPrivacySetting;
    BOOL _startAttachmentUploadsImmediately;
    BOOL _allowPhotoDragging;
    BOOL _allowPhotoRemoving;
    BOOL _isEditingReview;
    unsigned int _tagAnyoneInMentionsPermission;
    NSString *_mentionTagSearchContext;
    BOOL _forceDirectedPost;
    unsigned int _allowPostExpirationOption;
    unsigned int _launchKeyboardBehavior;
    BOOL _allowShareDestinationUserEducation;
    BOOL _allowStreamlinedComposer;
    BOOL _forceSimpleSearchForMentions;
    unsigned int _minimumLengthOfStatusTextForPostToBeConsideredPublishable;
    FBComposerForSaleConfiguration *_forSaleConfiguration;
    BOOL _allowModifyingCaptionsOnPhotos;
    unsigned int _cursorLaunchBehavior;
    BOOL _allowStickersInPhotos;
    BOOL _allowTextInPhotos;
    BOOL _allowChangingDestination;
    BOOL _shouldAllowVideosInAlbums;
    unsigned int _postCompositionAllowance;
    BOOL _allowDisablingFeaturesInComposerDueToStartingStyle;
    BOOL _allowMajorLifeEventTitleEditing;
    BOOL _allowMagicStories;
    BOOL _allowStickersAsAttachments;
    BOOL _allowFollowerTargeting;
    BOOL _showRedSpaceToggle;
    BOOL _allowFeedTopic;
}

+ (id)composerTraitsFromExistingComposerTraits:(id)arg1;
+ (id)composerTraits;
- (void).cxx_destruct;
- (id)withAllowFeedTopic:(BOOL)arg1;
- (id)withShowRedSpaceToggle:(BOOL)arg1;
- (id)withAllowFollowerTargeting:(BOOL)arg1;
- (id)withAllowStickersAsAttachments:(BOOL)arg1;
- (id)withAllowMagicStories:(BOOL)arg1;
- (id)withAllowMajorLifeEventTitleEditing:(BOOL)arg1;
- (id)withAllowDisablingFeaturesInComposerDueToStartingStyle:(BOOL)arg1;
- (id)withPostCompositionAllowance:(unsigned int)arg1;
- (id)withShouldAllowVideosInAlbums:(BOOL)arg1;
- (id)withAllowChangingDestination:(BOOL)arg1;
- (id)withAllowTextInPhotos:(BOOL)arg1;
- (id)withAllowStickersInPhotos:(BOOL)arg1;
- (id)withCursorLaunchBehavior:(unsigned int)arg1;
- (id)withAllowModifyingCaptionsOnPhotos:(BOOL)arg1;
- (id)withForSaleConfiguration:(id)arg1;
- (id)withMinimumLengthOfStatusTextForPostToBeConsideredPublishable:(unsigned int)arg1;
- (id)withForceSimpleSearchForMentions:(BOOL)arg1;
- (id)withAllowStreamlinedComposer:(BOOL)arg1;
- (id)withAllowShareDestinationUserEducation:(BOOL)arg1;
- (id)withLaunchKeyboardBehavior:(unsigned int)arg1;
- (id)withAllowPostExpirationOption:(unsigned int)arg1;
- (id)withForceDirectedPost:(BOOL)arg1;
- (id)withMentionTagSearchContext:(id)arg1;
- (id)withTagAnyoneInMentionsPermission:(unsigned int)arg1;
- (id)withIsEditingReview:(BOOL)arg1;
- (id)withAllowPhotoRemoving:(BOOL)arg1;
- (id)withAllowPhotoDragging:(BOOL)arg1;
- (id)withStartAttachmentUploadsImmediately:(BOOL)arg1;
- (id)withInitialPrivacySetting:(id)arg1;
- (id)withPrivacySettingLoadType:(unsigned int)arg1;
- (id)withAuthorLoadType:(unsigned int)arg1;
- (id)withUserTaggingInMediaPermission:(unsigned int)arg1;
- (id)withAllowLargeThumbnailsDesign:(BOOL)arg1;
- (id)withAllowFaceDetection:(BOOL)arg1;
- (id)withShouldShowAudienceBar:(BOOL)arg1;
- (id)withAllowQAndA:(BOOL)arg1;
- (id)withPostSchedulingPermission:(unsigned int)arg1;
- (id)withPrivacySettingSavePermission:(unsigned int)arg1;
- (id)withTargetLoadType:(unsigned int)arg1;
- (id)withPublishPermission:(unsigned int)arg1;
- (id)withDismissalPermission:(unsigned int)arg1;
- (id)withTitleType:(unsigned int)arg1;
- (id)withPlaceholderType:(unsigned int)arg1;
- (id)withZeroRatingSentryType:(unsigned int)arg1;
- (id)withActivityTaggingPermission:(unsigned int)arg1;
- (id)withUserTaggingPermission:(unsigned int)arg1;
- (id)withAllowBackDate:(BOOL)arg1;
- (id)withAllowPlaceAttachment:(BOOL)arg1;
- (id)withAllowPlaceTagging:(BOOL)arg1;
- (id)withImplicitPlaceTaggingPermission:(unsigned int)arg1;
- (id)withPublishButtonTextBehaviour:(id)arg1;
- (id)withScrapeLinkAttachments:(BOOL)arg1;
- (id)withAllowLinkAttachmentPicker:(BOOL)arg1;
- (id)withAllowLinkAttachments:(BOOL)arg1;
- (id)withAllowPostOptions:(BOOL)arg1;
- (id)withVideoAttachmentPermission:(unsigned int)arg1;
- (id)withPhotoAttachmentPermission:(unsigned int)arg1;
- (id)withAllowHashtags:(BOOL)arg1;
- (id)withDefaultAlbumSelectionBehaviour:(id)arg1;
- (id)withAlbumSelectionPermission:(unsigned int)arg1;
- (id)withMentioningPermission:(unsigned int)arg1;
- (id)withAllowReactionAfterPublication:(BOOL)arg1;
- (id)withAllowCachingOfResultantPublication:(BOOL)arg1;
- (id)withAllowDraftRecovery:(BOOL)arg1;
- (id)withShowProfilePicture:(BOOL)arg1;
- (id)withComposerAnalyticsType:(id)arg1;
- (id)withPublisherIdentifier:(id)arg1;
- (id)withCheckinSearchType:(int)arg1;
- (id)withInterfaceStyle:(unsigned int)arg1;
- (id)build;

@end
