//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNetDatagramSocketImpl.h"

@class DalvikSystemCloseGuard, JavaNetInetAddress;

@interface JavaNetPlainDatagramSocketImpl : JavaNetDatagramSocketImpl
{
    // Error parsing type: Ac, name: isNativeConnected_
    DalvikSystemCloseGuard *guard_;
    JavaNetInetAddress *connectedAddress_;
    int connectedPort_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)makeGroupReqWithJavaNetInetAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2;
- (void)updatePacketRecvAddressWithJavaNetDatagramPacket:(id)arg1;
- (void)disconnect;
- (void)connectWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2;
- (void)setTTLWithByte:(BOOL)arg1;
- (void)setTimeToLiveWithInt:(int)arg1;
- (void)setOptionWithInt:(int)arg1 withId:(id)arg2;
- (void)sendWithJavaNetDatagramPacket:(id)arg1;
- (int)peekDataWithJavaNetDatagramPacket:(id)arg1;
- (void)receiveWithJavaNetDatagramPacket:(id)arg1;
- (void)doRecvWithJavaNetDatagramPacket:(id)arg1 withInt:(int)arg2;
- (int)peekWithJavaNetInetAddress:(id)arg1;
- (void)leaveGroupWithJavaNetSocketAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2;
- (void)leaveWithJavaNetInetAddress:(id)arg1;
- (void)joinGroupWithJavaNetSocketAddress:(id)arg1 withJavaNetNetworkInterface:(id)arg2;
- (void)joinWithJavaNetInetAddress:(id)arg1;
- (BOOL)getTTL;
- (int)getTimeToLive;
- (id)getOptionWithInt:(int)arg1;
- (void)dealloc;
- (void)create;
- (void)close;
- (void)bindWithInt:(int)arg1 withJavaNetInetAddress:(id)arg2;
- (id)init;
- (id)initWithJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2;

@end

