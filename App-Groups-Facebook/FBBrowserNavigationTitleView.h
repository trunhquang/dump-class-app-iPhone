//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UILabel;

@interface FBBrowserNavigationTitleView : UIView
{
    id <FBBrowserNavigationTitleViewDelegate> _delegate;
    unsigned int _style;
    UILabel *_titleLabel;
    UIButton *_subtitleButton;
}

@property(readonly, nonatomic) UIButton *subtitleButton; // @synthesize subtitleButton=_subtitleButton;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic) __weak id <FBBrowserNavigationTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_subtitleButtonAction:(id)arg1;
- (void)_setSubtitleString:(id)arg1;
- (id)_newSubtitleButton;
- (id)_newTitleLabel;
@property(readonly, nonatomic) float contentHeight;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

