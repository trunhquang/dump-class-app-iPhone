//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GOOTableView;

@protocol GOOTableViewDismissDelegate <NSObject>
- (BOOL)tableView:(GOOTableView *)arg1 canSwipeToDismissAtSection:(int)arg2;

@optional
- (void)tableView:(GOOTableView *)arg1 didCancelSwipeToDismissAtSection:(int)arg2;
- (void)tableView:(GOOTableView *)arg1 didEndSwipeToDismissAtSection:(int)arg2;
- (void)tableView:(GOOTableView *)arg1 willBeginSwipeToDismissAtSection:(int)arg2;
@end

