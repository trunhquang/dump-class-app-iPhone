//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIButton, UIImageView, UILabel;

@interface NewArticleTableViewCell : UITableViewCell
{
    UIButton *col1Button;
    UIImageView *col1ArticleThumbImageView;
    UILabel *col1DesLabel;
    UIButton *col2Button;
    UIImageView *col2ArticleThumbImageView;
    UILabel *col2DesLabel;
}

@property(retain, nonatomic) UILabel *col2DesLabel; // @synthesize col2DesLabel;
@property(retain, nonatomic) UIImageView *col2ArticleThumbImageView; // @synthesize col2ArticleThumbImageView;
@property(retain, nonatomic) UIButton *col2Button; // @synthesize col2Button;
@property(retain, nonatomic) UILabel *col1DesLabel; // @synthesize col1DesLabel;
@property(retain, nonatomic) UIImageView *col1ArticleThumbImageView; // @synthesize col1ArticleThumbImageView;
@property(retain, nonatomic) UIButton *col1Button; // @synthesize col1Button;
- (void).cxx_destruct;
- (void)resetFrameDescriptionLabel;
- (void)setCol2DescriptionWithText:(id)arg1 height:(float)arg2;
- (void)setCol1DescriptionWithText:(id)arg1 height:(float)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

