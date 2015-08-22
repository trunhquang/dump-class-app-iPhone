//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class FBEventPrivacySetting, NSArray, NSIndexPath;

@interface FBEventEditPrivacyController : UITableViewController
{
    NSArray *_privacySettings;
    NSArray *_groupPrivacySettings;
    id <FBEventEditPrivacyControllerDelegate> _delegate;
    FBEventPrivacySetting *_selectedPrivacySetting;
    NSIndexPath *_selectedIndexPath;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) FBEventPrivacySetting *selectedPrivacySetting; // @synthesize selectedPrivacySetting=_selectedPrivacySetting;
@property(nonatomic) __weak id <FBEventEditPrivacyControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapDone;
- (void)_didTapCancel;
- (BOOL)fb_showNavBarSearchField;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPrivacySettings:(id)arg1 initialSetting:(id)arg2 groupPrivacySettings:(id)arg3;

@end

