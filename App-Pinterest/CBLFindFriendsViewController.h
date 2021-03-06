//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString;

@interface CBLFindFriendsViewController : CBLBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSString *_sourcePath;
    NSArray *_inviteTypes;
}

@property(retain, nonatomic) NSArray *inviteTypes; // @synthesize inviteTypes=_inviteTypes;
@property(copy, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
- (void).cxx_destruct;
- (void)showInviteFriends;
- (void)showFriendsWithCollection:(id)arg1 andTitle:(id)arg2;
- (void)showFacebookFriends;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

