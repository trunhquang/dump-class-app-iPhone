//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GIDSignInWebView, NSError, NSURLRequest;

@protocol GIDSignInWebViewDelegate <NSObject>
- (void)signInWebView:(GIDSignInWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (BOOL)signInWebView:(GIDSignInWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(int)arg3;
@end

