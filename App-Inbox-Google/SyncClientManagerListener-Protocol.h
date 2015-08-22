//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SyncClientManager;

@protocol SyncClientManagerListener <NSObject>

@optional
- (void)syncClientManagerWillStartBackgroundTask:(SyncClientManager *)arg1;
- (void)syncClientManagerWillStopBackgroundTask:(SyncClientManager *)arg1;
- (void)syncClientManager:(SyncClientManager *)arg1 didRemoveSyncClientForAccount:(NSString *)arg2;
- (void)syncClientManager:(SyncClientManager *)arg1 didAddSyncClientForAccount:(NSString *)arg2;
- (void)syncClientManager:(SyncClientManager *)arg1 didFinishInitialSyncForEmail:(NSString *)arg2;
- (void)syncClientManagerDidUpdateSyncStatus:(SyncClientManager *)arg1;
@end

