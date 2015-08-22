//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonCollectMultiMap, JBTICommonSapiSpan_Factory, JBTICommonScheduler, JBTITasksTaskAssistService, JavaLangInteger;

@interface JBTITasksSetAliasTaskRefresher : NSObject
{
    int numRetries_;
    id <JavaUtilMap> aliasesByCategoryId_;
    ComGoogleCumulusCommonCollectMultiMap *taskIdsByCategoryId_;
    id <JavaUtilMap> tasksByTaskId_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer> taskProducer_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer> aliasProducer_;
    JBTITasksTaskAssistService *taskAssistService_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    JBTICommonScheduler *scheduler_;
    JavaLangInteger *cancellationToken_;
    BOOL started_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_cancellationToken_;
+ (void)initialize;
- (void)dealloc;
- (id)getSetAliasActionWithJBTITasksTaskImpl:(id)arg1;
- (void)resetRefresher;
- (void)cancelRetry;
- (void)scheduleRefresh;
- (BOOL)isSetAliasActionWithComGooglePersonalizationAssistAnnotateApiTaskAssistance:(id)arg1;
- (void)removeTasksFromTaskMapsWithJavaUtilList:(id)arg1;
- (id)convertAddressWithJCSAddress:(id)arg1;
- (id)convertLocationAliasWithJBTLocationAlias:(id)arg1;
- (id)getTasksAliasPairsToRefresh;
- (void)refreshSetAliasTasks;
- (void)stop;
- (id)startWithJBTSpan:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg2 withJBTITasksTaskAssistService:(id)arg3 withJBTICommonSapiSpan_Factory:(id)arg4 withJBTICommonTransactionFactory:(id)arg5 withJBTICommonScheduler:(id)arg6;

@end

