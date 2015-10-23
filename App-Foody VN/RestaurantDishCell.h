//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UILabel;

@interface RestaurantDishCell : UITableViewCell
{
    UILabel *mainLabel;
    UILabel *rightLabel;
    UILabel *subLabel;
}

@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel;
- (void).cxx_destruct;
- (float)getHeightWithText:(id)arg1 font:(id)arg2 width:(float)arg3;
- (void)resetFrameMainLabel;
- (void)setSubString:(id)arg1;
- (void)setRightString:(id)arg1;
- (void)setMainString:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 hasSubTitle:(BOOL)arg3;

@end
