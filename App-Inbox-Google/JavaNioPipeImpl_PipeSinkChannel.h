//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsPipe_SinkChannel.h"

#import "JavaNioFileDescriptorChannel.h"

@class JavaIoFileDescriptor, JavaNioChannelsSocketChannel, NSString;

@interface JavaNioPipeImpl_PipeSinkChannel : JavaNioChannelsPipe_SinkChannel <JavaNioFileDescriptorChannel>
{
    JavaIoFileDescriptor *fd_;
    JavaNioChannelsSocketChannel *channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getFD;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (void)implConfigureBlockingWithBoolean:(BOOL)arg1;
- (void)implCloseSelectableChannel;
- (id)initWithJavaNioPipeImpl:(id)arg1 withJavaNioChannelsSpiSelectorProvider:(id)arg2 withJavaIoFileDescriptor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

