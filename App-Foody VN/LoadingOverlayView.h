//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView;

@interface LoadingOverlayView : UIView
{
    UIActivityIndicatorView *spinner;
    BOOL showingSpinner;
    UIView *spinnerBackground;
}

@property(retain, nonatomic) UIView *spinnerBackground; // @synthesize spinnerBackground;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner;
- (void).cxx_destruct;
- (void)stopActivityIndicator;
- (void)startPlainGrayActivityIndicatorAtYPos:(float)arg1;
- (void)startActivityIndicatorAtYPos:(float)arg1;
- (void)startActivityIndicator;
- (void)dismissView;
- (id)initViewWithSpinner;
- (id)initWithFrame:(struct CGRect)arg1;

@end

