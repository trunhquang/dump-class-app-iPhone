//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsSpiAbstractInterruptibleChannel.h"

#import "JavaNioChannelsWritableByteChannel.h"

@class JavaIoOutputStream, NSString;

@interface JavaNioChannelsChannels_OutputStreamChannel : JavaNioChannelsSpiAbstractInterruptibleChannel <JavaNioChannelsWritableByteChannel>
{
    JavaIoOutputStream *outputStream_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)__javaClone;
- (void)implCloseChannel;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (id)initWithJavaIoOutputStream:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

