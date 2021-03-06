//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class FBMStringWithRedactedDescription, NSString;

@interface MNWOutgoingMessage : NSObject <NSCopying, NSCoding>
{
    unsigned int _subtype;
    FBMStringWithRedactedDescription *_textMessage_redactedText;
    NSString *_stickerMessage_stickerFbId;
    double _locationMessage_latitude;
    double _locationMessage_longitude;
}

+ (id)textMessageWithRedactedText:(id)arg1;
+ (id)stickerMessageWithStickerFbId:(id)arg1;
+ (id)locationMessageWithLatitude:(double)arg1 longitude:(double)arg2;
+ (id)likeStickerMessage;
- (void).cxx_destruct;
- (void)matchTextMessage:(CDUnknownBlockType)arg1 stickerMessage:(CDUnknownBlockType)arg2 likeStickerMessage:(CDUnknownBlockType)arg3 locationMessage:(CDUnknownBlockType)arg4;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;

@end

