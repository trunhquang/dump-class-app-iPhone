//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBPlatformURLOpening.h"

@class FBLayoutGuideView, FBPlatformDebugIconLabel, FBPlatformDebugOpenURLView, NSDictionary, NSString, NSURL, UIBarButtonItem;

@interface FBPlatformDebugOpenURLViewController : UIViewController <FBPlatformURLOpening>
{
    CDUnknownBlockType _argsFilter;
    NSURL *_baseURL;
    NSDictionary *_bridgeArgs;
    CDUnknownBlockType _configurationBlock;
    UIBarButtonItem *_doneItem;
    NSDictionary *_methodArgs;
    UIBarButtonItem *_sendItem;
    NSString *_sourceApplication;
    NSDictionary *_queryParameters;
    FBPlatformDebugIconLabel *_titleLabel;
    id <FBPlatformDebugOpenURLViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBPlatformDebugOpenURLViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateTitleView;
- (void)_updateTitleViewImage:(id)arg1;
- (void)_keyboardWillShowNotification:(id)arg1;
- (void)_keyboardWillHideNotification:(id)arg1;
- (void)_buildDebugURL:(CDUnknownBlockType)arg1;
- (id)analyticsModule;
- (void)openPlatformURL:(id)arg1;
- (void)_send:(id)arg1;
- (void)_done:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)fb_showAuxiliaryViewController;
- (BOOL)fb_showNavBarSearchField;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) FBPlatformDebugOpenURLView *platformDebugOpenURLView;
@property(readonly, nonatomic) FBLayoutGuideView *layoutGuideView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithBaseURL:(id)arg1 bridgeArgs:(id)arg2 methodArgs:(id)arg3 queryParameters:(id)arg4 sourceApplication:(id)arg5 argsFilter:(CDUnknownBlockType)arg6 configurationBlock:(CDUnknownBlockType)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

