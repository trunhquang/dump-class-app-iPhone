//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class PSPDFGalleryContentView, PSPDFGalleryView;

@protocol PSPDFGalleryViewDelegate <UIScrollViewDelegate>

@optional
- (void)galleryView:(PSPDFGalleryView *)arg1 willReuseContentView:(PSPDFGalleryContentView *)arg2;
- (void)galleryView:(PSPDFGalleryView *)arg1 didScrollToItemAtIndex:(unsigned int)arg2;
- (void)galleryView:(PSPDFGalleryView *)arg1 willScrollToItemAtIndex:(unsigned int)arg2;
@end
