//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CBLBaseToastViewDelegate.h"

@class NSMutableArray, NSString;

@interface CBLToastManager : UIView <CBLBaseToastViewDelegate>
{
    NSMutableArray *_notificationsQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *notificationsQueue; // @synthesize notificationsQueue=_notificationsQueue;
- (void).cxx_destruct;
- (void)notificationViewShouldDismiss:(id)arg1;
- (void)notificationViewFinishedInteracting:(id)arg1;
- (void)notificationViewWasDismissed:(id)arg1;
- (void)removeEnqueuedNotifications;
- (BOOL)notificationIsVisible;
- (void)removeNotification:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)removeAllNotifications;
- (void)popOut:(id)arg1 animated:(BOOL)arg2;
- (void)popIn:(id)arg1;
- (void)scheduleHandler:(id)arg1;
- (void)scheduleHide:(id)arg1;
- (void)processQueue;
- (void)enqueue:(id)arg1;
- (void)showNotifications:(id)arg1;
- (void)setupNotification:(id)arg1;
- (void)showNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

