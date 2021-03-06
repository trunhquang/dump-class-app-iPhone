//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface LibcoreIoIoBridge : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)getSocketLocalPortWithJavaIoFileDescriptor:(id)arg1;
+ (id)getSocketLocalAddressWithJavaIoFileDescriptor:(id)arg1;
+ (id)socketWithBoolean:(BOOL)arg1;
+ (int)maybeThrowAfterRecvfromWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2 withLibcoreIoErrnoException:(id)arg3;
+ (int)postRecvfromWithBoolean:(BOOL)arg1 withJavaNetDatagramPacket:(id)arg2 withBoolean:(BOOL)arg3 withJavaNetInetSocketAddress:(id)arg4 withInt:(int)arg5;
+ (int)recvfromWithBoolean:(BOOL)arg1 withJavaIoFileDescriptor:(id)arg2 withJavaNioByteBuffer:(id)arg3 withInt:(int)arg4 withJavaNetDatagramPacket:(id)arg5 withBoolean:(BOOL)arg6;
+ (int)recvfromWithBoolean:(BOOL)arg1 withJavaIoFileDescriptor:(id)arg2 withByteArray:(id)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withJavaNetDatagramPacket:(id)arg7 withBoolean:(BOOL)arg8;
+ (int)maybeThrowAfterSendtoWithBoolean:(BOOL)arg1 withLibcoreIoErrnoException:(id)arg2;
+ (int)sendtoWithJavaIoFileDescriptor:(id)arg1 withJavaNioByteBuffer:(id)arg2 withInt:(int)arg3 withJavaNetInetAddress:(id)arg4 withInt:(int)arg5;
+ (int)sendtoWithJavaIoFileDescriptor:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withJavaNetInetAddress:(id)arg6 withInt:(int)arg7;
+ (void)writeWithJavaIoFileDescriptor:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (int)readWithJavaIoFileDescriptor:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (BOOL)isDirectoryWithNSString:(id)arg1;
+ (id)openWithNSString:(id)arg1 withInt:(int)arg2;
+ (int)getGroupSourceReqOpWithInt:(int)arg1;
+ (void)setSocketOptionErrnoWithJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2 withId:(id)arg3;
+ (void)setSocketOptionWithJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2 withId:(id)arg3;
+ (int)booleanToIntWithBoolean:(BOOL)arg1;
+ (BOOL)booleanFromIntWithInt:(int)arg1;
+ (id)getSocketOptionErrnoWithJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2;
+ (id)getSocketOptionWithJavaIoFileDescriptor:(id)arg1 withInt:(int)arg2;
+ (BOOL)isConnectedWithJavaIoFileDescriptor:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
+ (void)closeSocketWithJavaIoFileDescriptor:(id)arg1;
+ (id)connectDetailWithJavaNetInetAddress:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withLibcoreIoErrnoException:(id)arg4;
+ (void)connectErrnoWithJavaIoFileDescriptor:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (void)connectWithJavaIoFileDescriptor:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (void)connectWithJavaIoFileDescriptor:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3;
+ (void)bindWithJavaIoFileDescriptor:(id)arg1 withJavaNetInetAddress:(id)arg2 withInt:(int)arg3;
+ (int)availableWithJavaIoFileDescriptor:(id)arg1;
- (id)init;

@end

