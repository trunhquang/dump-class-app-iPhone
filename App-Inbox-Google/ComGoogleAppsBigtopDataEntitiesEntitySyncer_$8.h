//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlDatabase_RunInTransaction.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncResponse, ComGoogleAppsBigtopDataEntitiesEntitySyncer;

@interface ComGoogleAppsBigtopDataEntitiesEntitySyncer_$8 : ComGoogleAppsXplatSqlSqlDatabase_RunInTransaction
{
    ComGoogleAppsBigtopDataEntitiesEntitySyncer *this$0_;
    ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncResponse *val$syncResponse_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataEntitiesEntitySyncer:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncResponse:(id)arg2 withNSString:(id)arg3;
- (id)runWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;

@end

