//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

@interface CBLSignupAgeRestrictedViewController : CBLTraitCollectionViewController
{
    id <CBLSignupAgeRestrictedViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <CBLSignupAgeRestrictedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapClose:(id)arg1;
- (void)didTapLogin:(id)arg1;
- (void)didTapGetHelp:(id)arg1;
- (void)viewDidLoad;
- (BOOL)prefersStatusBarHidden;

@end
