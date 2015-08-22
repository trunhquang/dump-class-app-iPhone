//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIDSignInWebViewController, NSError, NSURL;

@protocol GIDSignInWebViewControllerDelegate <NSObject>
- (void)signInWebViewControllerDidComplete:(GIDSignInWebViewController *)arg1 withURL:(NSURL *)arg2 error:(NSError *)arg3;
- (void)signInWebViewControllerNeedsDismissing:(GIDSignInWebViewController *)arg1;
- (BOOL)signInWebViewController:(GIDSignInWebViewController *)arg1 shouldKeepLSOCookiesForAuthResponseURL:(NSURL *)arg2;
- (BOOL)signInWebViewController:(GIDSignInWebViewController *)arg1 shouldTreatURLAsAuthResponse:(NSURL *)arg2;
@end
