//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class GradientView, UIView, UIWebView;

@interface EcardGuideLineViewController : BaseViewController
{
    UIWebView *_webView;
    GradientView *_gradientView;
    UIView *_background;
}

@property(nonatomic) __weak UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) GradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)dismissFromParentViewController;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)close:(id)arg1;
- (void)presentInParentViewController:(id)arg1;
- (void)initializeUIControls:(BOOL)arg1;
- (void)loadDataForScreen:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

