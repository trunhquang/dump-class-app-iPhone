//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EditableCell;

@protocol EditableCellDelegate <NSObject>

@optional
- (void)editableCellDidClear:(EditableCell *)arg1;
- (void)editableCellDidDelete:(EditableCell *)arg1;
- (void)editableCellDidReturn:(EditableCell *)arg1;
- (void)editableCellDidChangeInputText:(EditableCell *)arg1;
- (void)editableCellDidEndEditingInputText:(EditableCell *)arg1;
- (void)editableCellDidBeginEditingInputText:(EditableCell *)arg1;
@end

