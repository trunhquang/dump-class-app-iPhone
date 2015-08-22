//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonForwardSyncTokenProvider, JBTICommonObjectFetcher, JBTICommonSapiSpan_Factory, JBTIItemsBulkCommandExpander;

@interface JBTIItemsPermanentlyDeleteAllHelper : NSObject
{
    JBTIItemsBulkCommandExpander *bulkCommandExpander_;
    JBTICommonObjectFetcher *incrementalInfoFetcher_;
    JBTICommonForwardSyncTokenProvider *forwardSyncTokenProvider_;
    id <JBTICommonIdFactory> bulkCommandIdFactory_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_handleIncrementalPermanentlyDeleteBulkCommandWithJBTItemList_withJBTICommonTransactionFactory_withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum_withJBTCallback_withJBTICommonSapiSpan_withJBTIItemsPermanentlyDeleteAllHelper_DeleteCanceler_withJBTProgressListener__params;
+ (id)__annotations_handleSinglePermanentlyDeleteBulkCommandWithJBTItemList_withJBTICommonTransactionFactory_withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum_withJBTCallback_withJBTICommonSapiSpan_withJBTIItemsPermanentlyDeleteAllHelper_DeleteCanceler_withJBTProgressListener__params;
+ (id)__annotations_permanentlyDeleteWithJBTItemList_withJBTICommonTransactionFactory_withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum_withJBTCallback_withJBTSpan_withJBTProgressListener__params;
+ (id)__annotations_initWithJBTIItemsBulkCommandExpander_withComGoogleCumulusApiBigSet_withJBTICommonForwardSyncTokenProvider_withJBTICommonIdFactory_withJBTICommonSapiSpan_Factory_;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (BOOL)checkIfCanceledWithJBTIItemsPermanentlyDeleteAllHelper_DeleteCanceler:(id)arg1;
- (id)getQueryTypeWithNSString:(id)arg1;
- (void)commitTransactionWithJBTICommonTransaction:(id)arg1 withJBTCallback:(id)arg2 withJBTICommonSapiSpan:(id)arg3;
- (void)addAndCommitIncrementalCommandsWithJBTItemList:(id)arg1 withJBTICommonTransactionFactory:(id)arg2 withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum:(id)arg3 withJBTCallback:(id)arg4 withJBTICommonSapiSpan:(id)arg5 withJBTIItemsPermanentlyDeleteAllHelper_IncrementalRequestState:(id)arg6;
- (void)handleIncrementalPermanentlyDeleteBulkCommandWithJBTItemList:(id)arg1 withJBTICommonTransactionFactory:(id)arg2 withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum:(id)arg3 withJBTCallback:(id)arg4 withJBTICommonSapiSpan:(id)arg5 withJBTIItemsPermanentlyDeleteAllHelper_DeleteCanceler:(id)arg6 withJBTProgressListener:(id)arg7;
- (void)handleSinglePermanentlyDeleteBulkCommandWithJBTItemList:(id)arg1 withJBTICommonTransactionFactory:(id)arg2 withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum:(id)arg3 withJBTCallback:(id)arg4 withJBTICommonSapiSpan:(id)arg5 withJBTIItemsPermanentlyDeleteAllHelper_DeleteCanceler:(id)arg6 withJBTProgressListener:(id)arg7;
- (id)permanentlyDeleteWithJBTItemList:(id)arg1 withJBTICommonTransactionFactory:(id)arg2 withJBTIItemsPermanentlyDeleteAllHelper_QueryTypeEnum:(id)arg3 withJBTCallback:(id)arg4 withJBTSpan:(id)arg5 withJBTProgressListener:(id)arg6;
- (id)initWithJBTIItemsBulkCommandExpander:(id)arg1 withJBTICommonForwardSyncTokenProvider:(id)arg2 withJBTICommonIdFactory:(id)arg3 withJBTICommonSapiSpan_Factory:(id)arg4 withJBTICommonObjectFetcher:(id)arg5;
- (id)initWithJBTIItemsBulkCommandExpander:(id)arg1 withComGoogleCumulusApiBigSet:(id)arg2 withJBTICommonForwardSyncTokenProvider:(id)arg3 withJBTICommonIdFactory:(id)arg4 withJBTICommonSapiSpan_Factory:(id)arg5;

@end

