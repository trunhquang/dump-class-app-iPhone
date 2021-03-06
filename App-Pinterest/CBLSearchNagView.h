//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIWebViewDelegate.h"

@class CBLOuterShadowedView, NSString, UIWebView;

@interface CBLSearchNagView : UIView <UIWebViewDelegate>
{
    NSString *_message;
    id <CBLSearchNagViewDelegate> _delegate;
    CBLOuterShadowedView *_containerView;
    UIWebView *_webView;
    NSString *_htmlString;
}

@property(copy, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) CBLOuterShadowedView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <CBLSearchNagViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

