//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGGroupedTableViewController.h"

@class NSArray, NSMutableDictionary;

@interface IGPushNotificationSettingsViewController : IGGroupedTableViewController
{
    NSMutableDictionary *_notificationSettings;
    NSArray *_defaultKeys;
}

@property(retain, nonatomic) NSArray *defaultKeys; // @synthesize defaultKeys=_defaultKeys;
@property(retain, nonatomic) NSMutableDictionary *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;

@end

