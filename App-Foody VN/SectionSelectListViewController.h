//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "SectionHeaderViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface SectionSelectListViewController : UITableViewController <SectionHeaderViewDelegate>
{
    id <MultipleSelectListDelegate> delegate;
    NSString *headerTitle;
    NSString *trackTitle;
    NSArray *sectionArray;
    NSMutableArray *selectedProps;
    int _openSectionIndex;
}

@property(nonatomic) int openSectionIndex; // @synthesize openSectionIndex=_openSectionIndex;
@property(retain, nonatomic) NSMutableArray *selectedProps; // @synthesize selectedProps;
@property(retain, nonatomic) NSArray *sectionArray; // @synthesize sectionArray;
@property(copy, nonatomic) NSString *trackTitle; // @synthesize trackTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle;
@property(nonatomic) __weak id <MultipleSelectListDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didTouchDoneButton:(id)arg1;
- (void)didTouchCancelButton:(id)arg1;
- (void)setTextTitle:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)sectionHeaderView:(id)arg1 sectionClosed:(int)arg2;
- (void)sectionHeaderView:(id)arg1 sectionOpened:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithHierarchyPropertyList:(id)arg1 preselectList:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

