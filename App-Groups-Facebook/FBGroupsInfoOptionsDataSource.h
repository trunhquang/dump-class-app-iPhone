//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@class FBMemGroup, FBUserSession, NSArray, NSString;

@interface FBGroupsInfoOptionsDataSource : NSObject <UITableViewDataSource>
{
    FBMemGroup *_group;
    FBUserSession *_session;
    NSArray *_groupOptions;
    id <FBGroupsInfoViewConfig> _config;
    id <FBGroupsInfoOptionsDataSourceDelegate> _delegate;
    id <FBTableViewMutating> _tableViewMutator;
}

@property(nonatomic) __weak id <FBTableViewMutating> tableViewMutator; // @synthesize tableViewMutator=_tableViewMutator;
@property(nonatomic) __weak id <FBGroupsInfoOptionsDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateGroup:(id)arg1;
- (int)_effectiveRowForOption:(int)arg1;
- (BOOL)_shouldShowReportOption;
- (BOOL)_shouldShowLeaveGroupOption;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)initWithSession:(id)arg1 group:(id)arg2 viewConfig:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

