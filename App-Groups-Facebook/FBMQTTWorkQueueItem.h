//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBMQTTEncodedMessage, NSArray, NSNumber;

@interface FBMQTTWorkQueueItem : NSObject
{
    int _type;
    NSArray *_patterns;
    FBMQTTEncodedMessage *_message;
    NSNumber *_messageID;
}

@property(copy, nonatomic) NSNumber *messageID; // @synthesize messageID=_messageID;
@property(retain, nonatomic) FBMQTTEncodedMessage *message; // @synthesize message=_message;
@property(copy, nonatomic) NSArray *patterns; // @synthesize patterns=_patterns;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;

@end

