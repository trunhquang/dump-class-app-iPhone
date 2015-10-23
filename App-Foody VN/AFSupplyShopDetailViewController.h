//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFViewController.h"

#import "AFContentAccessManagerPurchasableStatusDelegate.h"

@class AFAlertView, AFInterfaceRenderInstance, AFProgressHUDView, AFPurchasable, NSString, UIBarButtonItem;

@interface AFSupplyShopDetailViewController : AFViewController <AFContentAccessManagerPurchasableStatusDelegate>
{
    BOOL _purchasing;
    BOOL _purchased;
    AFPurchasable *_purchasable;
    AFInterfaceRenderInstance *_renderInstance;
    int _presentationStyle;
    AFProgressHUDView *_hudView;
    UIBarButtonItem *_doneButton;
    AFAlertView *_downloadFailureAlertView;
}

+ (id)detailControllerWithPurchasable:(id)arg1 presentationStyle:(int)arg2 renderInstance:(id)arg3;
@property(nonatomic, getter=didPurchase) BOOL purchased; // @synthesize purchased=_purchased;
@property(nonatomic) __weak AFAlertView *downloadFailureAlertView; // @synthesize downloadFailureAlertView=_downloadFailureAlertView;
@property(nonatomic, getter=isPurchasing) BOOL purchasing; // @synthesize purchasing=_purchasing;
@property(retain, nonatomic) UIBarButtonItem *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) AFProgressHUDView *hudView; // @synthesize hudView=_hudView;
@property(nonatomic) int presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(readonly, nonatomic) AFInterfaceRenderInstance *renderInstance; // @synthesize renderInstance=_renderInstance;
@property(retain, nonatomic) AFPurchasable *purchasable; // @synthesize purchasable=_purchasable;
- (void).cxx_destruct;
- (void)reportInstalledPurchasable:(id)arg1 location:(int)arg2;
- (void)configureForPackState;
- (void)configureForPurchasing;
- (void)marketingAssetDownloadFailedNotification:(id)arg1;
- (void)updateDownloadStatus:(id)arg1;
- (void)purchasableMetadataUpdated;
- (void)accessManager:(id)arg1 didRefreshMetadataForPurchasable:(id)arg2;
- (void)accessManager:(id)arg1 didUpdatePositionForPurchasable:(id)arg2 startLocation:(id)arg3 endLocation:(id)arg4;
- (void)accessManagerDidFinishUpdates:(id)arg1;
- (void)accessManagerWillBeginUpdates:(id)arg1;
- (void)didRestore:(id)arg1;
- (void)didPurchase:(id)arg1;
- (void)didFail:(id)arg1;
- (void)willPurchase:(id)arg1;
@property(readonly, nonatomic) BOOL isStandaloneStyle;
- (void)initiateDismissal;
- (void)initiatePurchase;
- (void)cancelButtonPressed:(id)arg1;
- (void)doneButtonPressed:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)registerForPurchaseNotifications;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPurchasable:(id)arg1 presentationStyle:(int)arg2 renderInstance:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

