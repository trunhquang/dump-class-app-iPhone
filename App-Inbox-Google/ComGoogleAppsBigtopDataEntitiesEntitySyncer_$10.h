//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncResponse, ComGoogleAppsBigtopDataEntitiesEntitySyncer, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataEntitiesEntitySyncer_$10 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataEntitiesEntitySyncer *this$0_;
    ComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncResponse *val$syncResponse_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_applyWithComGoogleAppsBigtopDataEntitiesEntitiesInternalProto_EntitySyncState__params;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataEntitiesEntitySyncer:(id)arg1 withComGoogleAppsBigtopDataEntitiesEntitiesProto_EntitySyncResponse:(id)arg2 withComGoogleAppsXplatSqlSqlTransaction:(id)arg3;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

