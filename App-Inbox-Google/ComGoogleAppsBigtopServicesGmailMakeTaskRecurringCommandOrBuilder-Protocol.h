//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleAppsBigtopServicesTasksBigTopTaskRecurrence, ComGoogleAppsBigtopServicesTasksUpdateMask, NSString;

@protocol ComGoogleAppsBigtopServicesGmailMakeTaskRecurringCommandOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopServicesTasksUpdateMask *)getUpdateMask;
- (BOOL)hasUpdateMask;
- (ComGoogleAppsBigtopServicesTasksBigTopTaskRecurrence *)getRecurrence;
- (BOOL)hasRecurrence;
- (ComGoogleAppsBigtopServicesTasksBigTopTask *)getTaskTemplate;
- (BOOL)hasTaskTemplate;
- (NSString *)getMessageId;
- (BOOL)hasMessageId;
@end

