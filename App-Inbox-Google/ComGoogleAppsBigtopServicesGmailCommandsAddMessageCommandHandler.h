//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsBigtopServicesCommonCommandsClientCommandHandler.h"

@class JBTCGmailThreadMessagesSorter;

@interface ComGoogleAppsBigtopServicesGmailCommandsAddMessageCommandHandler : ComGoogleAppsBigtopServicesCommonCommandsClientCommandHandler
{
    JBTCGmailThreadMessagesSorter *threadSorter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_init;
+ (id)__annotations;
+ (void)initialize;
- (void)dealloc;
- (BOOL)maybeUpdateDraftWithComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg1 withComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg2 withComGoogleAppsBigtopServicesGmailBigTopGmailThread_Builder:(id)arg3;
- (id)stripExistingReminderMessagesWithComGoogleAppsBigtopServicesGmailBigTopGmailThread:(id)arg1;
- (id)maybeUpdateSmartMailWithComGoogleAppsBigtopServicesGmailBigTopGmailMessage:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)applyWithComGoogleProtobufMessageLite:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2;
- (id)init;

@end

