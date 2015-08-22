//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, UIBlurEffect, UIColor, UIVisualEffectView;

@interface PABlurView : UIView
{
    UIBlurEffect *_blurEffect;
    UIView *_blurView;
    CALayer *_blurTintLayer;
    UIVisualEffectView *_vibrancyView;
    BOOL _isLegacy;
    BOOL _addVibrancy;
    unsigned int _blurViewStyle;
    UIColor *_tintColor;
}

@property(nonatomic) BOOL addVibrancy; // @synthesize addVibrancy=_addVibrancy;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(nonatomic) unsigned int blurViewStyle; // @synthesize blurViewStyle=_blurViewStyle;
- (void).cxx_destruct;
- (void)_updateBlurViewStyle;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

