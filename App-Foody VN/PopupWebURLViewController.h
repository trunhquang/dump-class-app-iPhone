//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIWebViewDelegate.h"

@class NSArray, NSString, UIBarButtonItem, UIButton, UILabel, UIWebView;

@interface PopupWebURLViewController : BaseViewController <UIWebViewDelegate>
{
    BOOL isDetectingURL;
    BOOL blockRotation;
    NSString *loadURL;
    UIBarButtonItem *backButton;
    UIBarButtonItem *forwardButton;
    NSString *currentHTML;
    NSArray *URLObjectMap;
    NSString *titleStr;
    UILabel *_restaurantNameLabel;
    UIButton *_closeButton;
    UIWebView *_webView;
}

@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILabel *restaurantNameLabel; // @synthesize restaurantNameLabel=_restaurantNameLabel;
@property(copy, nonatomic) NSString *titleStr; // @synthesize titleStr;
@property(retain, nonatomic) NSArray *URLObjectMap; // @synthesize URLObjectMap;
@property(copy, nonatomic) NSString *currentHTML; // @synthesize currentHTML;
@property(retain, nonatomic) UIBarButtonItem *forwardButton; // @synthesize forwardButton;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton;
@property(copy, nonatomic) NSString *loadURL; // @synthesize loadURL;
@property(nonatomic) BOOL blockRotation; // @synthesize blockRotation;
- (void).cxx_destruct;
- (void)detectURLObjectMap;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)didPressButtonClose:(id)arg1;
- (void)loadHTML:(id)arg1;
- (void)loadURL:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

