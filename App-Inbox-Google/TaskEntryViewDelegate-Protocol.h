//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TaskEntryView;

@protocol TaskEntryViewDelegate <NSObject>
- (void)taskEntryViewTextDidChange:(TaskEntryView *)arg1;
- (void)taskEntryViewDidFinishEditing:(TaskEntryView *)arg1;
- (void)taskEntryViewDidBeginEditing:(TaskEntryView *)arg1;

@optional
- (void)taskEntryViewDidTapClear:(TaskEntryView *)arg1;
@end

