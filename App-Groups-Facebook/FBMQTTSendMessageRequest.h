//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class FBMQTTCoordinates, FBMQTTLocationAttachment, NSMutableArray, NSMutableDictionary, NSString;

@interface FBMQTTSendMessageRequest : NSObject <TBase, NSCoding>
{
    NSString *__thrift_to;
    NSString *__thrift_body;
    long long __thrift_offlineThreadingId;
    FBMQTTCoordinates *__thrift_coordinates;
    NSMutableDictionary *__thrift_clientTags;
    NSString *__thrift_objectAttachment;
    NSString *__thrift_copyMessageId;
    NSString *__thrift_copyAttachmentId;
    NSMutableArray *__thrift_mediaAttachmentIds;
    NSString *__thrift_fbTraceMeta;
    int __thrift_imageType;
    long long __thrift_senderFbid;
    NSMutableDictionary *__thrift_broadcastRecipients;
    long long __thrift_attributionAppId;
    NSString *__thrift_iosBundleId;
    NSString *__thrift_androidKeyHash;
    FBMQTTLocationAttachment *__thrift_locationAttachment;
    BOOL __thrift_to_set;
    BOOL __thrift_body_set;
    BOOL __thrift_offlineThreadingId_set;
    BOOL __thrift_coordinates_set;
    BOOL __thrift_clientTags_set;
    BOOL __thrift_objectAttachment_set;
    BOOL __thrift_copyMessageId_set;
    BOOL __thrift_copyAttachmentId_set;
    BOOL __thrift_mediaAttachmentIds_set;
    BOOL __thrift_fbTraceMeta_set;
    BOOL __thrift_imageType_set;
    BOOL __thrift_senderFbid_set;
    BOOL __thrift_broadcastRecipients_set;
    BOOL __thrift_attributionAppId_set;
    BOOL __thrift_iosBundleId_set;
    BOOL __thrift_androidKeyHash_set;
    BOOL __thrift_locationAttachment_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetLocationAttachment;
- (BOOL)locationAttachmentIsSet;
@property(retain, nonatomic) FBMQTTLocationAttachment *locationAttachment;
- (void)unsetAndroidKeyHash;
- (BOOL)androidKeyHashIsSet;
@property(retain, nonatomic) NSString *androidKeyHash;
- (void)unsetIosBundleId;
- (BOOL)iosBundleIdIsSet;
@property(retain, nonatomic) NSString *iosBundleId;
- (void)unsetAttributionAppId;
- (BOOL)attributionAppIdIsSet;
@property(nonatomic) long long attributionAppId;
- (void)unsetBroadcastRecipients;
- (BOOL)broadcastRecipientsIsSet;
@property(retain, nonatomic) NSMutableDictionary *broadcastRecipients;
- (void)unsetSenderFbid;
- (BOOL)senderFbidIsSet;
@property(nonatomic) long long senderFbid;
- (void)unsetImageType;
- (BOOL)imageTypeIsSet;
@property(nonatomic) int imageType;
- (void)unsetFbTraceMeta;
- (BOOL)fbTraceMetaIsSet;
@property(retain, nonatomic) NSString *fbTraceMeta;
- (void)unsetMediaAttachmentIds;
- (BOOL)mediaAttachmentIdsIsSet;
@property(retain, nonatomic) NSMutableArray *mediaAttachmentIds;
- (void)unsetCopyAttachmentId;
- (BOOL)copyAttachmentIdIsSet;
@property(retain, nonatomic) NSString *copyAttachmentId;
- (void)unsetCopyMessageId;
- (BOOL)copyMessageIdIsSet;
@property(retain, nonatomic) NSString *copyMessageId;
- (void)unsetObjectAttachment;
- (BOOL)objectAttachmentIsSet;
@property(retain, nonatomic) NSString *objectAttachment;
- (void)unsetClientTags;
- (BOOL)clientTagsIsSet;
@property(retain, nonatomic) NSMutableDictionary *clientTags;
- (void)unsetCoordinates;
- (BOOL)coordinatesIsSet;
@property(retain, nonatomic) FBMQTTCoordinates *coordinates;
- (void)unsetOfflineThreadingId;
- (BOOL)offlineThreadingIdIsSet;
@property(nonatomic) long long offlineThreadingId;
- (void)unsetBody;
- (BOOL)bodyIsSet;
@property(retain, nonatomic) NSString *body;
- (void)unsetTo;
- (BOOL)toIsSet;
@property(retain, nonatomic) NSString *to;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTo:(id)arg1 body:(id)arg2 offlineThreadingId:(long long)arg3 coordinates:(id)arg4 clientTags:(id)arg5 objectAttachment:(id)arg6 copyMessageId:(id)arg7 copyAttachmentId:(id)arg8 mediaAttachmentIds:(id)arg9 fbTraceMeta:(id)arg10 imageType:(int)arg11 senderFbid:(long long)arg12 broadcastRecipients:(id)arg13 attributionAppId:(long long)arg14 iosBundleId:(id)arg15 androidKeyHash:(id)arg16 locationAttachment:(id)arg17;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

