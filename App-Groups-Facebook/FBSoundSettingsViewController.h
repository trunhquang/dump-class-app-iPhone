//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

@class FBUserSession;

@interface FBSoundSettingsViewController : UITableViewController
{
    FBUserSession *_session;
}

- (void).cxx_destruct;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)_inAppSoundSwitchValueChanged:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)initWithStyle:(int)arg1;
- (id)init;

@end

