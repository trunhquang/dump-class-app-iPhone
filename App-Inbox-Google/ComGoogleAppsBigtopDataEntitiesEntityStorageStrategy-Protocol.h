//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity, ComGoogleAppsXplatSqlSqlTransaction, JavaLangLong, NSString;

@protocol ComGoogleAppsBigtopDataEntitiesEntityStorageStrategy <NSObject, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)deleteAllDirtyEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)hasDirtyEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)countEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withBoolean:(BOOL)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)markAllEntitiesAsDirtyWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)listEntitiesWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withInt:(int)arg2 withLong:(long long)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getEntitiesByIdWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getItemRowIdOrNullWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withNSString:(NSString *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)deleteEntityWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withJavaLangLong:(JavaLangLong *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)updateEntityWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)arg2 withJavaLangLong:(JavaLangLong *)arg3;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)insertEntityWithComGoogleAppsXplatSqlSqlTransaction:(ComGoogleAppsXplatSqlSqlTransaction *)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *)arg2;
@end

