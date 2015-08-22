//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIToolbar;

@interface TranslucentView : UIView
{
    BOOL _showTopLine;
    UIColor *_blurTintColor;
    UIToolbar *_toolbar;
}

@property(retain, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(nonatomic) BOOL showTopLine; // @synthesize showTopLine=_showTopLine;
@property(retain, nonatomic) UIColor *blurTintColor; // @synthesize blurTintColor=_blurTintColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setup;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

