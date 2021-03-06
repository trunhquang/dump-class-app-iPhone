//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, iCarousel;

@protocol iCarouselDataSource <NSObject>
- (UIView *)carousel:(iCarousel *)arg1 viewForItemAtIndex:(int)arg2 reusingView:(UIView *)arg3;
- (int)numberOfItemsInCarousel:(iCarousel *)arg1;

@optional
- (UIView *)carousel:(iCarousel *)arg1 placeholderViewAtIndex:(int)arg2 reusingView:(UIView *)arg3;
- (int)numberOfPlaceholdersInCarousel:(iCarousel *)arg1;
@end

