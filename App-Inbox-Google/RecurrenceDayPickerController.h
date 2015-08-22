//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RecurrenceTableViewController.h"

@class NSArray, NSMutableArray;

@interface RecurrenceDayPickerController : RecurrenceTableViewController
{
    NSMutableArray *selectedDays_;
    id <RecurrenceDayPickerDelegate> _delegate;
}

@property(nonatomic) __weak id <RecurrenceDayPickerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *selectedDays; // @synthesize selectedDays=selectedDays_;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2;
- (void)toggleCellAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateCell:(id)arg1 indexPath:(id)arg2;
- (unsigned int)repeatWeekdayForIndex:(int)arg1;
- (int)rowForWeekday:(unsigned int)arg1;
- (void)dayPickerDone:(id)arg1;
- (void)viewDidLoad;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (int)preferredInterfaceOrientationForPresentation;
- (id)initWithSelectedDays:(id)arg1;

@end

