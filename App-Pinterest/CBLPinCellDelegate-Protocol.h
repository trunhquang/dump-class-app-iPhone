//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLPinCell;

@protocol CBLPinCellDelegate <NSObject>
- (void)logPinImpressionForPinCellImmediately:(CBLPinCell *)arg1;
- (void)showPinFeedbackDialogForPinCell:(CBLPinCell *)arg1;
- (void)pinCellDidFinishLoading:(CBLPinCell *)arg1 cached:(BOOL)arg2;
@end

