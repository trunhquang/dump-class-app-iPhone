//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioByteBuffer.h"

@class JavaNioChannelsFileChannel_MapMode, JavaNioMemoryBlock;

@interface JavaNioMappedByteBuffer : JavaNioByteBuffer
{
    JavaNioChannelsFileChannel_MapMode *mapMode_;
    JavaNioMemoryBlock *block_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)checkIsMapped;
- (id)force;
- (id)load__;
- (BOOL)isLoaded;
- (id)initWithJavaNioMemoryBlock:(id)arg1 withInt:(int)arg2 withJavaNioChannelsFileChannel_MapMode:(id)arg3 withLong:(long long)arg4;

@end

