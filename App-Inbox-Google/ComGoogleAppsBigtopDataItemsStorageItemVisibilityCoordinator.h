//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopDataItemsStorageClustersTableController, ComGoogleAppsBigtopDataItemsStorageItemVisibilityTableController, ComGoogleAppsBigtopDataItemsStorageItemsTableController;

@interface ComGoogleAppsBigtopDataItemsStorageItemVisibilityCoordinator : NSObject
{
    ComGoogleAppsBigtopDataItemsStorageClustersTableController *clustersTableController_;
    id <JavaUtilConcurrentExecutor> executor_;
    ComGoogleAppsBigtopDataItemsStorageItemVisibilityTableController *itemVisibilityTableController_;
    ComGoogleAppsBigtopDataItemsStorageItemsTableController *itemsTableController_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_clearVisibilitiesByItemServerPermIdWithComGoogleAppsXplatSqlSqlTransaction_withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum_withNSString_withNSString__params;
+ (id)__annotations_initWithComGoogleAppsBigtopDataItemsStorageClustersTableController_withJavaUtilConcurrentExecutor_withComGoogleAppsBigtopDataItemsStorageItemVisibilityTableController_withComGoogleAppsBigtopDataItemsStorageItemsTableController_;
+ (void)initialize;
- (void)dealloc;
- (BOOL)bulkOpRemovesInboxLabelWithComGoogleAppsBigtopDataItemsItemsProto_BulkItemChange:(id)arg1;
- (id)clearVisibilitiesByItemServerPermIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_ViewTypeEnum:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (id)updateItemVisibilityTableForBulkOpWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleAppsBigtopDataItemsItemsProto_BulkItemChange:(id)arg2 withComGoogleAppsBigtopDataItemsItemsInternalProto_ItemServerPermIds:(id)arg3;
- (id)initWithComGoogleAppsBigtopDataItemsStorageClustersTableController:(id)arg1 withJavaUtilConcurrentExecutor:(id)arg2 withComGoogleAppsBigtopDataItemsStorageItemVisibilityTableController:(id)arg3 withComGoogleAppsBigtopDataItemsStorageItemsTableController:(id)arg4;

@end

