//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HipChatEvent.h"

@class Message;

@interface MessageReceivedEvent : HipChatEvent
{
    Message *_message;
}

@property(retain, nonatomic) Message *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)initWithMessage:(id)arg1;

@end

