//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FBWebPivotsContainerView : UIView
{
    UIView *_webView;
    UIView *_toolbarView;
    UIView *_bannerView;
    float _toolbarContentInset;
}

@property(nonatomic) float toolbarContentInset; // @synthesize toolbarContentInset=_toolbarContentInset;
@property(nonatomic) UIView *bannerView; // @synthesize bannerView=_bannerView;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) UIView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)_layoutBannerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

