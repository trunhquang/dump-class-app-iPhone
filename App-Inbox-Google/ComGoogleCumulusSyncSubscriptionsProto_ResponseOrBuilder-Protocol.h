//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusSyncSubscriptionsProto_SubscriptionChange, ComGoogleCumulusSyncSubscriptionsProto_SyncStatus, ComGoogleCumulusSyncSubscriptionsProto_TriggeredSyncResponse;

@protocol ComGoogleCumulusSyncSubscriptionsProto_ResponseOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusSyncSubscriptionsProto_SyncStatus *)getSyncStatus;
- (BOOL)hasSyncStatus;
- (ComGoogleCumulusSyncSubscriptionsProto_TriggeredSyncResponse *)getTriggeredSyncResponseWithInt:(int)arg1;
- (id <JavaUtilList>)getTriggeredSyncResponseList;
- (int)getTriggeredSyncResponseCount;
- (ComGoogleCumulusSyncSubscriptionsProto_SubscriptionChange *)getSubcriptionChangeWithInt:(int)arg1;
- (id <JavaUtilList>)getSubcriptionChangeList;
- (int)getSubcriptionChangeCount;
@end

