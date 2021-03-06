//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBFourRoundedCornerView, NSString, UIColor, UIFont, UIImageView, UILabel;

@interface MNHeaderView : UIView
{
    NSString *_title;
    UILabel *_titleLabel;
    NSString *_subtitle;
    UILabel *_subtitleLabel;
    UIImageView *_imageView;
    FBFourRoundedCornerView *_roundedCornerView;
    UIFont *_titleFont;
    UIFont *_subtitleFont;
    float _titleLineHeight;
    float _subtitleLineHeight;
    UIColor *_titleColor;
    UIColor *_subtitleColor;
    float _horizontalPaddingRatio;
    unsigned int _imageViewVerticalPosition;
    float _imageViewTopMargin;
    float _imageViewBottomMargin;
}

@property(nonatomic) float imageViewBottomMargin; // @synthesize imageViewBottomMargin=_imageViewBottomMargin;
@property(nonatomic) float imageViewTopMargin; // @synthesize imageViewTopMargin=_imageViewTopMargin;
@property(nonatomic) unsigned int imageViewVerticalPosition; // @synthesize imageViewVerticalPosition=_imageViewVerticalPosition;
@property(nonatomic) float horizontalPaddingRatio; // @synthesize horizontalPaddingRatio=_horizontalPaddingRatio;
@property(retain, nonatomic) UIColor *subtitleColor; // @synthesize subtitleColor=_subtitleColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(nonatomic) float subtitleLineHeight; // @synthesize subtitleLineHeight=_subtitleLineHeight;
@property(nonatomic) float titleLineHeight; // @synthesize titleLineHeight=_titleLineHeight;
@property(retain, nonatomic) UIFont *subtitleFont; // @synthesize subtitleFont=_subtitleFont;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void).cxx_destruct;
- (float)_availableWidthWithSize:(struct CGSize)arg1;
- (void)_setSubtitleLabelAttributedText;
- (void)_setTitleLabelAttributedText;
- (void)_layoutImageViewWithYOffset:(float)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 roundImageBorders:(BOOL)arg4;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)initWithTitle:(id)arg1;

@end

