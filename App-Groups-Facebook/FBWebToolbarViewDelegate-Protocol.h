//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBWebToolbarView, UIBarButtonItem;

@protocol FBWebToolbarViewDelegate <NSObject>
- (void)webToolbar:(FBWebToolbarView *)arg1 appLinkInstallButtonPressed:(UIBarButtonItem *)arg2;
- (void)webToolbar:(FBWebToolbarView *)arg1 appLinkOpenButtonPressed:(UIBarButtonItem *)arg2;
- (void)webToolbar:(FBWebToolbarView *)arg1 shareButtonPressed:(UIBarButtonItem *)arg2;
- (void)webToolbar:(FBWebToolbarView *)arg1 actionButtonPressed:(UIBarButtonItem *)arg2;
- (void)webToolbar:(FBWebToolbarView *)arg1 refreshButtonPressed:(UIBarButtonItem *)arg2;
- (void)webToolbar:(FBWebToolbarView *)arg1 forwardButtonPressed:(UIBarButtonItem *)arg2;
- (void)webToolbar:(FBWebToolbarView *)arg1 backButtonPressed:(UIBarButtonItem *)arg2;
@end

