//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class PSPDFPagingScrollView;

@protocol PSPDFPagingScrollViewDelegate <UIScrollViewDelegate>
- (void)pagingScrollView:(PSPDFPagingScrollView *)arg1 didChangeFrameSizeFrom:(struct CGSize)arg2;
- (void)pagingScrollView:(PSPDFPagingScrollView *)arg1 willChangeFrameSizeTo:(struct CGSize)arg2;
@end

