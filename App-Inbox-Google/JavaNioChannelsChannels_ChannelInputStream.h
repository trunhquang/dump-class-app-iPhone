//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoInputStream.h"

@interface JavaNioChannelsChannels_ChannelInputStream : JavaIoInputStream
{
    id <JavaNioChannelsReadableByteChannel> channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)close;
- (int)available;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)initWithJavaNioChannelsReadableByteChannel:(id)arg1;

@end

