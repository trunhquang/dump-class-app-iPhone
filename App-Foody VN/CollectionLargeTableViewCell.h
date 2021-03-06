//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface CollectionLargeTableViewCell : UITableViewCell
{
    UIButton *col1Button;
    UIButton *col2Button;
    UIImageView *col1CollectionThumbImageView;
    UIImageView *col2CollectionThumbImageView;
    UILabel *col1NameLabel;
    UILabel *col2NameLabel;
    UILabel *col1NoPlaceLabel;
    UILabel *col2NoPlaceLabel;
    UILabel *blur1Bg;
    UILabel *blur2Bg;
}

@property(retain, nonatomic) UILabel *blur2Bg; // @synthesize blur2Bg;
@property(retain, nonatomic) UILabel *blur1Bg; // @synthesize blur1Bg;
@property(retain, nonatomic) UILabel *col2NoPlaceLabel; // @synthesize col2NoPlaceLabel;
@property(retain, nonatomic) UILabel *col1NoPlaceLabel; // @synthesize col1NoPlaceLabel;
@property(retain, nonatomic) UILabel *col2NameLabel; // @synthesize col2NameLabel;
@property(retain, nonatomic) UILabel *col1NameLabel; // @synthesize col1NameLabel;
@property(retain, nonatomic) UIImageView *col2CollectionThumbImageView; // @synthesize col2CollectionThumbImageView;
@property(retain, nonatomic) UIImageView *col1CollectionThumbImageView; // @synthesize col1CollectionThumbImageView;
@property(retain, nonatomic) UIButton *col2Button; // @synthesize col2Button;
@property(retain, nonatomic) UIButton *col1Button; // @synthesize col1Button;
- (void).cxx_destruct;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;

@end

