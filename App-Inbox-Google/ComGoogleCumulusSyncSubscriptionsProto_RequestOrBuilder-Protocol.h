//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleCumulusCommonIntentProto_Intent, ComGoogleCumulusQueryQueryProto_Subscription, ComGoogleCumulusSyncSubscriptionsProto_NotificationState, ComGoogleCumulusSyncSubscriptionsProto_Request_OperationEnum, NSString;

@protocol ComGoogleCumulusSyncSubscriptionsProto_RequestOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleCumulusCommonIntentProto_Intent *)getIntent;
- (BOOL)hasIntent;
- (BOOL)getTriggerSingleIteration;
- (BOOL)hasTriggerSingleIteration;
- (int)getTriggerSyncTimeoutMs;
- (BOOL)hasTriggerSyncTimeoutMs;
- (int)getTriggerSyncRequestId;
- (BOOL)hasTriggerSyncRequestId;
- (ComGoogleCumulusSyncSubscriptionsProto_NotificationState *)getNotificationState;
- (BOOL)hasNotificationState;
- (NSString *)getQueryIdWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getQueryIdList;
- (int)getQueryIdCount;
- (ComGoogleCumulusQueryQueryProto_Subscription *)getSubscription;
- (BOOL)hasSubscription;
- (ComGoogleCumulusSyncSubscriptionsProto_Request_OperationEnum *)getOp;
- (BOOL)hasOp;
@end

