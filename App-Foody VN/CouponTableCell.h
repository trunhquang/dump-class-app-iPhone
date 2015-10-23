//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TTTAttributedLabel, UIImageView, UILabel;

@interface CouponTableCell : UITableViewCell
{
    UILabel *couponTitleLabel;
    UILabel *resNameLabel;
    UIImageView *couponThumbImageView;
    UILabel *dateLabel;
    UILabel *statusLabel;
    UILabel *priceLabel;
    TTTAttributedLabel *originPriceLabel;
}

@property(retain, nonatomic) TTTAttributedLabel *originPriceLabel; // @synthesize originPriceLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UIImageView *couponThumbImageView; // @synthesize couponThumbImageView;
@property(retain, nonatomic) UILabel *resNameLabel; // @synthesize resNameLabel;
@property(retain, nonatomic) UILabel *couponTitleLabel; // @synthesize couponTitleLabel;
- (void).cxx_destruct;
- (void)setOriginPrice:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setOfferType:(unsigned int)arg1;
- (void)setDateText:(id)arg1;
- (void)setRestaurantName:(id)arg1;
- (void)setCouponTitle:(id)arg1;
- (void)setCouponThumbnail:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

