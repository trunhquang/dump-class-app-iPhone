//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBOutgoingMessage, MNOutgoingMessageBatch, NSError;

@protocol MNMessageSendMQTTAdapting <NSObject>
- (BOOL)isMessageBatchSendingSupported;
- (BOOL)isMQTTConnected;
- (BOOL)isRetriableMQTTError:(NSError *)arg1;
- (BOOL)canSendMessageViaMQTT:(FBOutgoingMessage *)arg1;
- (void)sendMessageBatchViaMQTT:(MNOutgoingMessageBatch *)arg1 publishBlock:(void (^)(void))arg2 responseBlock:(void (^)(NSArray *))arg3;
- (void)sendMessageViaMQTT:(FBOutgoingMessage *)arg1 publishBlock:(void (^)(void))arg2 successBlock:(void (^)(NSString *))arg3 failureBlock:(void (^)(NSError *))arg4;
@end
