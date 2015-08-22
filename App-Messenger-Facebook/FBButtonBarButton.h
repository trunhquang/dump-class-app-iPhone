//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView;

@interface FBButtonBarButton : UIButton
{
    UIImageView *_disclosureIndicatorView;
    unsigned int _layoutStyle;
    unsigned int _actionBarButtonType;
}

+ (id)buttonWithItem:(id)arg1;
@property(nonatomic) unsigned int actionBarButtonType; // @synthesize actionBarButtonType=_actionBarButtonType;
@property(nonatomic) unsigned int layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (BOOL)_isShowingDisclosureIndicator;
- (float)fb_contentVerticalMargin;
- (struct UIEdgeInsets)fb_imageEdgeInsets;
- (struct UIEdgeInsets)fb_titleEdgeInsets;
- (struct CGSize)fb_currentTitleTextSizeWithBoundingWidth:(float)arg1;
- (struct CGSize)fb_currentTitleWrappedTextSizeWithBoundingSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToSuperview;
- (void)removeDisclosureIndicatorView;
- (void)addDisclosureIndicatorView;
- (void)updateDisclosureIndicatorAlpha;
- (void)updateDisclosureIndicatorUsingItem:(id)arg1;
- (void)updateImagesUsingItem:(id)arg1;
- (void)updateTitleColorsUsingItem:(id)arg1;
- (void)updateTitlesUsingItem:(id)arg1;

@end
