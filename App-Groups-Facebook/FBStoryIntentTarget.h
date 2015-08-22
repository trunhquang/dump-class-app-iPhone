//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBIntentTarget.h"

@class FBMemFeedStory, NSString, NSURL;

@interface FBStoryIntentTarget : FBIntentTarget
{
    NSString *_graphAPIID;
    NSString *_graphQLID;
    NSString *_focusedCommentID;
    NSString *_viewerFBID;
    NSString *_notificationSource;
    NSString *_notificationTrackingInfo;
    NSURL *_fallbackURL;
}

+ (id)storyTargetWithGraphQLID:(id)arg1 graphAPIID:(id)arg2 focusedCommentID:(id)arg3 viewerFBID:(id)arg4 notificationSource:(id)arg5 notificationTrackingInfo:(id)arg6 fallbackURL:(id)arg7;
+ (id)storyTargetWithGraphQLID:(id)arg1;
+ (id)storyTargetWithGraphAPIID:(id)arg1;
+ (id)storyTargetWithStory:(id)arg1 focusedCommentID:(id)arg2 viewerFBID:(id)arg3 notificationSource:(id)arg4 notificationTrackingInfo:(id)arg5 fallbackURL:(id)arg6 layoutIdiom:(unsigned int)arg7;
+ (id)storyTargetWithStory:(id)arg1;
@property(readonly, copy, nonatomic) NSURL *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(readonly, copy, nonatomic) NSString *notificationTrackingInfo; // @synthesize notificationTrackingInfo=_notificationTrackingInfo;
@property(readonly, copy, nonatomic) NSString *notificationSource; // @synthesize notificationSource=_notificationSource;
@property(readonly, copy, nonatomic) NSString *viewerFBID; // @synthesize viewerFBID=_viewerFBID;
@property(readonly, copy, nonatomic) NSString *focusedCommentID; // @synthesize focusedCommentID=_focusedCommentID;
@property(readonly, copy, nonatomic) NSString *graphQLID; // @synthesize graphQLID=_graphQLID;
@property(readonly, copy, nonatomic) NSString *graphAPIID; // @synthesize graphAPIID=_graphAPIID;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)fallbackURLs;
@property(nonatomic) BOOL isInGroupContext;
@property(readonly, nonatomic) unsigned int layoutIdiom;
@property(readonly, nonatomic) FBMemFeedStory *story;

@end

