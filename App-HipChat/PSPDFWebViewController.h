//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFBaseViewController.h"

#import "MFMailComposeViewControllerDelegate.h"
#import "PSPDFStyleable.h"
#import "UIPopoverControllerDelegate.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"

@class NSArray, NSError, NSString, NSURLRequest, NSUndoManager, PSPDFKVOController, PSPDFReachabilityTracker, PSPDFWebViewProgressView, PSPDFWebViewTitleView, UIBarButtonItem, UIPopoverController, UIView<PSPDFCommonWebView>;

@interface PSPDFWebViewController : PSPDFBaseViewController <MFMailComposeViewControllerDelegate, UIPopoverControllerDelegate, WKNavigationDelegate, PSPDFStyleable, UIWebViewDelegate>
{
    struct {
        unsigned int userLinkTouchActionOnWebView:1;
        unsigned int toolbarWasHidden:1;
        unsigned int didEnableActivityIndicator:1;
        unsigned int isPluginContent:1;
    } _flags;
    BOOL _isBarTranslucent;
    BOOL _isInPopover;
    BOOL _showProgressIndicator;
    BOOL _useCustomErrorPage;
    BOOL _shouldUpdateTitleFromWebContent;
    BOOL _useModernWebKit;
    UIPopoverController *popoverController_;
    int _barStyle;
    unsigned int _availableActions;
    id <PSPDFWebViewControllerDelegate> _delegate;
    NSArray *_excludedActivities;
    UIView<PSPDFCommonWebView> *_webView;
    NSURLRequest *_initialRequest;
    PSPDFWebViewTitleView *_titleView;
    PSPDFReachabilityTracker *_reachabilityTracker;
    PSPDFKVOController *_networkActivityObserver;
    NSError *_error;
    NSUndoManager *_customUndoManager;
    UIBarButtonItem *_backBarButtonItem;
    UIBarButtonItem *_forwardBarButtonItem;
    UIBarButtonItem *_activityBarButtonItem;
    UIBarButtonItem *_stopBarButtonItem;
    UIBarButtonItem *_refreshBarButtonItem;
    PSPDFWebViewProgressView *_progressView;
}

+ (id)modalWebViewWithURL:(id)arg1;
+ (void)loadWebKitFramework;
+ (void)load;
@property(retain, nonatomic) PSPDFWebViewProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UIBarButtonItem *refreshBarButtonItem; // @synthesize refreshBarButtonItem=_refreshBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *stopBarButtonItem; // @synthesize stopBarButtonItem=_stopBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *activityBarButtonItem; // @synthesize activityBarButtonItem=_activityBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *forwardBarButtonItem; // @synthesize forwardBarButtonItem=_forwardBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *backBarButtonItem; // @synthesize backBarButtonItem=_backBarButtonItem;
@property(retain, nonatomic) NSUndoManager *customUndoManager; // @synthesize customUndoManager=_customUndoManager;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) PSPDFKVOController *networkActivityObserver; // @synthesize networkActivityObserver=_networkActivityObserver;
@property(retain, nonatomic) PSPDFReachabilityTracker *reachabilityTracker; // @synthesize reachabilityTracker=_reachabilityTracker;
@property(retain, nonatomic) PSPDFWebViewTitleView *titleView; // @synthesize titleView=_titleView;
@property(copy, nonatomic) NSURLRequest *initialRequest; // @synthesize initialRequest=_initialRequest;
@property(retain, nonatomic) UIView<PSPDFCommonWebView> *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSArray *excludedActivities; // @synthesize excludedActivities=_excludedActivities;
@property(nonatomic) BOOL useModernWebKit; // @synthesize useModernWebKit=_useModernWebKit;
@property(nonatomic) BOOL shouldUpdateTitleFromWebContent; // @synthesize shouldUpdateTitleFromWebContent=_shouldUpdateTitleFromWebContent;
@property(nonatomic) BOOL useCustomErrorPage; // @synthesize useCustomErrorPage=_useCustomErrorPage;
@property(nonatomic) BOOL showProgressIndicator; // @synthesize showProgressIndicator=_showProgressIndicator;
@property(nonatomic) __weak id <PSPDFWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int availableActions; // @synthesize availableActions=_availableActions;
@property(nonatomic) BOOL isInPopover; // @synthesize isInPopover=_isInPopover;
@property(nonatomic) BOOL isBarTranslucent; // @synthesize isBarTranslucent=_isBarTranslucent;
@property(nonatomic) int barStyle; // @synthesize barStyle=_barStyle;
@property(retain, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=popoverController_;
- (void).cxx_destruct;
- (int)webKitNavigationTypeFromUIWebViewNavigationType:(int)arg1;
- (Class)modernWebViewConfigurationClass;
- (Class)modernWebViewClass;
- (BOOL)shouldHandleRequest:(id)arg1 navigationType:(int)arg2;
- (void)didFailToLoadWithError:(id)arg1;
- (void)didFinishLoading;
- (void)didStartLoading;
- (void)triggerDidFailLoadEventsWithError:(id)arg1;
- (void)triggerDidFinishLoadEvents;
- (void)triggerDidStartLoadEvents;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)handleWebViewError:(id)arg1;
- (BOOL)shouldIgnoreWebViewError:(id)arg1;
- (void)showHTMLWithError:(id)arg1;
- (void)startObservingReachability;
- (void)patchVideoElements;
- (void)dismissPopoverAndCleanUpAnimated:(BOOL)arg1;
- (void)cleanupWebView;
- (void)showActivityPopoverForSender:(id)arg1;
- (id)createDefaultActivityViewController;
- (void)tearDownNetworkActivityObserver;
- (void)setUpNetworkActivityObserverWithView:(id)arg1;
- (id)networkActivityManager;
- (void)done:(id)arg1;
- (void)action:(id)arg1;
- (void)stop:(id)arg1;
- (void)reload:(id)arg1;
- (BOOL)isShowingErrorPage;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)updateToolbarVisibilityAnimated:(BOOL)arg1;
- (BOOL)_shouldShowToolbar;
- (void)updateToolbarItems;
- (void)updateTitleView;
- (BOOL)webViewIsSecure;
- (id)webViewURL;
- (id)webViewTitle;
- (id)undoManager;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (BOOL)isModal;
- (void)viewDidLoad;
- (void)loadView;
- (id)modernWebView;
- (BOOL)usesLegacyWebView;
- (id)modernWebViewKVOableProperties;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(nonatomic) __weak UIPopoverController *parentPopoverController;
@property(nonatomic) BOOL prefersStatusBarHidden;
@property(readonly) Class superclass;

@end

