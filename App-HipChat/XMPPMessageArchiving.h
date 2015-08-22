//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPModule.h"

@class DDXMLElement;

@interface XMPPMessageArchiving : XMPPModule
{
    id <XMPPMessageArchivingStorage> xmppMessageArchivingStorage;
    BOOL clientSideMessageArchivingOnly;
    DDXMLElement *preferences;
}

- (void).cxx_destruct;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)xmppStream:(id)arg1 didSendMessage:(id)arg2;
- (BOOL)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (BOOL)shouldArchiveMessage:(id)arg1 outgoing:(BOOL)arg2 xmppStream:(id)arg3;
@property(copy) DDXMLElement *preferences;
@property BOOL clientSideMessageArchivingOnly;
- (void)deactivate;
- (BOOL)activate:(id)arg1;
- (id)initWithMessageArchivingStorage:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithMessageArchivingStorage:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

