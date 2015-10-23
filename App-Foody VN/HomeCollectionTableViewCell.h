//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface HomeCollectionTableViewCell : UITableViewCell
{
    UIButton *leftButton;
    UIImageView *leftThumbImageView;
    UILabel *leftTitleLabel;
    UIButton *rightButton;
    UIImageView *rightThumbImageView;
    UILabel *rightTitleLabel;
    UILabel *_col1NoPlaceLabel;
    UILabel *_col2NoPlaceLabel;
}

@property(retain, nonatomic) UILabel *col2NoPlaceLabel; // @synthesize col2NoPlaceLabel=_col2NoPlaceLabel;
@property(retain, nonatomic) UILabel *col1NoPlaceLabel; // @synthesize col1NoPlaceLabel=_col1NoPlaceLabel;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel;
@property(retain, nonatomic) UIImageView *rightThumbImageView; // @synthesize rightThumbImageView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel;
@property(retain, nonatomic) UIImageView *leftThumbImageView; // @synthesize leftThumbImageView;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton;
- (void).cxx_destruct;
- (void)setRightTitleLabelWithText:(id)arg1;
- (void)setLeftTitleLabelWithText:(id)arg1;
- (void)resetView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;

@end

