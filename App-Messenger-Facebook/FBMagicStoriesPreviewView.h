//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBMagicStoriesSwipeIndicatorView, UICollectionView, UIPageControl;

@interface FBMagicStoriesPreviewView : UIView
{
    struct CGRect _oldBounds;
    UICollectionView *_collectionView;
    UIView *_disabledOverlay;
    UIPageControl *_pageControl;
    FBMagicStoriesSwipeIndicatorView *_swipeIndicator;
}

@property(readonly, nonatomic) FBMagicStoriesSwipeIndicatorView *swipeIndicator; // @synthesize swipeIndicator=_swipeIndicator;
@property(readonly, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIView *disabledOverlay; // @synthesize disabledOverlay=_disabledOverlay;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

