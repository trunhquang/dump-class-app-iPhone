//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTItem.h"

@class ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata, ComGoogleCommonBaseOptional, JBTISearchSearchClickLogger_Factory, JBTSection_TypeEnum, NSString;

@interface JBTIItemsItemImpl : NSObject <JBTItem>
{
    NSString *rank_;
    NSString *version__;
    JBTSection_TypeEnum *sectionType_;
    int indexInSection_;
    ComGoogleAppsBigtopSyncClientImplProducersQueryMetadata *queryMetadata_;
    ComGoogleCommonBaseOptional *searchMetadata_;
    JBTISearchSearchClickLogger_Factory *searchClickLoggerFactory_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_searchClickLoggerFactory_;
+ (id)__annotations_sectionType_;
+ (id)__annotations_version_;
+ (id)__annotations_permanentlyDeleteWithJBTSpan_withJBTCallback__params;
+ (id)__annotations_getSearchClickLoggerFactory;
+ (id)__annotations_setProducedForClusterConfigWithJBTClusterConfig__params;
+ (id)__annotations_markNotSpamWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_markAsSpamWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_removeFromTrashWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_trashWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_markAsSeenWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_moveToClusterWithJBTClusterConfig_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_removeFromClusterWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_removeFromCurrentClusterWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_removeFromCurrentClusterWithJBTCallback_withJBTSpan_;
+ (id)__annotations_pinWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_moveToInboxWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_removePinWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_markAsManuallyClosedWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_getSnoozeConfig;
+ (id)__annotations_snoozeWithJBTSnoozeConfig_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_getLocationOrLocationAliasDisplayName;
+ (id)__annotations_muteWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_archiveWithJBTCallback_withJBTSpan__params;
+ (id)__annotations_isApplicableCommandWithJBTCommand_TypeEnum_withJBTCommand_Config__params;
+ (id)__annotations_getAffectedItemCountWithJBTCommand_TypeEnum_withJBTCommand_Config__params;
+ (id)__annotations_getReceivedTimeSec;
+ (id)__annotations_getSectionType;
+ (id)__annotations_setSectionTypeWithJBTSection_TypeEnum__params;
+ (id)__annotations_getVersion;
+ (id)__annotations_initWithComGoogleAppsBigtopSyncClientImplProducersQueryMetadata_withJBTISearchSearchClickLogger_Factory__params;
- (void)dealloc;
- (void)permanentlyDeleteWithJBTSpan:(id)arg1 withJBTCallback:(id)arg2;
- (BOOL)canPermanentlyDelete;
- (void)logInteractionWithJBTInteractionTypeEnum:(id)arg1;
- (id)getSearchClickLoggerFactory;
- (id)getSearchMetadata;
- (void)setSearchMetadataWithJBTISearchSearchMetadata:(id)arg1;
- (void)addPermanentlyDeleteToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addSnoozeToTransactionWithJBTSnoozeConfig:(id)arg1 withJBTICommonTransaction:(id)arg2;
- (void)addRemoveFromTrashToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addRemoveFromClusterToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addMoveToClusterToTransactionWithJBTClusterConfig:(id)arg1 withJBTICommonTransaction:(id)arg2;
- (void)addRemovePinToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addMoveToInboxTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addMarkAsSpamToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addTrashToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addPinToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addMarkAsSeenToTransactionWithJBTICommonTransaction:(id)arg1;
- (void)addArchiveToTransactionWithJBTICommonTransaction:(id)arg1;
- (BOOL)hasVisibleState;
- (void)applySetIfAbsentWithJBTICommonTransaction:(id)arg1;
- (void)setProducedForClusterConfigWithJBTClusterConfig:(id)arg1;
- (id)getLogFeedbackString;
- (id)getDebugString;
- (id)getProducedForQuery;
- (void)setProducedForQueryWithComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg1;
- (int)getUnseenHash;
- (id)getQueryTerms;
- (void)markNotSpamWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMarkNotSpam;
- (BOOL)isMarkedAsSpam;
- (id)markAsSpamWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMarkAsSpam;
- (id)removeFromTrashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canRemoveFromTrash;
- (id)trashWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)isTrashed;
- (BOOL)canTrash;
- (id)markAsSeenWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)isCanMarkAsSeenApplicable;
- (BOOL)canMarkAsSeen;
- (BOOL)canMoveToTopicWithJBTTopicTypeEnum:(id)arg1;
- (id)moveToClusterWithJBTClusterConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)removeFromClusterWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)removeFromCurrentClusterWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)isInClusterWithJBTClusterConfig:(id)arg1;
- (BOOL)canMoveToClusterWithJBTClusterConfig:(id)arg1;
- (BOOL)canRemoveFromCurrentCluster;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(id)arg1;
- (id)getGenericSmartMail;
- (id)getSmartMailList;
- (id)pinWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (id)moveToInboxWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMoveToInbox;
- (void)removePinWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canRemovePin;
- (BOOL)canPin;
- (BOOL)isPinned;
- (BOOL)isReminded;
- (void)markAsManuallyClosedWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMarkAsManuallyClosed;
- (id)getSnoozeReturnType;
- (id)getSnoozeConfig;
- (id)snoozeWithJBTSnoozeConfig:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (id)getSnoozeMenuOptions;
- (id)getLocationOrLocationAliasDisplayName;
- (id)getLocationAlias;
- (BOOL)hasLocationAlias;
- (id)getLocation;
- (BOOL)hasLocation;
- (id)getSnoozedTime;
- (BOOL)hasSnoozedTime;
- (BOOL)canSnooze;
- (BOOL)isSnoozed;
- (void)muteWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canMute;
- (BOOL)isMuted;
- (id)archiveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (BOOL)canBeSweptInSection;
- (BOOL)canArchive;
- (BOOL)isArchived;
- (BOOL)isInInbox;
- (BOOL)isLocal;
- (BOOL)isApplicableCommandWithJBTCommand_TypeEnum:(id)arg1 withJBTCommand_Config:(id)arg2;
- (id)getAffectedItemCountWithJBTCommand_TypeEnum:(id)arg1 withJBTCommand_Config:(id)arg2;
- (id)getApproximateItemCount;
- (long long)getReceivedTimeMs;
- (long long)getReceivedTimeSec;
- (int)getIndexInSection;
- (void)setIndexInSectionWithInt:(int)arg1;
- (id)getSectionType;
- (void)setSectionTypeWithJBTSection_TypeEnum:(id)arg1;
- (void)resetRank;
- (BOOL)setRankWithNSString:(id)arg1;
- (void)setVersionWithNSString:(id)arg1;
- (id)getVersion;
- (id)getRank;
- (id)initWithComGoogleAppsBigtopSyncClientImplProducersQueryMetadata:(id)arg1 withJBTISearchSearchClickLogger_Factory:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

