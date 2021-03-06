//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBComposerFlowDelegate.h"
#import "FBPresentableViewController.h"

@class FBComposerBootstrapContent, FBUserSession, NSString;

@interface FBComposerFlowDisplayBackingViewController : UIViewController <FBPresentableViewController, FBComposerFlowDelegate>
{
    FBComposerBootstrapContent *_bootstrapContent;
    BOOL _doesComposerRequireDisplay;
    unsigned int _startingStyle;
    FBUserSession *_userSession;
}

- (void).cxx_destruct;
- (BOOL)fb_showNavigationJewels;
@property(readonly, nonatomic) unsigned int preferredPresentationMethod;
- (void)composerCompletedDismissing;
- (void)composerCompletedWithResult:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithBootstrapContent:(id)arg1 startingStyle:(unsigned int)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) unsigned int preferredPresentationOptions;
@property(readonly) Class superclass;

@end

