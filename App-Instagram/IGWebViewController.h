//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGActionSheetDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, UIActivityIndicatorView, UIBarButtonItem, UIButton, UIWebView;

@interface IGWebViewController : IGViewController <IGActionSheetDelegate, UIWebViewDelegate>
{
    BOOL _showPopoutButton;
    BOOL _hidesNavigationButtons;
    BOOL _showsPageTitle;
    NSURL *_targetURL;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _modalDidDismissHandler;
    UIWebView *_webView;
    UIActivityIndicatorView *_loadingIndicator;
    UIButton *_backButton;
    UIButton *_refreshButton;
    UIButton *_forwardButton;
    UIBarButtonItem *_actionsButton;
}

@property(retain, nonatomic) UIBarButtonItem *actionsButton; // @synthesize actionsButton=_actionsButton;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType modalDidDismissHandler; // @synthesize modalDidDismissHandler=_modalDidDismissHandler;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) BOOL showsPageTitle; // @synthesize showsPageTitle=_showsPageTitle;
@property(nonatomic) BOOL hidesNavigationButtons; // @synthesize hidesNavigationButtons=_hidesNavigationButtons;
@property(nonatomic) BOOL showPopoutButton; // @synthesize showPopoutButton=_showPopoutButton;
@property(retain, nonatomic) NSURL *targetURL; // @synthesize targetURL=_targetURL;
- (void).cxx_destruct;
- (void)actionSheetDismissedWithButtonTitled:(id)arg1;
- (void)onActionsTapped;
- (BOOL)didHandleReportingFlowForURL:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)setLoading:(BOOL)arg1;
- (void)loadCurrentTargetURL;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isModal;
- (void)buildNavigationButtonsIfNeeded;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersTabBarHidden;
- (void)onCancelModal;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

