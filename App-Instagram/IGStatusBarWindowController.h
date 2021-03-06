//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IGStatusBarWindowDelegate.h"

@class IGStatusBarWindow, NSObject<IGStatusBarWindowControllerDelegate>, NSString;

@interface IGStatusBarWindowController : NSObject <IGStatusBarWindowDelegate>
{
    IGStatusBarWindow *_statusBarWindow;
    NSObject<IGStatusBarWindowControllerDelegate> *_delegate;
}

+ (struct CGRect)statusBarViewFrameForStatusHidden:(BOOL)arg1;
+ (BOOL)backToFacebookStatusBarVisible;
@property(nonatomic) __weak NSObject<IGStatusBarWindowControllerDelegate> *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGStatusBarWindow *statusBarWindow; // @synthesize statusBarWindow=_statusBarWindow;
- (void).cxx_destruct;
- (void)onWillPresentMediaFromFacebookApp:(id)arg1;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)onCameraButtonTapped:(id)arg1;
- (void)onNavigationViewDidAppear:(id)arg1;
- (void)onTabChanged:(id)arg1;
- (void)showStatusBarView:(BOOL)arg1 animated:(BOOL)arg2;
- (void)statusBarWindowDidReceiveUserTap:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

