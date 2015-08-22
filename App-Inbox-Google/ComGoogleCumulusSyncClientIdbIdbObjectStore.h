//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientAbstractIndexedObjectLoader.h"

#import "ComGoogleCumulusApiTypeObjectIndex.h"
#import "ComGoogleCumulusSyncClientIndexedObjectStore.h"
#import "ComGoogleCumulusSyncClientSyncIndex.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusCommonUtilEventBus, ComGoogleCumulusCommonVarExporter, ComGoogleCumulusSyncClientIdbIdbIndexProcessor, ComGoogleCumulusSyncClientIdbIdbObjectStore_Initializer, ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata, ComGoogleCumulusSyncClientIdbIdbPostingListCache, ComGoogleCumulusSyncClientIdbIdbPostingListReifierManager, ComGoogleCumulusSyncClientIdbIdbRangeTermsCollectorProcessor, ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager, ComGoogleCumulusSyncClientIdbTaskQueue, JavaLangException, JavaUtilHashMap, JavaUtilLinkedList, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore : ComGoogleCumulusSyncClientAbstractIndexedObjectLoader <ComGoogleCumulusSyncClientIndexedObjectStore, ComGoogleCumulusApiTypeObjectIndex, ComGoogleCumulusSyncClientSyncIndex>
{
    ComGoogleCumulusSyncClientIdbIdbSharedTransactionManager *sharedTransactionManager_;
    ComGoogleCumulusSyncClientIdbIdbIndexProcessor *indexProcessor_;
    id <ComGoogleCumulusCommonIndexIdbAdapter> idbAdapter_;
    NSString *databaseName_;
    double schemaVersion_;
    int lastAcceptedMinorVersion_;
    int lastAcceptedMajorVersion_;
    JavaUtilHashMap *fields_;
    id <ComGoogleCommonBaseSupplier> indexerSupplier_;
    id <ComGoogleCumulusSyncClientIndexPreprocessor> indexPreprocessor_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    id <ComGoogleCumulusCommonMetric2SpanEventsSink_Flusher> spanEventsFlusher_;
    id <JCGCuPrioritizedWorkQueue> workQueue_IdbObjectStore_;
    id <ComGoogleCumulusApiPluginSlicer> slicer_;
    id <ComGoogleCumulusCommonSubscriptions> subscriptionAccessor_;
    ComGoogleCumulusCommonVarExporter *varExporter_;
    id <JavaUtilSet> optimizedSliceGroups_;
    id <ComGoogleCumulusCommonMetric2SysTraceService> sysTraceService_;
    JavaUtilLinkedList *readyQueue_;
    JavaUtilLinkedList *writeWaitQueue_;
    ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata *metadata_;
    id <JavaUtilMap> activeOperations_;
    ComGoogleCumulusCommonUtilEventBus *writePressureEventBus_;
    BOOL hasWritePressure_;
    ComGoogleCumulusSyncClientIdbIdbPostingListCache *postingListCache_;
    ComGoogleCumulusCommonUtilEventBus *appControlBus_;
    id <ComGoogleCumulusSyncClientStoreLookupCache> lookupCache_;
    int writeSizePressureThreshold_;
    id <ComGoogleCumulusCommonIndexIdbAdapter_Database> database_;
    id <JCGCuMultiOperationWatchdog> watchdog_;
    ComGoogleCumulusSyncClientIdbIdbPostingListReifierManager *reifiers_;
    ComGoogleCumulusSyncClientIdbIdbRangeTermsCollectorProcessor *rangeTermsCollectors_;
    BOOL ready_;
    BOOL closed_;
    ComGoogleCumulusSyncClientIdbTaskQueue *commitQueue_;
    id <ComGoogleCommonBaseReceiver> storeWipeHandler_;
    double oldVersion_;
    id <ComGoogleCumulusSyncClientIdbIdbObjectOperation_Handler> handler_;
    id <JavaLangRunnable> clearPendingOrIssuedWrites_;
    int pendingWrites_;
    int pendingOrIssuedWriteSize_;
    int pendingOrIssuedWrites_;
    BOOL flushScheduled_;
    BOOL flushDeferred_;
    BOOL flushNeeded_;
    ComGoogleCumulusSyncClientIdbIdbObjectStore_Initializer *initializer_;
    id <ComGoogleCumulusSyncClientObjectStore_InitializationResult> initializationResult_;
    JavaLangException *initializationException_;
    BOOL isInMutationSaveMode_;
    id <ComGoogleCumulusCommonIndexAsyncIndexer> indexer_;
}

