//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

@class IGButton, UIButton, UIImageView, UILabel;

@interface IGLayoutAppInstallAlertViewController : IGViewController
{
    UILabel *_titleLabel;
    UILabel *_appDescriptionLabel;
    UIImageView *_layoutExampleImageView;
    UIButton *_cancelButton;
    IGButton *_confirmButton;
    id <IGLayoutAppInstallAlertViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <IGLayoutAppInstallAlertViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onConfirmModal;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)prefersNavigationBarHidden;

@end
