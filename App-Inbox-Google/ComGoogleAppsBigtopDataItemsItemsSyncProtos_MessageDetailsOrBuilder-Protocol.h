//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailMessageBody, ComGoogleAppsBigtopServicesGmailBigTopSmimeInfo, ComGoogleAppsBigtopServicesGmailDraftNotification, ComGoogleAppsBigtopServicesGmailSmartreplySuggestions, ComGoogleAppsBigtopServicesGmailSpamPhishyInfo, ComGoogleCaribouComponentsMimeAttachment, JBTCContactRef, NSString;

@protocol ComGoogleAppsBigtopDataItemsItemsSyncProtos_MessageDetailsOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopServicesGmailSmartreplySuggestions *)getSmartreplySuggestions;
- (BOOL)hasSmartreplySuggestions;
- (ComGoogleCaribouComponentsMimeAttachment *)getAttachmentWithInt:(int)arg1;
- (id <JavaUtilList>)getAttachmentList;
- (int)getAttachmentCount;
- (ComGoogleAppsBigtopServicesGmailDraftNotification *)getDraftNotification;
- (BOOL)hasDraftNotification;
- (ComGoogleAppsBigtopServicesGmailBigTopSmimeInfo *)getSmimeInfo;
- (BOOL)hasSmimeInfo;
- (JBTCContactRef *)getReplyFromAddress;
- (BOOL)hasReplyFromAddress;
- (ComGoogleAppsBigtopServicesGmailSpamPhishyInfo *)getSpamPhishyInfo;
- (BOOL)hasSpamPhishyInfo;
- (NSString *)getRfc822InReplyTo;
- (BOOL)hasRfc822InReplyTo;
- (NSString *)getRfc822ReferencesWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getRfc822ReferencesList;
- (int)getRfc822ReferencesCount;
- (NSString *)getRfc822Id;
- (BOOL)hasRfc822Id;
- (NSString *)getSnippet;
- (BOOL)hasSnippet;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailMessageBody *)getBody;
- (BOOL)hasBody;
- (NSString *)getSubject;
- (BOOL)hasSubject;
- (JBTCContactRef *)getReplyToWithInt:(int)arg1;
- (id <JavaUtilList>)getReplyToList;
- (int)getReplyToCount;
- (JBTCContactRef *)getBccWithInt:(int)arg1;
- (id <JavaUtilList>)getBccList;
- (int)getBccCount;
- (JBTCContactRef *)getCcWithInt:(int)arg1;
- (id <JavaUtilList>)getCcList;
- (int)getCcCount;
- (JBTCContactRef *)getToWithInt:(int)arg1;
- (id <JavaUtilList>)getToList;
- (int)getToCount;
@end

