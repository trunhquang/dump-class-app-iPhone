//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlTransaction.h"

@class ComGoogleAppsXplatSqlSqliteSqlitePlatformAdaptor, ComGoogleAppsXplatSqlUtilVirtualConnection;

@interface ComGoogleAppsXplatSqlSqliteSqliteTransaction : ComGoogleAppsXplatSqlSqlTransaction
{
    ComGoogleAppsXplatSqlUtilVirtualConnection *virtualConnection_;
    ComGoogleAppsXplatSqlSqliteSqlitePlatformAdaptor *platformAdaptor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_virtualConnection_;
+ (void)initialize;
- (void)dealloc;
- (void)releaseVirtualConnection;
- (id)commitAndClose;
- (id)rollbackAndClose;
- (id)executeWriteInternalWithComGoogleAppsXplatSqlSqlWrite:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeQueryInternalWithComGoogleAppsXplatSqlSqlQuery:(id)arg1 withJavaUtilList:(id)arg2;
- (id)executeOnVirtualConnectionWithComGoogleAppsXplatSqlUtilVirtualConnection_RunWithConnection:(id)arg1;
- (id)beginTransaction;
- (id)initWithComGoogleAppsXplatSqlSqlTransaction_TypeEnum:(id)arg1 withNSString:(id)arg2 withComGoogleAppsXplatSqlUtilVirtualConnection:(id)arg3 withComGoogleAppsXplatSqlSqliteSqlitePlatformAdaptor:(id)arg4 withComGoogleCommonCacheLoadingCache:(id)arg5;

@end

