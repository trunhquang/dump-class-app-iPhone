//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, XMPPJID, XMPPStream, XMPPvCardTemp, XMPPvCardTempModule;

@protocol XMPPvCardTempModuleStorage <NSObject>
- (BOOL)shouldFetchvCardTempForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
- (void)setvCardTemp:(XMPPvCardTemp *)arg1 forJID:(XMPPJID *)arg2 xmppStream:(XMPPStream *)arg3;
- (XMPPvCardTemp *)vCardTempForJID:(XMPPJID *)arg1 xmppStream:(XMPPStream *)arg2;
- (BOOL)configureWithParent:(XMPPvCardTempModule *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
@end

