//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBQuickPromotionInterstitialCardView.h"

@class UIButton;

@interface FBQuickPromotionInterstitialSingleButtonCardView : FBQuickPromotionInterstitialCardView
{
    UIButton *_primaryButton;
}

- (void).cxx_destruct;
- (id)primaryButton;
- (void)layoutButtonItemsForInterstitialSize:(struct CGSize)arg1 cardBounds:(struct CGRect)arg2;
- (struct CGSize)buttonBarSizeForCardBounds:(struct CGRect)arg1;
- (id)configuration;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

@end
