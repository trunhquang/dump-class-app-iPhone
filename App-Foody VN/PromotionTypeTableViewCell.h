//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UILabel, UITextField;

@interface PromotionTypeTableViewCell : UITableViewCell
{
    UIButton *_checkmarkBtn;
    UILabel *_promotionTypeName;
    UITextField *_promotionTypeValue;
}

@property(retain, nonatomic) UITextField *promotionTypeValue; // @synthesize promotionTypeValue=_promotionTypeValue;
@property(retain, nonatomic) UILabel *promotionTypeName; // @synthesize promotionTypeName=_promotionTypeName;
@property(retain, nonatomic) UIButton *checkmarkBtn; // @synthesize checkmarkBtn=_checkmarkBtn;
- (void).cxx_destruct;
- (void)setCellEnable:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;

@end
