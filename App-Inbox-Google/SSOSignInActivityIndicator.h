//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIActivityIndicatorView;

@interface SSOSignInActivityIndicator : UIView
{
    UIActivityIndicatorView *_activityIndicator;
    int _activityCount;
}

- (void).cxx_destruct;
- (void)signInFetcherDidStop:(id)arg1;
- (void)signInFetcherDidStart:(id)arg1;
- (void)decrement;
- (void)increment;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

