//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentAsyncFunction.h"

@class ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum, ComGoogleAppsBigtopDataItemsStorageItemsQueryManager, ComGoogleAppsXplatSqlSqlTransaction, NSString;

@interface ComGoogleAppsBigtopDataItemsStorageItemsQueryManager_$4 : NSObject <ComGoogleCommonUtilConcurrentAsyncFunction>
{
    ComGoogleAppsBigtopDataItemsStorageItemsQueryManager *this$0_;
    ComGoogleAppsXplatSqlSqlTransaction *val$transaction_;
    ComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum *val$viewType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithComGoogleAppsBigtopDataItemsStorageItemsQueryManager:(id)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2 withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg3;
- (id)applyWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

