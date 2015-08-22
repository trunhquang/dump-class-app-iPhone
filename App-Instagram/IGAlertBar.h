//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface IGAlertBar : UIView
{
    BOOL _suppressAlerts;
    BOOL _usingOffset;
    BOOL _displaying;
    BOOL _hideAutomatically;
    UIImageView *_alertView;
    UILabel *_textLabel;
}

+ (float)alertBarDisplayInterval;
+ (id)sharedAlertBar;
@property(nonatomic) BOOL hideAutomatically; // @synthesize hideAutomatically=_hideAutomatically;
@property(nonatomic) BOOL displaying; // @synthesize displaying=_displaying;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *alertView; // @synthesize alertView=_alertView;
@property(readonly, nonatomic) BOOL usingOffset; // @synthesize usingOffset=_usingOffset;
- (void).cxx_destruct;
- (void)onAppResumed:(id)arg1;
- (void)onAppBackgrounded:(id)arg1;
- (void)reEnableAlerts;
- (void)hide;
- (void)show;
- (void)didHideAlertView;
- (void)didShowAlertView;
- (void)showInView:(id)arg1 withText:(id)arg2 style:(int)arg3 withOffsetFromTop:(float)arg4 barHeight:(float)arg5 textTopPadding:(float)arg6;
- (void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 withOffsetFromTop:(float)arg4 barHeight:(float)arg5 textTopPadding:(float)arg6;
- (void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3 withOffsetFromTop:(float)arg4;
- (void)showInViewController:(id)arg1 withText:(id)arg2 style:(int)arg3;
- (void)showInView:(id)arg1 withText:(id)arg2 style:(int)arg3;
- (void)showWithText:(id)arg1 style:(int)arg2 height:(float)arg3 textTopPadding:(float)arg4;
- (void)showWithText:(id)arg1 style:(int)arg2;
- (id)init;
- (void)dealloc;

@end
