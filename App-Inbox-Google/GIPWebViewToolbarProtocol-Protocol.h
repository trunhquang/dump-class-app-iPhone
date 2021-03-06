//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol GIPWebViewToolbarProtocol <NSObject>
- (void)hideSpinner;
- (void)showSpinner;
- (void)setVisibleURL:(NSURL *)arg1;
- (void)setBackButtonVisible:(BOOL)arg1;

@optional
- (void)setSafariButtonEnabled:(BOOL)arg1;
- (void)setReloadButtonEnabled:(BOOL)arg1;
- (void)setForwardButtonEnabled:(BOOL)arg1;
- (void)setBackButtonEnabled:(BOOL)arg1;
@end

