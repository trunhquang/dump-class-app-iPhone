//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTItem.h"
#import "JavaObject.h"
#import "NSObject.h"

@class JBTClusterTypeEnum, JBTSmartMailComponent_ViewModeEnum;

@protocol JBTClusteredItems <JBTItem, NSObject, JavaObject>
- (id <JBTGenericSmartMailLayout>)getLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1;
- (BOOL)hasLayoutForViewModeWithJBTSmartMailComponent_ViewModeEnum:(JBTSmartMailComponent_ViewModeEnum *)arg1;
- (void)setUserHasConfirmedMutationWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (void)requireConfirmationForMutationsWithJBTCallback:(id <JBTCallback>)arg1 withJBTSpan:(id <JBTSpan>)arg2;
- (BOOL)hasUnreadMessages;
- (id <JavaUtilList>)getChildItems;
- (id <JBTClusterConfig>)getClusterConfig;
- (id <JBTId>)getClusterId;
- (JBTClusterTypeEnum *)getClusterType;
- (long long)getNextBumpTimeSec;
- (BOOL)hasNextBumpTimeSec;
- (int)getMaxItemCountForUI;
- (int)getItemCount;
- (int)getUnseenCount;
- (id <JBTItemCount>)getApproximateUnseenCount;
- (id <JBTSendersSummary>)getDebugSendersSummaryWithInt:(int)arg1;
- (id <JBTSendersSummary>)getSendersSummaryWithInt:(int)arg1;
- (id <JBTClusterItemList>)getClusterItemListForTopicsWithInt:(int)arg1;
- (id <JBTClusterItemList>)getClusterItemListWithInt:(int)arg1;
- (id <JBTId>)getId;
@end

