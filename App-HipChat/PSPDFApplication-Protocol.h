//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol PSPDFApplication <NSObject>
@property(readonly, nonatomic) id <PSPDFNetworkActivityIndicatorManager> networkIndicatorManager;
- (void)openURL:(NSURL *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (BOOL)canOpenURL:(NSURL *)arg1;
@end

