//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonCollectMultiMap;

@interface JBTISearchSearchResultsProducer_ItemsMonitor : NSObject
{
    ComGoogleCumulusCommonCollectMultiMap *monitoredItems_;
    ComGoogleCumulusCommonCollectMultiMap *removedItems_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)getRemovedChangeAndMetadatasWithJBTIds_StorageId:(id)arg1;
- (id)getChangeAndMetadatasWithJBTIds_StorageId:(id)arg1;
- (id)getMonitoredIds;
- (id)getRemoveAllResultsChanges;
- (void)transitionToMonitoredWithJBTIds_StorageId:(id)arg1;
- (void)transitionToRemovedWithJBTIds_StorageId:(id)arg1;
- (void)monitorWithJBTISearchSearchResultsProducer_ChangeAndMetadata:(id)arg1;
- (id)initWithJBTISearchSearchResultsProducer_ItemsMonitor:(id)arg1;
- (id)init;

@end

