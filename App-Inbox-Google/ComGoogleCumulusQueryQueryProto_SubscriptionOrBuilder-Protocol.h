//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder.h"

@class ComGoogleCumulusQueryQueryProto_Query, ComGoogleCumulusQueryQueryProto_Subscription_NotificationStateEnum, NSString;

@protocol ComGoogleCumulusQueryQueryProto_SubscriptionOrBuilder <ComGoogleProtobufGeneratedMessage_ExtendableMessageOrBuilder>
- (BOOL)getSendQueryForNotification;
- (BOOL)hasSendQueryForNotification;
- (ComGoogleCumulusQueryQueryProto_Subscription_NotificationStateEnum *)getNotificationState;
- (BOOL)hasNotificationState;
- (int)getMaxObjectCountPerRequest;
- (BOOL)hasMaxObjectCountPerRequest;
- (int)getWatermarkVersion;
- (BOOL)hasWatermarkVersion;
- (NSString *)getLowWatermark;
- (BOOL)hasLowWatermark;
- (NSString *)getHighWatermark;
- (BOOL)hasHighWatermark;
- (BOOL)getSendQueryForRange;
- (BOOL)hasSendQueryForRange;
- (ComGoogleCumulusQueryQueryProto_Query *)getQuery;
- (BOOL)hasQuery;
@end

