//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsSpiAbstractSelectableChannel.h"

#import "JavaNioChannelsByteChannel.h"
#import "JavaNioChannelsGatheringByteChannel.h"
#import "JavaNioChannelsNetworkChannel.h"
#import "JavaNioChannelsScatteringByteChannel.h"

@class NSString;

@interface JavaNioChannelsDatagramChannel : JavaNioChannelsSpiAbstractSelectableChannel <JavaNioChannelsByteChannel, JavaNioChannelsScatteringByteChannel, JavaNioChannelsGatheringByteChannel, JavaNioChannelsNetworkChannel>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)open;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (long long)readWithJavaNioByteBufferArray:(id)arg1;
- (long long)readWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)readWithJavaNioByteBuffer:(id)arg1;
- (int)sendWithJavaNioByteBuffer:(id)arg1 withJavaNetSocketAddress:(id)arg2;
- (id)receiveWithJavaNioByteBuffer:(id)arg1;
- (id)disconnect;
- (id)connectWithJavaNetSocketAddress:(id)arg1;
- (BOOL)isConnected;
- (id)supportedOptions;
- (id)setOptionWithJavaNetSocketOption:(id)arg1 withId:(id)arg2;
- (id)getOptionWithJavaNetSocketOption:(id)arg1;
- (id)getLocalAddress;
- (id)bindWithJavaNetSocketAddress:(id)arg1;
- (id)socket;
- (int)validOps;
- (id)initWithJavaNioChannelsSpiSelectorProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

