//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoFilterOutputStream.h"

@class JavaNioChannelsSocketChannel;

@interface JavaNioSocketChannelImpl_BlockingCheckOutputStream : JavaIoFilterOutputStream
{
    JavaNioChannelsSocketChannel *channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkBlocking;
- (void)close;
- (void)writeWithByteArray:(id)arg1;
- (void)writeWithInt:(int)arg1;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithJavaIoOutputStream:(id)arg1 withJavaNioChannelsSocketChannel:(id)arg2;

@end

