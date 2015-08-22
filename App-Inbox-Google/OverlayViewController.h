//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SpeedDialViewControllerDelegate.h"

@class ListViewController, QTMButton, SpeedDialIconSpinView, SpeedDialViewController;

@interface OverlayViewController : UIViewController <SpeedDialViewControllerDelegate>
{
    SpeedDialIconSpinView *spinIcon_;
    BOOL cancelReminderPromoTip_;
    ListViewController *listViewController_;
    QTMButton *speedDialButton_;
    float speedDialButtonBottomOffset_;
    SpeedDialViewController *speedDialViewController_;
}

@property(nonatomic) float speedDialButtonBottomOffset; // @synthesize speedDialButtonBottomOffset=speedDialButtonBottomOffset_;
@property(readonly, nonatomic) ListViewController *listViewController; // @synthesize listViewController=listViewController_;
- (void).cxx_destruct;
- (void)speedDialViewControllerInvite:(id)arg1;
- (void)speedDialViewControllerDismiss:(id)arg1;
- (void)speedDialViewControllerCompose:(id)arg1 withContact:(id)arg2;
- (void)speedDialViewControllerCompose:(id)arg1;
- (void)speedDialViewControllerCreateTask:(id)arg1;
- (void)precreateSpeedDialVC;
- (void)dismissSpeedDialOverlay;
- (void)presentSpeedDialOverlayWithCompletion:(CDUnknownBlockType)arg1;
- (void)showSpeedDialWithReminderPromoTipForTutorial:(id)arg1;
- (void)recordSpeedDialChoice:(id)arg1;
- (void)tappedSpeedDial:(id)arg1;
- (void)updateSpeedDialButtonPosition;
- (struct CGPoint)speedDialOrigin;
@property(readonly, nonatomic) SpeedDialViewController *speedDialViewController; // @synthesize speedDialViewController=speedDialViewController_;
- (void)viewDidLayoutSubviews;
- (int)preferredStatusBarStyle;
- (id)navigationItem;
- (void)loadView;
@property(nonatomic) BOOL overlayButtonsHidden; // @dynamic overlayButtonsHidden;
@property(readonly, nonatomic) QTMButton *speedDialButton; // @synthesize speedDialButton=speedDialButton_;
- (void)loadSpeedDialContacts;
- (void)refreshSpeedDialOptions;
- (void)updateOverlayViewOptionsForController:(id)arg1;
- (void)updateOverlayViewOptions;
- (id)initWithListViewController:(id)arg1;

@end

