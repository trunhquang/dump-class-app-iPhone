//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBCrowdsourcingNewSuggestEditsHoursInputTableDataSourceDelegate.h"
#import "FBCrowdsourcingNewSuggestEditsHoursTypePickerViewControllerDelegate.h"

@class CALayer, FBCrowdsourcingEditsModel, FBCrowdsourcingNewSuggestEditsHoursInputTableDataSource, FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView, FBCrowdsourcingNewSuggestEditsHoursTypePickerViewController, NSString, UIDatePicker, UITableView;

@interface FBCrowdsourcingNewSuggestEditsHoursInputViewController : UIViewController <FBCrowdsourcingNewSuggestEditsHoursInputTableDataSourceDelegate, FBCrowdsourcingNewSuggestEditsHoursTypePickerViewControllerDelegate>
{
    FBCrowdsourcingEditsModel *_model;
    UITableView *_tableView;
    FBCrowdsourcingNewSuggestEditsHoursInputTableDataSource *_hoursDataSource;
    FBCrowdsourcingNewSuggestEditsHoursTypePickerViewController *_hoursTypePicker;
    UIDatePicker *_datePicker;
    BOOL _isDatePickerOpen;
    CALayer *_topBorder;
    int _editingHoursType;
    int _editingHoursRow;
    int _editingHoursDay;
    int _lastEditedDay;
    FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView *_editingHoursCellView;
    BOOL _hasInitializedDatePickerFrame;
    BOOL _showScheduleSection;
    id <FBCrowdsourcingNewSuggestEditsHoursInputViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCrowdsourcingNewSuggestEditsHoursInputViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL showScheduleSection; // @synthesize showScheduleSection=_showScheduleSection;
- (void).cxx_destruct;
- (void)_handleTap;
- (struct CGPoint)_getContentOffsetForShowingDatePicker;
- (void)_displayDatePickerWithShowValue:(BOOL)arg1;
- (void)_timeChanged:(id)arg1;
- (void)_moveCurrentHoursDataToModel;
- (void)_didTapDone;
- (void)_didTapBack;
- (void)hoursTypePickerViewDidTapBack;
- (void)hoursTypePickerViewDidSelectType:(id)arg1;
- (void)hoursInputViewDidTapEditHoursForCellType:(int)arg1 forDay:(int)arg2 forRow:(int)arg3 inCellView:(id)arg4;
- (void)hoursInputViewDidDeleteHoursForDay:(int)arg1;
- (void)hoursInputViewDidAddHoursForDay:(int)arg1;
- (void)hoursInputViewDidToggleHoursForDay:(int)arg1 withOpenValue:(BOOL)arg2;
- (void)hoursInputViewDidTapScheduleTypeCell;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (int)preferredInterfaceOrientationForPresentation;
- (unsigned int)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

