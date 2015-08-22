//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NIFormElementCell.h"

#import "UITextFieldDelegate.h"

@class NSString, UIDatePicker, UITextField;

@interface NIDatePickerFormElementCell : NIFormElementCell <UITextFieldDelegate>
{
    UITextField *_dateField;
    UIDatePicker *_datePicker;
    UITextField *_dumbDateField;
}

@property(retain, nonatomic) UITextField *dumbDateField; // @synthesize dumbDateField=_dumbDateField;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(readonly, nonatomic) UITextField *dateField; // @synthesize dateField=_dateField;
- (void).cxx_destruct;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)selectedDateDidChange;
- (BOOL)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

