//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseSignupWallViewController.h"

#import "CBLPinvitationalInspiredWallViewDelegate.h"

@class CBLPinvitationalInspiredWallView, NSString;

@interface CBLPinvitationalSignupWallViewController : CBLBaseSignupWallViewController <CBLPinvitationalInspiredWallViewDelegate>
{
    CBLPinvitationalInspiredWallView *_pinvitationalView;
}

@property(retain, nonatomic) CBLPinvitationalInspiredWallView *pinvitationalView; // @synthesize pinvitationalView=_pinvitationalView;
- (void).cxx_destruct;
- (void)CBLPinvitationalInspiredWallViewDidPressRequestInvite:(id)arg1 withEmail:(id)arg2;
- (void)CBLPinvitationalInspiredWallViewDidPressLogin:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (int)preferredStatusBarUpdateAnimation;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
