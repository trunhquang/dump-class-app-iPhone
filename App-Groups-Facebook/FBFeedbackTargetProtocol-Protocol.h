//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMemFeedback, FBUserSession;

@protocol FBFeedbackTargetProtocol <NSObject>
- (void)taggableSourceAvatarWithSession:(FBUserSession *)arg1 completion:(void (^)(id, NSError *))arg2;
- (FBMemFeedback *)feedback;
@end

