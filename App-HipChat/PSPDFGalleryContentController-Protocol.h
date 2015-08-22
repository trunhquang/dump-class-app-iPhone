//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, PSPDFGalleryConfiguration, PSPDFGalleryContentView, PSPDFGalleryItem, PSPDFGalleryViewController;

@protocol PSPDFGalleryContentController <NSObject>
+ (Class)contentViewClass;
+ (Class)contentItemClass;
- (void)configureContentView:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;

@optional
@property(nonatomic) BOOL fullscreen;
@property(retain, nonatomic) PSPDFGalleryConfiguration *configuration;
@property(nonatomic) __weak PSPDFGalleryViewController *parentViewController;
- (PSPDFGalleryItem *)resolveError:(NSError *)arg1 forItem:(PSPDFGalleryItem *)arg2;
- (BOOL)contentViewDidReceiveDoubleTap:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)contentViewDidEndFullscreenPanGesture:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)contentViewDidBeginFullscreenPanGesture:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)contentViewDidDisappear:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)contentViewWillDisappear:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)contentViewDidAppear:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)contentViewWillAppear:(PSPDFGalleryContentView *)arg1 item:(PSPDFGalleryItem *)arg2;
- (void)prepareContentViewForReuse:(PSPDFGalleryContentView *)arg1;
@end
