//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGPost.h"

#import "IGFeedHeaderItem.h"
#import "IGStoredObject.h"

@class CLLocation, IGDate, IGDirectResponseInfo, IGLocation, IGSponsoredPostInfo, IGUser, IGUsertagGroup, NSString;

@interface IGFeedItem : IGPost <IGStoredObject, IGFeedHeaderItem>
{
    BOOL _seen;
    BOOL _isHidden;
    BOOL _inPhotosOfYou;
    BOOL _carouselLinkButtonOverride;
    NSString *_permalink;
    IGUsertagGroup *_usertags;
    IGDirectResponseInfo *_directResponseInfo;
    IGSponsoredPostInfo *_sponsoredPostInfo;
    NSString *_organicTrackingToken;
    NSString *_exploreAlgorithm;
    NSString *_exploreImpressionToken;
}

+ (id)centralizedStore;
@property BOOL carouselLinkButtonOverride; // @synthesize carouselLinkButtonOverride=_carouselLinkButtonOverride;
@property(readonly) NSString *exploreImpressionToken; // @synthesize exploreImpressionToken=_exploreImpressionToken;
@property(readonly) NSString *exploreAlgorithm; // @synthesize exploreAlgorithm=_exploreAlgorithm;
- (void).cxx_destruct;
- (id)getMediaId;
- (id)urlToFlagComment:(id)arg1;
- (id)urlToDeleteComment:(id)arg1;
- (id)urlToPostComment;
- (void)performLike:(BOOL)arg1 withUser:(id)arg2 userDidDoubleTap:(BOOL)arg3 userInfo:(id)arg4 index:(int)arg5 analyticsMetadata:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)performLike:(BOOL)arg1 withUser:(id)arg2 userDidDoubleTap:(BOOL)arg3 index:(int)arg4 analyticsMetadata:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setSponsoredPostInfoFromEntry:(id)arg1;
- (BOOL)seen;
- (void)markAsSeen;
- (void)untagCurrentUserWithSuccessHandler:(CDUnknownBlockType)arg1 failureHandler:(CDUnknownBlockType)arg2;
- (void)addToPhotosOfYou:(BOOL)arg1 successHandler:(CDUnknownBlockType)arg2 failureHandler:(CDUnknownBlockType)arg3;
- (void)setUsertagsFromEntry:(id)arg1;
@property(retain) IGUsertagGroup *usertags; // @synthesize usertags=_usertags;
- (BOOL)updateWithDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(copy) NSString *organicTrackingToken; // @synthesize organicTrackingToken=_organicTrackingToken;
@property(readonly) IGSponsoredPostInfo *sponsoredPostInfo; // @synthesize sponsoredPostInfo=_sponsoredPostInfo;
- (void)setSponsoredPostInfo:(id)arg1;
@property(readonly) IGDirectResponseInfo *directResponseInfo; // @synthesize directResponseInfo=_directResponseInfo;
- (void)setDirectResponseInfo:(id)arg1;
@property(readonly) BOOL inPhotosOfYou; // @synthesize inPhotosOfYou=_inPhotosOfYou;
- (void)setInPhotosOfYou:(BOOL)arg1;
@property BOOL isHidden; // @synthesize isHidden=_isHidden;
@property(readonly, copy) NSString *permalink; // @synthesize permalink=_permalink;
- (void)setPermalink:(id)arg1;
- (id)grayStyleStringForType:(unsigned int)arg1;
- (id)defaultStyleStringForType:(unsigned int)arg1;
- (id)commaNumberFormatter;
- (id)likeTextForType:(unsigned int)arg1;
- (id)buildAddCommentStyledStringForType:(unsigned int)arg1;
- (id)buildMoreCommentsStyledStringForType:(unsigned int)arg1;
- (id)buildLayoutContextStringForType:(unsigned int)arg1;
- (id)buildHyperlapseContextStringForType:(unsigned int)arg1;
- (id)buildExploreContextStringForType:(unsigned int)arg1;
- (id)buildLikersStyledStringForType:(unsigned int)arg1;
@property(readonly, copy, nonatomic) NSString *ig_productSessionKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) IGLocation *location;
@property(readonly) CLLocation *mediaCoord;
@property(readonly) Class superclass;
@property(readonly) IGDate *takenAt;
@property(readonly) IGUser *user;

@end
