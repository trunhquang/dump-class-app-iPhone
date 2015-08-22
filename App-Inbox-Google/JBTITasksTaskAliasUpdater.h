//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonCollectMultiMap, JBTICommonSapiSpan_Factory;

@interface JBTITasksTaskAliasUpdater : NSObject
{
    id <JavaUtilMap> aliasesByAliasId_;
    ComGoogleCumulusCommonCollectMultiMap *taskIdsByAliasId_;
    id <JavaUtilMap> tasksByTaskId_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer> taskProducer_;
    id <ComGoogleAppsBigtopSyncClientImplProducersElementProducer> aliasProducer_;
    JBTICommonSapiSpan_Factory *sapiSpanFactory_;
    id <JBTSnoozeConfig_Factory> snoozeConfigFactory_;
    id <JBTICommonTransactionFactory> transactionFactory_;
    BOOL started_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (id)getTasksSnoozedToAliasWithJBTLocationAlias:(id)arg1;
- (void)pinSnoozedTasksWithJBTLocationAlias:(id)arg1;
- (void)updateAliasNameOnSnoozedTasksWithJBTLocationAlias:(id)arg1;
- (void)stop;
- (id)startWithJBTSpan:(id)arg1;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1 withComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg2 withJBTICommonSapiSpan_Factory:(id)arg3 withJBTSnoozeConfig_Factory:(id)arg4 withJBTICommonTransactionFactory:(id)arg5;

@end

