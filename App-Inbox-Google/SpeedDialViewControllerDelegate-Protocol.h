//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class SpeedDialViewController;

@protocol SpeedDialViewControllerDelegate
- (void)speedDialViewControllerInvite:(SpeedDialViewController *)arg1;
- (void)speedDialViewControllerDismiss:(SpeedDialViewController *)arg1;
- (void)speedDialViewControllerCompose:(SpeedDialViewController *)arg1 withContact:(id <JBTContactReference>)arg2;
- (void)speedDialViewControllerCompose:(SpeedDialViewController *)arg1;
- (void)speedDialViewControllerCreateTask:(SpeedDialViewController *)arg1;
@end

