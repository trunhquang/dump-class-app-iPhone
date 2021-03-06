//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, UIColor, UIImage;

@interface CBLPageControl : UIView
{
    int _numberOfPages;
    int _currentPage;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    UIImage *_pageIndicatorImage;
    UIImage *_currentPageIndicatorImage;
    float _indicatorDotHorizontalSpacing;
    NSMutableArray *_pageIndicators;
}

@property(retain, nonatomic) NSMutableArray *pageIndicators; // @synthesize pageIndicators=_pageIndicators;
@property(nonatomic) float indicatorDotHorizontalSpacing; // @synthesize indicatorDotHorizontalSpacing=_indicatorDotHorizontalSpacing;
@property(retain, nonatomic) UIImage *currentPageIndicatorImage; // @synthesize currentPageIndicatorImage=_currentPageIndicatorImage;
@property(retain, nonatomic) UIImage *pageIndicatorImage; // @synthesize pageIndicatorImage=_pageIndicatorImage;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) int currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) int numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void).cxx_destruct;
- (id)pageIndicatorImageWithColor:(id)arg1;
- (struct CGSize)sizeForNumberOfPages:(int)arg1;
- (void)layoutSubviews;
- (id)init;

@end

