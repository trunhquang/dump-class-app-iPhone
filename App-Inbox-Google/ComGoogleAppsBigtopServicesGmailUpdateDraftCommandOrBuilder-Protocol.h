//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder.h"

@class ComGoogleAppsBigtopServicesGmailBigTopGmailMessage, ComGoogleAppsBigtopServicesGmailMediaInsertionRequest, NSString;

@protocol ComGoogleAppsBigtopServicesGmailUpdateDraftCommandOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopServicesGmailMediaInsertionRequest *)getMediaInsertionRequestWithInt:(int)arg1;
- (id <JavaUtilList>)getMediaInsertionRequestList;
- (int)getMediaInsertionRequestCount;
- (BOOL)getUseSendDelay;
- (BOOL)hasUseSendDelay;
- (NSString *)getInResponseToId;
- (BOOL)hasInResponseToId;
- (ComGoogleAppsBigtopServicesGmailBigTopGmailMessage *)getMessage;
- (BOOL)hasMessage;
@end

