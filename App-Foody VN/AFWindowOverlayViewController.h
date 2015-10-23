//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@interface AFWindowOverlayViewController : UIViewController
{
    BOOL _statusBarHidden;
    id <AFWindowOverlayViewControllerDelegate> _delegate;
    int _statusBarStyle;
}

@property(nonatomic) int statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) __weak id <AFWindowOverlayViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)prefersStatusBarHidden;
- (int)preferredStatusBarStyle;
- (id)initWithBarStyle:(int)arg1 hidden:(BOOL)arg2;

@end