+ (void)initialize;
+ (double)parseEncodedDoubleWithNSString:(id)arg1;
+ (id)parseStringValueFromKeyWithNSString:(id)arg1;
+ (int)getMinorVersionWithDouble:(double)arg1;
+ (int)getMajorVersionWithDouble:(double)arg1;
+ (double)buildSchemaVersionWithInt:(int)arg1 withInt:(int)arg2;
- (void)dealloc;
- (id)createIndexValidator;
- (void)ensureIndexUpdatedWithJavaLangRunnable:(id)arg1;
- (void)wipeStore;
- (int)getBucketIdForTokenWithNSString:(id)arg1 withId:(id)arg2;
- (void)setLocalStoreDataVersionWithInt:(int)arg1;
- (id)getLocalStoreDataVersion;
- (void)decPendingWrites;
- (void)addPendingWriteSizeWithInt:(int)arg1;
- (id)getOperationForReadWithNSString:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3;
- (id)getOperationWithNSString:(id)arg1 withInt:(int)arg2;
- (id)wrapCallbackWithIntArray:(id)arg1 withComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback:(id)arg2;
- (BOOL)hasWritePressure;
- (id)getWritePressureDispatcher;
- (void)deleteObjectWithNSString:(id)arg1 withJavaLangRunnable:(id)arg2;
- (void)deleteObjectWithNSString:(id)arg1;
- (void)load__WithIntArray:(id)arg1 withJavaUtilSet:(id)arg2 withComGoogleCumulusApiTypeObjectLoader_LoadContext:(id)arg3 withComGoogleCumulusApiTypeIndexedObjectLoader_IndexIdLoadCallback:(id)arg4;
- (void)load__WithComGoogleCumulusApiTypeObjectReference:(id)arg1 withComGoogleCumulusApiTypeObjectLoader_LoadContext:(id)arg2 withComGoogleCumulusApiTypeObjectLoader_LoadCallback:(id)arg3;
- (void)setPendingBatchStateWithJavaUtilLinkedHashMap:(id)arg1;
- (void)reindexWithJavaUtilCollection:(id)arg1;
- (void)writeUpdateWithNSString:(id)arg1 withComGoogleCumulusSyncClientObjectUpdate:(id)arg2 withJavaLangRunnable:(id)arg3;
- (void)writeUpdateWithNSString:(id)arg1 withComGoogleCumulusSyncClientObjectUpdate:(id)arg2;
- (id)createIdbIteratorWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(BOOL)arg3 withId:(id)arg4 withBoolean:(BOOL)arg5 withBoolean:(BOOL)arg6;
- (id)getCustomSyncIndexIterableWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (id)getCustomFieldIterableWithNSString:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3 withBoolean:(BOOL)arg4;
- (id)getCustomFieldIterableWithNSString:(id)arg1 withBoolean:(BOOL)arg2 withId:(id)arg3;
- (id)getIndexedObjectsIterableWithStateWithJavaUtilCollection:(id)arg1;
- (id)getIndexedObjectsIterable;
- (id)getRangeIterableWithNSString:(id)arg1 withJavaLangComparable:(id)arg2 withJavaLangComparable:(id)arg3 withInt:(int)arg4 withBoolean:(BOOL)arg5;
- (id)getRangeIterableWithNSString:(id)arg1 withJavaLangComparable:(id)arg2 withJavaLangComparable:(id)arg3 withInt:(int)arg4;
- (id)getRangeIterableWithNSString:(id)arg1 withJavaLangComparable:(id)arg2 withJavaLangComparable:(id)arg3 withBoolean:(BOOL)arg4;
- (id)getRangeIterableWithNSString:(id)arg1 withJavaLangComparable:(id)arg2 withJavaLangComparable:(id)arg3;
- (id)getPhraseIterableWithNSString:(id)arg1 withJavaUtilCollection:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (id)getPhraseIterableWithNSString:(id)arg1 withJavaUtilCollection:(id)arg2 withBoolean:(BOOL)arg3;
- (void)collectFtsTermsWithTxWithComGoogleCumulusCommonIndexFieldSpec:(id)arg1 withNSString:(id)arg2 withComGoogleCommonBaseReceiver:(id)arg3 withComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg4;
- (void)collectFtsTermsWithComGoogleCumulusCommonIndexFieldSpec:(id)arg1 withNSString:(id)arg2 withComGoogleCommonBaseReceiver:(id)arg3;
- (id)getPrefixIterableWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (id)getPrefixIterableWithNSString:(id)arg1 withNSString:(id)arg2 withBoolean:(BOOL)arg3;
- (id)getPrefixIterableWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getIterableWithNSString:(id)arg1 withId:(id)arg2 withBoolean:(BOOL)arg3;
- (id)getIterableWithNSString:(id)arg1 withId:(id)arg2;
- (id)getSyncIndexIterableWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (id)getSyncIndexWithNSString:(id)arg1;
- (id)getOutsideBoundsSyncIndexWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)getReverseSyncIndexWithNSString:(id)arg1;
- (void)putSettingWithNSString:(id)arg1 withComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg2 withJavaLangRunnable:(id)arg3;
- (void)putSettingWithNSString:(id)arg1 withComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg2;
- (void)getSettingWithNSString:(id)arg1 withJCGCuCallback:(id)arg2;
- (void)performClose;
- (void)closeSharedTransactionManagerWithJCGCuCallback:(id)arg1;
- (void)closeIndexProcessorWithJCGCuCallback:(id)arg1;
- (void)closeWithJCGCuCallback:(id)arg1;
- (BOOL)isOpen;
- (void)writeMetadataCacheWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1;
- (void)flushWhenNotBlockedWithJCGCuCallback:(id)arg1;
- (void)flushWithJCGCuCallback:(id)arg1;
- (void)scheduleCacheFlush;
- (void)onReadIssued;
- (void)onWriteIssuedWithComGoogleCumulusCommonIndexIdbAdapter_Transaction:(id)arg1;
- (void)commitWithJCGCuCallback:(id)arg1;
- (void)runReadyQueue;
- (BOOL)hasMutationsWithComGoogleCumulusFrameworkStoreProto_Metadata:(id)arg1;
- (void)initialize__WithJCGCuCallback:(id)arg1;
- (BOOL)hasOldVersion;
- (double)getOldVersion;
- (double)getSchemaVersion;
- (id)initWithComGoogleCumulusCommonIndexIdbAdapter:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withJavaLangIterable:(id)arg7 withComGoogleCommonBaseSupplier:(id)arg8 withComGoogleCumulusSyncClientIndexPreprocessor:(id)arg9 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg10 withComGoogleCumulusCommonMetric2SpanEventsSink_Flusher:(id)arg11 withJCGCuPrioritizedWorkQueue:(id)arg12 withJCGCuMultiOperationWatchdog:(id)arg13 withComGoogleCumulusApiPluginSlicer:(id)arg14 withComGoogleCumulusCommonSubscriptions:(id)arg15 withJavaUtilCollection:(id)arg16 withComGoogleCumulusCommonVarExporter:(id)arg17 withComGoogleCommonBaseReceiver:(id)arg18 withComGoogleCumulusCommonUtilEventBus:(id)arg19 withInt:(int)arg20 withComGoogleCumulusCommonMetric2SysTraceService:(id)arg21 withComGoogleCumulusSyncClientStoreLookupCache:(id)arg22;
- (id)initWithComGoogleCumulusCommonIndexIdbAdapter:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaLangIterable:(id)arg5 withComGoogleCommonBaseSupplier:(id)arg6 withComGoogleCumulusSyncClientIndexPreprocessor:(id)arg7 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg8 withComGoogleCumulusCommonMetric2SpanEventsSink_Flusher:(id)arg9 withJCGCuPrioritizedWorkQueue:(id)arg10 withJCGCuMultiOperationWatchdog:(id)arg11 withComGoogleCumulusApiPluginSlicer:(id)arg12 withComGoogleCumulusCommonSubscriptions:(id)arg13 withJavaUtilCollection:(id)arg14 withComGoogleCumulusCommonVarExporter:(id)arg15 withComGoogleCommonBaseReceiver:(id)arg16 withComGoogleCumulusCommonUtilEventBus:(id)arg17 withInt:(int)arg18 withComGoogleCumulusCommonMetric2SysTraceService:(id)arg19 withComGoogleCumulusSyncClientStoreLookupCache:(id)arg20;
- (void)postToWritePressureBusWithBoolean:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

