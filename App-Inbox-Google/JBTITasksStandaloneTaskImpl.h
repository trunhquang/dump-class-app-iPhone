//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTITasksTaskImpl.h"

@class JBTCCachedValue, JBTITasksTaskCreator, JBTITasksTaskUpdateHelper;

@interface JBTITasksStandaloneTaskImpl : JBTITasksTaskImpl
{
    JBTITasksTaskCreator *taskCreator_;
    JBTITasksTaskUpdateHelper *taskUpdateHelper_;
    BOOL initiallySnoozed_;
    JBTCCachedValue *taskSource_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_saveTaskInExistingThreadWithComGoogleAppsBigtopServicesTasksBigTopTask_withComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition_withComGoogleAppsBigtopServicesGmailModifyLabelsCommand_Builder_withJBTICommonTransaction__params;
+ (id)__annotations_addCommandsToTransactionWithComGoogleAppsBigtopServicesTasksBigTopTask_withComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition_withComGoogleAppsBigtopServicesGmailModifyLabelsCommand_Builder_withJBTICommonTransaction_withJBTSpan_withBoolean__params;
+ (id)__annotations_trashWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_initWithJBTId_withComGoogleAppsBigtopServicesTasksBigTopTask_withJBTTaskSuggestion_withJBTCThreadData_withJBTICommonTransactionFactory_withJBTITasksTaskCreator_withJBTITasksTaskUpdateHelper_withLong_withJBTITasksTaskDueDateFactory_withComGoogleCumulusCommonUtilClock_withBoolean_withJBTICommonSapiSpan_Factory_withJBTITasksTaskAssistService_withJBTISmartMailTaskAssistanceSmartMailFactory_withComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_FactoryImpl_withDaggerLazy_withJBTICommonIdFactory_withJBTICommonSnoozeTimeFactory_withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeConfigFactoryImpl_withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory_withJBTITasksTaskArchiveTrashCommandResultFactory_withJBTITasksAssistanceCommitListenerFactory_withBoolean_withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata_withJBTITasksTaskTutorialsHelper_withComGoogleAppsBigtopSyncClientImplSnoozeLastSnoozeTracker_withJBTICommonProtoHelper_withJBTISearchSearchClickLogger_Factory_withJBTTranslationHelper_withComGoogleAppsBigtopSyncClientImplSnoozeFlexibleSnoozeScheduler__params;
+ (id)__annotations_fromExistingWithJBTId_withComGoogleAppsBigtopServicesTasksBigTopTask_withJBTTaskSuggestion_withJBTCThreadData_withJBTICommonTransactionFactory_withJBTITasksTaskCreator_withJBTITasksTaskUpdateHelper_withLong_withJBTITasksTaskDueDateFactory_withComGoogleCumulusCommonUtilClock_withJBTICommonSapiSpan_Factory_withJBTITasksTaskAssistService_withJBTISmartMailTaskAssistanceSmartMailFactory_withComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_FactoryImpl_withDaggerLazy_withJBTICommonIdFactory_withJBTICommonSnoozeTimeFactory_withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeConfigFactoryImpl_withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory_withJBTITasksTaskArchiveTrashCommandResultFactory_withJBTITasksAssistanceCommitListenerFactory_withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata_withJBTITasksTaskTutorialsHelper_withComGoogleAppsBigtopSyncClientImplSnoozeLastSnoozeTracker_withJBTICommonProtoHelper_withJBTISearchSearchClickLogger_Factory_withJBTTranslationHelper_withComGoogleAppsBigtopSyncClientImplSnoozeFlexibleSnoozeScheduler__params;
+ (id)__annotations_createNewWithJBTId_withComGoogleAppsBigtopServicesTasksBigTopTask_withJBTTaskSuggestion_withJBTICommonTransactionFactory_withJBTITasksTaskCreator_withJBTITasksTaskUpdateHelper_withLong_withJBTITasksTaskDueDateFactory_withComGoogleCumulusCommonUtilClock_withBoolean_withJBTICommonSapiSpan_Factory_withJBTITasksTaskAssistService_withJBTISmartMailTaskAssistanceSmartMailFactory_withComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_FactoryImpl_withDaggerLazy_withJBTICommonIdFactory_withJBTICommonSnoozeTimeFactory_withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeConfigFactoryImpl_withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory_withJBTITasksTaskArchiveTrashCommandResultFactory_withJBTITasksAssistanceCommitListenerFactory_withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata_withJBTITasksTaskTutorialsHelper_withComGoogleAppsBigtopSyncClientImplSnoozeLastSnoozeTracker_withJBTICommonProtoHelper_withJBTISearchSearchClickLogger_Factory_withJBTTranslationHelper_withComGoogleAppsBigtopSyncClientImplSnoozeFlexibleSnoozeScheduler__params;
+ (id)fromExistingWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg2 withJBTTaskSuggestion:(id)arg3 withJBTCThreadData:(id)arg4 withJBTICommonTransactionFactory:(id)arg5 withJBTITasksTaskCreator:(id)arg6 withJBTITasksTaskUpdateHelper:(id)arg7 withLong:(long long)arg8 withJBTITasksTaskDueDateFactory:(id)arg9 withComGoogleCumulusCommonUtilClock:(id)arg10 withJBTICommonSapiSpan_Factory:(id)arg11 withJBTITasksTaskAssistService:(id)arg12 withJBTISmartMailTaskAssistanceSmartMailFactory:(id)arg13 withComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_FactoryImpl:(id)arg14 withDaggerLazy:(id)arg15 withJBTICommonIdFactory:(id)arg16 withJBTICommonSnoozeTimeFactory:(id)arg17 withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeConfigFactoryImpl:(id)arg18 withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory:(id)arg19 withJBTITasksTaskArchiveTrashCommandResultFactory:(id)arg20 withJBTITasksAssistanceCommitListenerFactory:(id)arg21 withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg22 withJBTITasksTaskTutorialsHelper:(id)arg23 withComGoogleAppsBigtopSyncClientImplSnoozeLastSnoozeTracker:(id)arg24 withJBTICommonProtoHelper:(id)arg25 withJBTISearchSearchClickLogger_Factory:(id)arg26 withJBTTranslationHelper:(id)arg27 withComGoogleAppsBigtopSyncClientImplSnoozeFlexibleSnoozeScheduler:(id)arg28;
+ (id)createNewWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg2 withJBTTaskSuggestion:(id)arg3 withJBTICommonTransactionFactory:(id)arg4 withJBTITasksTaskCreator:(id)arg5 withJBTITasksTaskUpdateHelper:(id)arg6 withLong:(long long)arg7 withJBTITasksTaskDueDateFactory:(id)arg8 withComGoogleCumulusCommonUtilClock:(id)arg9 withBoolean:(BOOL)arg10 withJBTICommonSapiSpan_Factory:(id)arg11 withJBTITasksTaskAssistService:(id)arg12 withJBTISmartMailTaskAssistanceSmartMailFactory:(id)arg13 withComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_FactoryImpl:(id)arg14 withDaggerLazy:(id)arg15 withJBTICommonIdFactory:(id)arg16 withJBTICommonSnoozeTimeFactory:(id)arg17 withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeConfigFactoryImpl:(id)arg18 withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory:(id)arg19 withJBTITasksTaskArchiveTrashCommandResultFactory:(id)arg20 withJBTITasksAssistanceCommitListenerFactory:(id)arg21 withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg22 withJBTITasksTaskTutorialsHelper:(id)arg23 withComGoogleAppsBigtopSyncClientImplSnoozeLastSnoozeTracker:(id)arg24 withJBTICommonProtoHelper:(id)arg25 withJBTISearchSearchClickLogger_Factory:(id)arg26 withJBTTranslationHelper:(id)arg27 withComGoogleAppsBigtopSyncClientImplSnoozeFlexibleSnoozeScheduler:(id)arg28;
- (void)dealloc;
- (id)saveTaskInExistingThreadWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1 withComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition:(id)arg2 withComGoogleAppsBigtopServicesGmailModifyLabelsCommand_Builder:(id)arg3 withJBTICommonTransaction:(id)arg4;
- (id)saveTaskInNewThreadWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1 withComGoogleAppsBigtopServicesGmailModifyLabelsCommand_Builder:(id)arg2 withJBTICommonTransaction:(id)arg3 withBoolean:(BOOL)arg4;
- (id)getTaskSourceFromLabels;
- (id)getTaskSource;
- (id)getSaveMetricTag;
- (id)addCommandsToTransactionWithComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg1 withComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition:(id)arg2 withComGoogleAppsBigtopServicesGmailModifyLabelsCommand_Builder:(id)arg3 withJBTICommonTransaction:(id)arg4 withJBTSpan:(id)arg5 withBoolean:(BOOL)arg6;
- (void)addTrashToTransactionWithJBTICommonTransaction:(id)arg1;
- (id)trashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canSetRecurrence;
- (id)getType;
- (id)initWithJBTId:(id)arg1 withComGoogleAppsBigtopServicesTasksBigTopTask:(id)arg2 withJBTTaskSuggestion:(id)arg3 withJBTCThreadData:(id)arg4 withJBTICommonTransactionFactory:(id)arg5 withJBTITasksTaskCreator:(id)arg6 withJBTITasksTaskUpdateHelper:(id)arg7 withLong:(long long)arg8 withJBTITasksTaskDueDateFactory:(id)arg9 withComGoogleCumulusCommonUtilClock:(id)arg10 withBoolean:(BOOL)arg11 withJBTICommonSapiSpan_Factory:(id)arg12 withJBTITasksTaskAssistService:(id)arg13 withJBTISmartMailTaskAssistanceSmartMailFactory:(id)arg14 withComGoogleAppsBigtopSyncClientImplLocationaliasesLocationAliasImpl_FactoryImpl:(id)arg15 withDaggerLazy:(id)arg16 withJBTICommonIdFactory:(id)arg17 withJBTICommonSnoozeTimeFactory:(id)arg18 withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeConfigFactoryImpl:(id)arg19 withComGoogleAppsBigtopSyncClientImplSnoozeSnoozeCommandResultFactory:(id)arg20 withJBTITasksTaskArchiveTrashCommandResultFactory:(id)arg21 withJBTITasksAssistanceCommitListenerFactory:(id)arg22 withBoolean:(BOOL)arg23 withComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg24 withJBTITasksTaskTutorialsHelper:(id)arg25 withComGoogleAppsBigtopSyncClientImplSnoozeLastSnoozeTracker:(id)arg26 withJBTICommonProtoHelper:(id)arg27 withJBTISearchSearchClickLogger_Factory:(id)arg28 withJBTTranslationHelper:(id)arg29 withComGoogleAppsBigtopSyncClientImplSnoozeFlexibleSnoozeScheduler:(id)arg30;

@end

