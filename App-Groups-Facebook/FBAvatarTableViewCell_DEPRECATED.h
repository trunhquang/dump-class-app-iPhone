//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBAttributedTextTableViewCell_DEPRECATED.h"

@class FBConsistentLookasideCacheObservationHandle, FBGraphQLConsistentLookasideCache, FBImageDownloader, FBKVOController, NSString;

@interface FBAvatarTableViewCell_DEPRECATED : FBAttributedTextTableViewCell_DEPRECATED
{
    FBKVOController *_observation;
    FBImageDownloader *_imageDownloader;
    FBConsistentLookasideCacheObservationHandle *_avatarCLCHandle;
    id <FBAvatarProtocol> _avatar;
    struct CGColor *_textColor;
    NSString *_accessibilityLabelPrefix;
    id _imageDownload;
    FBGraphQLConsistentLookasideCache *_consistentLookasideCache;
}

@property(retain, nonatomic) FBGraphQLConsistentLookasideCache *consistentLookasideCache; // @synthesize consistentLookasideCache=_consistentLookasideCache;
@property(retain, nonatomic) id imageDownload; // @synthesize imageDownload=_imageDownload;
@property(copy, nonatomic) NSString *accessibilityLabelPrefix; // @synthesize accessibilityLabelPrefix=_accessibilityLabelPrefix;
@property(retain, nonatomic) struct CGColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) id <FBAvatarProtocol> avatar; // @synthesize avatar=_avatar;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (struct UIEdgeInsets)textPadding;
- (id)textForAvatar;
- (struct CGRect)textLayoutFrame;
- (void)layoutSubviews;
- (void)_avatarUpdated:(id)arg1;
- (void)_groupAvatarUpdated:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadImageWithURL:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1 session:(id)arg2;

@end

