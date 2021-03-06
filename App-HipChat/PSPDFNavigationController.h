//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

#import "UINavigationControllerDelegate.h"

@class NSString, UIBarButtonItem;

@interface PSPDFNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    BOOL _rotationForwardingEnabled;
    BOOL _checkingParent;
    BOOL _popEnabled;
    unsigned int _persistentCloseButtonMode;
    UIBarButtonItem *_persistentCloseButton;
}

@property(nonatomic, getter=isPopEnabled) BOOL popEnabled; // @synthesize popEnabled=_popEnabled;
@property(nonatomic, getter=isCheckingParent) BOOL checkingParent; // @synthesize checkingParent=_checkingParent;
@property(retain, nonatomic) UIBarButtonItem *persistentCloseButton; // @synthesize persistentCloseButton=_persistentCloseButton;
@property(nonatomic) unsigned int persistentCloseButtonMode; // @synthesize persistentCloseButtonMode=_persistentCloseButtonMode;
@property(nonatomic, getter=isRotationForwardingEnabled) BOOL rotationForwardingEnabled; // @synthesize rotationForwardingEnabled=_rotationForwardingEnabled;
- (void).cxx_destruct;
- (void)updateViewControllerForCurrentPersistentCloseButtonMode:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)closeModalView;
- (id)popViewControllerAnimated:(BOOL)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)sharedInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

