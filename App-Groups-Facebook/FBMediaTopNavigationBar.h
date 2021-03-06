//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTopBar.h"

@class NSString, UIButton, UIColor, UILabel;

@interface FBMediaTopNavigationBar : SPTopBar
{
    UILabel *_titleLabel;
    BOOL _fbNavigationBarStyle;
    unsigned int _mediaPickerStyle;
    id <FBMediaTopNavigationBarDelegation> _delegate;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

+ (id)createTopNavigationBarForMediaKitWithMediaPickerStyle:(unsigned int)arg1 withFBNavigationBarStyle:(BOOL)arg2;
@property(readonly, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak id <FBMediaTopNavigationBarDelegation> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapRightButton:(id)arg1;
- (void)didTapLeftButton:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *titleColor;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *rightButtonTitle;
@property(copy, nonatomic) NSString *leftButtonTitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLeftButtonStyle:(int)arg1 rightButtonStyle:(int)arg2 mediaPickerStyle:(unsigned int)arg3 WithFBNavigationBarStyle:(BOOL)arg4;

@end

