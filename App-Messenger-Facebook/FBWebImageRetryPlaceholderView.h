//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBWebImageViewListener.h"

@class FBWebImageView, NSString, UIActivityIndicatorView, UIButton;

@interface FBWebImageRetryPlaceholderView : UIView <FBWebImageViewListener>
{
    UIButton *_retryButton;
    UIActivityIndicatorView *_simpleSpinnerView;
    BOOL _didTapRetryFlag;
    BOOL _didRetryFlag;
    FBWebImageView *_imageView;
    NSString *_lastErrorDomain;
    int _lastErrorCode;
    NSString *_analyticsModule;
}

@property(copy, nonatomic) NSString *analyticsModule; // @synthesize analyticsModule=_analyticsModule;
- (void).cxx_destruct;
- (void)_didTapRetryButton:(id)arg1;
- (void)dealloc;
- (void)webImageView:(id)arg1 willStartDownloadingSpecifier:(id)arg2;
- (void)layoutSubviews;
- (void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2;
- (void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2;
- (id)initWithPlaceholderView:(id)arg1 imageView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
