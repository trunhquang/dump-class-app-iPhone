//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNInAppNotificationView;

@protocol MNInAppNotificationViewDelegate <NSObject>
- (void)inAppNotificationViewDidDismiss:(MNInAppNotificationView *)arg1;
- (void)inAppNotificationViewDidPullDown:(MNInAppNotificationView *)arg1;
- (void)inAppNotificationViewDidDisappear:(MNInAppNotificationView *)arg1;
- (void)inAppNotificationViewDidTap:(MNInAppNotificationView *)arg1;
@end
