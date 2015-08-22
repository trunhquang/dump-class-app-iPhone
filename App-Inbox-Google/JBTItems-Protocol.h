//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class JBTTopicTypeEnum, NSString;

@protocol JBTItems <NSObject, JavaObject>
- (void)forwardSyncMailWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (void)maybeTriggerCreateReminderPromo;
- (id <JBTItemsBatchCommand>)createBatchCommand;
- (id <JBTSnoozeConfig_Factory>)getSnoozeConfigFactory;
- (id <JBTSearchSession_Builder>)newSearchSessionBuilder;
- (id <JBTItemList>)getTopicItemsWithJBTTopicTypeEnum:(JBTTopicTypeEnum *)arg1 withInt:(int)arg2;
- (id <JBTItemList>)searchTasksWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getAllTasksWithInt:(int)arg1;
- (id <JBTItemList>)getPendingTaskItemsWithInt:(int)arg1;
- (id <JBTItemList>)getTaskItemsWithInt:(int)arg1;
- (id <JBTSearchableItemList>)searchItemsWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (void)getInboxClusteredItemsWithCallbackWithJBTId:(id <JBTId>)arg1 withJBTCallback:(id <JBTCallback>)arg2;
- (id <JBTClusteredItems>)getInboxClusteredItemsWithJBTId:(id <JBTId>)arg1;
- (id <JBTItemList>)getClusterItemsWithJBTClusterConfig:(id <JBTClusterConfig>)arg1 withInt:(int)arg2;
- (id <JBTItemList>)getLocalOnlyUnreadInboxWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyUnseenInboxWithInt:(int)arg1;
- (id <JBTItemList>)getTrashWithInt:(int)arg1;
- (id <JBTItemList>)getSpamWithInt:(int)arg1;
- (id <JBTItemList>)getSendingNotSyncedWithInt:(int)arg1;
- (id <JBTItemList>)getSentWithInt:(int)arg1;
- (id <JBTItemList>)getDraftsWithInt:(int)arg1;
- (id <JBTItemList>)getDoneWithInt:(int)arg1;
- (id <JBTItemList>)getUpcomingNotificationsWithInt:(int)arg1;
- (id <JBTItemList>)getLocalOnlyUpcomingWithInt:(int)arg1;
- (id <JBTItemList>)getUpcomingWithInt:(int)arg1;
- (id <JBTItemList>)getPinnedWithInt:(int)arg1;
- (id <JBTItemList>)getThrottledInboxWithInt:(int)arg1;
- (id <JBTItemList>)getInboxWithInt:(int)arg1;
- (id <JBTItemListById>)prefetchRemoteDetailedItemsWithJavaUtilList:(id <JavaUtilList>)arg1;
- (id <JBTItemListById>)prefetchDetailedItemsWithJavaUtilList:(id <JavaUtilList>)arg1;
@end

