//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FBSettingsSchemaItemMultiValue, NSString;

@interface FBSettingsMultiValueTableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>
{
    id <FBSettingsViewControllerDelegate> _delegate;
    FBSettingsSchemaItemMultiValue *_schemaItem;
}

@property(retain, nonatomic) FBSettingsSchemaItemMultiValue *schemaItem; // @synthesize schemaItem=_schemaItem;
@property(nonatomic) id <FBSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)fb_showAuxiliaryViewController;
- (id)initWithTitle:(id)arg1 data:(id)arg2;
- (id)initWithStyle:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

