//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionNavigationController.h"

@interface CBLNavigationController : CBLTraitCollectionNavigationController
{
}

- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)CBLNavigationBarTapped:(id)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)processNavigationItem:(id)arg1;
- (void)setNavBarLogoHidden:(BOOL)arg1;
- (id)cblNavigationBar;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)postNotificationForRemovedViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (void)setViewControllers:(id)arg1;
- (id)popToRootViewControllerAnimated:(BOOL)arg1;
- (id)initWithRootViewController:(id)arg1;

@end
