//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity, ComGoogleAppsBigtopDataEntitiesEntityStorage, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataEntitiesEntityStorage_$1 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataEntitiesEntityStorage *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    ComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity *val$entity_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_applyWithJavaLangLong__params;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataEntitiesEntityStorage:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2 withComGoogleAppsBigtopDataEntitiesEntitiesProto_Entity:(id)arg3;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

