//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBNuxStepViewController.h"
#import "FBNuxToolTipWithButtonsViewDelegate.h"

@class FBNuxToolTipWithButtons, FBNuxToolTipWithButtonsView, NSString, UITapGestureRecognizer;

@interface FBNuxToolTipWithButtonsViewController : UIViewController <FBNuxToolTipWithButtonsViewDelegate, FBNuxStepViewController>
{
    UITapGestureRecognizer *_tapRecognizer;
    id <FBNUXViewControllerDelegate> _delegate;
    FBNuxToolTipWithButtons *_toolTip;
    FBNuxToolTipWithButtonsView *_toolTipView;
}

@property(retain, nonatomic) FBNuxToolTipWithButtonsView *toolTipView; // @synthesize toolTipView=_toolTipView;
@property(retain, nonatomic) FBNuxToolTipWithButtons *toolTip; // @synthesize toolTip=_toolTip;
@property(nonatomic) __weak id <FBNUXViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)toolTipWithButtonsView:(id)arg1 didSelectSecondaryButton:(id)arg2;
- (void)toolTipWithButtonsView:(id)arg1 didSelectPrimaryButton:(id)arg2;
- (id)analyticsModule;
- (void)setStepProgress:(unsigned int)arg1 ofTotal:(unsigned int)arg2;
- (void)transitionToSubStep:(id)arg1;
- (void)tap:(id)arg1;
- (void)loadView;
- (struct CGSize)contentSizeForViewInPopover;
- (void)dealloc;
- (id)initWithStep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
