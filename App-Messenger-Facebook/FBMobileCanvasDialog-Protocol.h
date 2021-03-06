//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMobileCanvas, NSString, NSURL;

@protocol FBMobileCanvasDialog <NSObject>
- (void)close;
- (void)setActionButtonTitle:(NSString *)arg1 target:(id)arg2 selector:(SEL)arg3;
- (void)setCancelButtonTitle:(NSString *)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id <FBWebView>)webView;
- (void)closeDialog:(id <FBMobileCanvasDialog>)arg1;
- (FBMobileCanvas *)openDialogWithURL:(NSURL *)arg1;

@optional
- (void)dialogDidLoad:(id <FBMobileCanvasDialog>)arg1;
@end

