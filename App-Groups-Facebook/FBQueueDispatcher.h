//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProxy.h"

@class Protocol;

@interface FBQueueDispatcher : NSProxy
{
    id _listener;
    id <FBPerforming> _performer;
    Protocol *_protocol;
    id _weakListener;
}

- (void).cxx_destruct;
- (id)description;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (BOOL)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithListener:(id)arg1 protocol:(id)arg2 performer:(id)arg3 listenerMemorySemantic:(unsigned int)arg4;
- (id)initWithListener:(id)arg1 protocol:(id)arg2 queueToNotifyListenerOn:(id)arg3 listenerMemorySemantic:(unsigned int)arg4;

@end

