//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IGDirectContentCell, IGUser;

@protocol IGDirectContentCellDelegate <NSObject>
- (void)contentCell:(IGDirectContentCell *)arg1 profilePictureWasTappedWithUser:(IGUser *)arg2;
- (void)contentCellDidLongPress:(IGDirectContentCell *)arg1;
- (BOOL)contentCellShouldLongPress:(IGDirectContentCell *)arg1;
@end

