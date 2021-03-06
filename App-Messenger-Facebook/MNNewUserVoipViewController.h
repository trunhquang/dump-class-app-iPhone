//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBClassProvidable.h"
#import "FBWebRTCTestCallViewControllerDelegate.h"
#import "MNNewUserVoipDelegate.h"
#import "MNUserSetUpStepViewController.h"

@class FBWebRTCTestCallViewController, MNNewUserVoipView, NSString, UIBarButtonItem;

@interface MNNewUserVoipViewController : UIViewController <MNNewUserVoipDelegate, FBWebRTCTestCallViewControllerDelegate, FBClassProvidable, MNUserSetUpStepViewController>
{
    MNNewUserVoipView *_newUserVoipView;
    UIBarButtonItem *_skipButton;
    FBWebRTCTestCallViewController *_testCallVC;
    BOOL _skipButtonEnabled;
    id <MNUserSetUpStepCompletion> completionDelegate;
}

@property(nonatomic) BOOL skipButtonEnabled; // @synthesize skipButtonEnabled=_skipButtonEnabled;
@property(nonatomic) __weak id <MNUserSetUpStepCompletion> completionDelegate; // @synthesize completionDelegate;
- (void).cxx_destruct;
- (id)_skipButton;
- (void)_showSkipButton;
- (void)_hideBackButton;
- (void)webRTCTestCallViewControllerDidFinishTestCall:(id)arg1;
- (void)newUserVoipViewDidTapTryCallButton:(id)arg1;
- (void)_skipButtonPressed;
- (void)_completeStep;
- (unsigned int)preferredTransitionType;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithTestCallViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

