//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPopoverInfo, NSArray, NSURL, UIViewController;

@protocol FBNavigation <NSObject>
@property(readonly, nonatomic) UIViewController *viewControllerInCurrentPopover;
- (NSArray *)popToViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (NSArray *)popToRootViewControllerAnimated:(BOOL)arg1;
- (UIViewController *)popViewControllerAnimated:(BOOL)arg1;
- (void)pushViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(void (^)(void))arg2;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)presentModalViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (void)presentViewController:(UIViewController *)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (UIViewController *)presentedViewController;
- (UIViewController *)topViewController;
- (void)closeAllPopovers;
- (void)replaceOpenedViewController:(UIViewController *)arg1 withNewViewController:(UIViewController *)arg2;
- (void)dismissOpenedViewController:(UIViewController *)arg1 animated:(BOOL)arg2 completion:(void (^)(void))arg3;
- (void)dismissOpenedViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (void)dismissOpenedViewController:(UIViewController *)arg1;
- (BOOL)canOpenURL:(NSURL *)arg1;
- (BOOL)openURL:(NSURL *)arg1 method:(unsigned int)arg2 options:(unsigned int)arg3 popoverInfo:(FBPopoverInfo *)arg4 animated:(BOOL)arg5 completion:(void (^)(UIViewController *, NSError *))arg6 whenClosed:(void (^)(UIViewController *))arg7;
- (BOOL)openURL:(NSURL *)arg1 method:(unsigned int)arg2 options:(unsigned int)arg3 popoverInfo:(FBPopoverInfo *)arg4 animated:(BOOL)arg5;
- (BOOL)openURL:(NSURL *)arg1;
- (BOOL)openViewController:(UIViewController *)arg1 method:(unsigned int)arg2 options:(unsigned int)arg3 popoverInfo:(FBPopoverInfo *)arg4 animated:(BOOL)arg5 completion:(void (^)(UIViewController *, NSError *))arg6 whenClosed:(void (^)(UIViewController *))arg7;
- (BOOL)openViewController:(UIViewController *)arg1 method:(unsigned int)arg2 options:(unsigned int)arg3 popoverInfo:(FBPopoverInfo *)arg4 animated:(BOOL)arg5 whenClosed:(void (^)(UIViewController *))arg6;
- (BOOL)openViewController:(UIViewController *)arg1 popoverInfo:(FBPopoverInfo *)arg2 whenClosed:(void (^)(UIViewController *))arg3;
- (BOOL)openViewController:(UIViewController *)arg1 popoverInfo:(FBPopoverInfo *)arg2 animated:(BOOL)arg3 completion:(void (^)(UIViewController *, NSError *))arg4;
- (BOOL)openViewController:(UIViewController *)arg1 popoverInfo:(FBPopoverInfo *)arg2;
- (BOOL)openViewController:(UIViewController *)arg1 completion:(void (^)(UIViewController *, NSError *))arg2 whenClosed:(void (^)(UIViewController *))arg3;
- (BOOL)openViewController:(UIViewController *)arg1 animated:(BOOL)arg2 completion:(void (^)(UIViewController *, NSError *))arg3;
- (BOOL)openViewController:(UIViewController *)arg1 animated:(BOOL)arg2;
- (BOOL)openViewController:(UIViewController *)arg1;
@end

