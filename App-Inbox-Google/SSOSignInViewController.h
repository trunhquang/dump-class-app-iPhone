//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTMOAuth2ViewControllerTouch.h"

#import "GOOUIViewController.h"
#import "UIWebViewDelegate.h"

@class NSString, SSOSignInActivityIndicator, UIBarButtonItem, UIView;

@interface SSOSignInViewController : GTMOAuth2ViewControllerTouch <GOOUIViewController, UIWebViewDelegate>
{
    BOOL _disableAutorotation;
    unsigned int _supportedOrientations;
    UIBarButtonItem *_closeItem;
    SSOSignInActivityIndicator *_activityIndicator;
    id <SSOCookieManager> _cookieManager;
    int _minimumAge;
}

+ (id)authNibBundle;
+ (id)authNibName;
@property(nonatomic) int minimumAge; // @synthesize minimumAge=_minimumAge;
@property(retain, nonatomic) id <SSOCookieManager> cookieManager; // @synthesize cookieManager=_cookieManager;
@property(retain, nonatomic) SSOSignInActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIBarButtonItem *closeItem; // @synthesize closeItem=_closeItem;
@property(nonatomic) unsigned int supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) BOOL disableAutorotation; // @synthesize disableAutorotation=_disableAutorotation;
- (void).cxx_destruct;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)signInWebViewDidStopLoading:(id)arg1;
- (void)signInWebViewDidStartLoading:(id)arg1;
- (void)swapInCookies;
- (void)swapOutCookies;
- (BOOL)extendsToTopEdge;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)beginSignIn;
- (void)popView;
- (void)loadView;
- (BOOL)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithScope:(id)arg1 clientID:(id)arg2 clientSecret:(id)arg3 keychainItemName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *footerView;
@property(readonly) unsigned int hash;
@property(nonatomic) int headerTitleTextAlignment;
@property(retain, nonatomic) UIView *headerView;
@property(readonly) Class superclass;

@end

