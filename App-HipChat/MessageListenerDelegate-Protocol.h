//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Message, MessageListener, NSString;

@protocol MessageListenerDelegate <NSObject>
- (void)xmppMessageListener:(MessageListener *)arg1 receivedMessage:(Message *)arg2;

@optional
- (void)xmppMessageListener:(MessageListener *)arg1 receivedIQWithID:(NSString *)arg2;
@end

