//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsChangesSyncCoordinator, ComGoogleAppsBigtopDataItemsStorageInsertOrUpdateReason, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataItemsChangesSyncCoordinator_$1 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsChangesSyncCoordinator *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    id <JavaUtilList> val$threads_;
    ComGoogleAppsBigtopDataItemsStorageInsertOrUpdateReason *val$insertOrUpdateReason_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsChangesSyncCoordinator:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2 withJavaUtilList:(id)arg3 withComGoogleAppsBigtopDataItemsStorageInsertOrUpdateReason:(id)arg4;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

