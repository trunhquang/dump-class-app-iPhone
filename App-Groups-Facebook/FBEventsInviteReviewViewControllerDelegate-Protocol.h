//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBEventsInviteReviewViewController, NSArray;

@protocol FBEventsInviteReviewViewControllerDelegate <NSObject>
- (void)inviteReviewController:(FBEventsInviteReviewViewController *)arg1 didSelectSendButtonWithInvitees:(NSArray *)arg2;
- (void)inviteReviewController:(FBEventsInviteReviewViewController *)arg1 didFinishWithInvitees:(NSArray *)arg2;
@end

