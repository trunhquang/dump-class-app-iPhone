//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol MNInviteActionListener <NSObject>
- (void)threadDetailsInviteButtonPressedWithUsers:(NSArray *)arg1 fromSource:(unsigned int)arg2;
- (void)inviteActionSheetOptionPressedForUserId:(NSString *)arg1;
- (void)settingsTabInvitePressed;
- (void)inviteBannerTappedForUserId:(NSString *)arg1;
- (void)inviteButtonPressedForUserId:(NSString *)arg1;
@end

