//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface ToastView : UIView
{
    UIImageView *backgroundView_;
    UIImageView *iconView_;
    UILabel *messageLabel_;
}

+ (BOOL)isShowingToastInView:(id)arg1;
+ (void)showToastWithMessage:(id)arg1 imageName:(id)arg2 forDuration:(double)arg3;
+ (void)showErrorToastForDuration:(double)arg1;
- (void).cxx_destruct;
- (void)showInView:(id)arg1 forDuration:(double)arg2;
- (void)dismissToast;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithMessage:(id)arg1 imageName:(id)arg2;

@end

