//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComposeViewController;

@protocol ComposeViewControllerDelegate <NSObject>

@optional
- (void)composeViewControllerDidNotSend:(ComposeViewController *)arg1;
- (void)composeViewControllerDidSend:(ComposeViewController *)arg1;
- (void)composeViewControllerDidDismiss:(ComposeViewController *)arg1;
@end

