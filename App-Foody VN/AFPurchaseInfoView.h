//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "UIGestureRecognizerDelegate.h"

@class AFAutoTextView, NSAttributedString, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView;

@interface AFPurchaseInfoView : UIScrollView <UIGestureRecognizerDelegate>
{
    BOOL _upSell;
    UIView *_contentView;
    UIButton *_purchaseButton;
    UILabel *_installedLabel;
    UILabel *_upsellLabel;
    UIImageView *_upsellLogoView;
    NSLayoutConstraint *_buttonWidthConstraint;
    id <AFPurchaseInfoViewDelegate> _purchaseInfoViewDelegate;
    UILabel *_titleLabel;
    AFAutoTextView *_subtitleTextView;
    AFAutoTextView *_descriptionTextView;
    UILabel *_subtitleLabel;
    UILabel *_descriptionLabel;
    UILabel *_headerContainerView;
    UIView *_headerView;
    UIView *_headerTitleView;
    UIView *_upsellView;
    UIImageView *_upsellChevronView;
    UITapGestureRecognizer *_upsellTapRecognizer;
    NSLayoutConstraint *_descriptionHeightConstraint;
    UILongPressGestureRecognizer *_subtitleRecognizer;
    UILongPressGestureRecognizer *_descriptionRecognizer;
}

@property(retain, nonatomic) UILongPressGestureRecognizer *descriptionRecognizer; // @synthesize descriptionRecognizer=_descriptionRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *subtitleRecognizer; // @synthesize subtitleRecognizer=_subtitleRecognizer;
@property(nonatomic) __weak NSLayoutConstraint *descriptionHeightConstraint; // @synthesize descriptionHeightConstraint=_descriptionHeightConstraint;
@property(retain, nonatomic) UITapGestureRecognizer *upsellTapRecognizer; // @synthesize upsellTapRecognizer=_upsellTapRecognizer;
@property(retain, nonatomic) UIImageView *upsellChevronView; // @synthesize upsellChevronView=_upsellChevronView;
@property(retain, nonatomic) UIView *upsellView; // @synthesize upsellView=_upsellView;
@property(nonatomic) BOOL upSell; // @synthesize upSell=_upSell;
@property(retain, nonatomic) UIView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UILabel *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) AFAutoTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) AFAutoTextView *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <AFPurchaseInfoViewDelegate> purchaseInfoViewDelegate; // @synthesize purchaseInfoViewDelegate=_purchaseInfoViewDelegate;
@property(nonatomic) __weak NSLayoutConstraint *buttonWidthConstraint; // @synthesize buttonWidthConstraint=_buttonWidthConstraint;
@property(retain, nonatomic) UIImageView *upsellLogoView; // @synthesize upsellLogoView=_upsellLogoView;
@property(retain, nonatomic) UILabel *upsellLabel; // @synthesize upsellLabel=_upsellLabel;
@property(retain, nonatomic) UILabel *installedLabel; // @synthesize installedLabel=_installedLabel;
@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)longPressRecognized:(id)arg1;
- (void)upSellButtonTapped:(id)arg1;
- (void)purchaseButtonPressed:(id)arg1;
@property(copy, nonatomic) NSAttributedString *attributedDescription;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;
- (void)prepareView;
- (id)initWithUpSell:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

