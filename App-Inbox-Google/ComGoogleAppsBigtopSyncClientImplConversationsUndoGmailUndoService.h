//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientImplRpcServerInterface.h"

@class ComGoogleAppsBigtopServicesGmailGmailUndoInfoRecorder, NSString;

@interface ComGoogleAppsBigtopSyncClientImplConversationsUndoGmailUndoService : NSObject <ComGoogleAppsBigtopSyncClientImplRpcServerInterface>
{
    ComGoogleAppsBigtopServicesGmailGmailUndoInfoRecorder *gmailUndoInfoRecorder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)processWithComGoogleAppsBigtopSyncClientImplRpcRpcServerContext:(id)arg1 withComGoogleProtobufMessageLite:(id)arg2;
- (id)initWithComGoogleAppsBigtopServicesGmailGmailUndoInfoRecorder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

