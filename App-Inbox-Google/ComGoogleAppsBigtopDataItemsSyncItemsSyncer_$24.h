//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsSyncItemsSyncer, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataItemsSyncItemsSyncer_$24 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsSyncItemsSyncer *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    long long val$bulkChangeId_;
    id <JavaUtilList> val$ackedItemServerPermIds_;
    id <JavaUtilList> val$nackedItemServerPermIds_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsSyncItemsSyncer:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2 withLong:(long long)arg3 withJavaUtilList:(id)arg4 withJavaUtilList:(id)arg5;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

