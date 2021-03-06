//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SimulatedNotificationUtil : NSObject
{
}

+ (id)simulatedLocalNotification;
+ (id)localNotificationWithEmail:(id)arg1 itemId:(id)arg2 typeId:(int)arg3;
+ (id)localNotificationWithAccountId:(id)arg1 serializedId:(id)arg2 itemType:(int)arg3;
+ (id)simulatedRemoteNotification;
+ (id)remoteNotificationWithAccountId:(id)arg1 conversationId:(id)arg2 badgeCount:(id)arg3 alert:(BOOL)arg4;
+ (id)remoteNotificationWithAccountId:(id)arg1 serializedId:(id)arg2;
+ (void)setLastOpenedItem:(id)arg1 accountId:(id)arg2 itemType:(int)arg3;
+ (BOOL)checkFireTestNotificationFlag:(int)arg1 andClear:(BOOL)arg2;

@end

