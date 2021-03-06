//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface FBMMessageCursorDescriptor : FBValueObject <NSCopying>
{
    NSString *_messageId;
    unsigned long long _messageTimestamp;
}

@property(readonly, nonatomic) unsigned long long messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)initWithMessageId:(id)arg1 messageTimestamp:(unsigned long long)arg2;

@end

