//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class FBMMessageAttachment, FBMMessageAttribution, FBMMessageLocation, FBMStringWithRedactedDescription, FBMThreadKey, FBMessageOutgoingAttribution, NSArray, NSDictionary, NSString;

@interface FBMMessageAppModel : FBValueObject <NSCopying>
{
    BOOL _isIncomplete;
    BOOL _isSendNonRetriable;
    BOOL _sendHasFailedBefore;
    BOOL _isPlaceholderMessage;
    NSString *_messageId;
    NSString *_offlineThreadingId;
    FBMThreadKey *_threadKey;
    NSString *_senderId;
    FBMStringWithRedactedDescription *_text;
    NSString *_adminSnippet;
    FBMMessageLocation *_location;
    NSArray *_DEPRECATED_attachments;
    NSDictionary *_DEPRECATED_shareMap;
    FBMMessageAttachment *_attachment;
    NSArray *_tags;
    NSDictionary *_logMessage;
    unsigned int _type;
    unsigned int _source;
    NSArray *_outgoingAttachments;
    unsigned int _sendState;
    NSString *_sendNonRetriableErrorText;
    FBMMessageAttribution *_attribution;
    FBMessageOutgoingAttribution *_outgoingAttribution;
    unsigned long long _timestamp;
    unsigned long long _sendTimestamp;
    long long _actionId;
}

@property(readonly, nonatomic) BOOL isPlaceholderMessage; // @synthesize isPlaceholderMessage=_isPlaceholderMessage;
@property(readonly, copy, nonatomic) FBMessageOutgoingAttribution *outgoingAttribution; // @synthesize outgoingAttribution=_outgoingAttribution;
@property(readonly, copy, nonatomic) FBMMessageAttribution *attribution; // @synthesize attribution=_attribution;
@property(readonly, copy, nonatomic) NSString *sendNonRetriableErrorText; // @synthesize sendNonRetriableErrorText=_sendNonRetriableErrorText;
@property(readonly, nonatomic) BOOL sendHasFailedBefore; // @synthesize sendHasFailedBefore=_sendHasFailedBefore;
@property(readonly, nonatomic) BOOL isSendNonRetriable; // @synthesize isSendNonRetriable=_isSendNonRetriable;
@property(readonly, nonatomic) BOOL isIncomplete; // @synthesize isIncomplete=_isIncomplete;
@property(readonly, nonatomic) unsigned int sendState; // @synthesize sendState=_sendState;
@property(readonly, copy, nonatomic) NSArray *outgoingAttachments; // @synthesize outgoingAttachments=_outgoingAttachments;
@property(readonly, nonatomic) unsigned int source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned int type; // @synthesize type=_type;
@property(readonly, nonatomic) long long actionId; // @synthesize actionId=_actionId;
@property(readonly, nonatomic) unsigned long long sendTimestamp; // @synthesize sendTimestamp=_sendTimestamp;
@property(readonly, nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, copy, nonatomic) NSDictionary *logMessage; // @synthesize logMessage=_logMessage;
@property(readonly, copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, copy, nonatomic) FBMMessageAttachment *attachment; // @synthesize attachment=_attachment;
@property(readonly, copy, nonatomic) NSDictionary *DEPRECATED_shareMap; // @synthesize DEPRECATED_shareMap=_DEPRECATED_shareMap;
@property(readonly, copy, nonatomic) NSArray *DEPRECATED_attachments; // @synthesize DEPRECATED_attachments=_DEPRECATED_attachments;
@property(readonly, copy, nonatomic) FBMMessageLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *adminSnippet; // @synthesize adminSnippet=_adminSnippet;
@property(readonly, copy, nonatomic) FBMStringWithRedactedDescription *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSString *senderId; // @synthesize senderId=_senderId;
@property(readonly, copy, nonatomic) FBMThreadKey *threadKey; // @synthesize threadKey=_threadKey;
@property(readonly, copy, nonatomic) NSString *offlineThreadingId; // @synthesize offlineThreadingId=_offlineThreadingId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)initWithMessageId:(id)arg1 offlineThreadingId:(id)arg2 threadKey:(id)arg3 senderId:(id)arg4 text:(id)arg5 adminSnippet:(id)arg6 location:(id)arg7 DEPRECATED_attachments:(id)arg8 DEPRECATED_shareMap:(id)arg9 attachment:(id)arg10 tags:(id)arg11 logMessage:(id)arg12 timestamp:(unsigned long long)arg13 sendTimestamp:(unsigned long long)arg14 actionId:(long long)arg15 type:(unsigned int)arg16 source:(unsigned int)arg17 outgoingAttachments:(id)arg18 sendState:(unsigned int)arg19 isIncomplete:(BOOL)arg20 isSendNonRetriable:(BOOL)arg21 sendHasFailedBefore:(BOOL)arg22 sendNonRetriableErrorText:(id)arg23 attribution:(id)arg24 outgoingAttribution:(id)arg25 isPlaceholderMessage:(BOOL)arg26;
- (id)mn_conciseDescription;

@end

