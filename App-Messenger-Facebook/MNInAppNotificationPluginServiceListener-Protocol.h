//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol MNInAppNotificationPluginServiceListener <NSObject>
- (void)inAppNotificationPluginService:(id <MNInAppNotificationPluginService>)arg1 userDidTapCloseInInBanner:(id)arg2;
- (void)inAppNotificationPluginService:(id <MNInAppNotificationPluginService>)arg1 userDidTapContentInBanner:(id)arg2;
- (void)inAppNotificationPluginService:(id <MNInAppNotificationPluginService>)arg1 didDismissBanner:(id)arg2;
@end
