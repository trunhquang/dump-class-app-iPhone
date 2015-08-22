//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioChannelsFileChannel.h"

@class JavaIoFileDescriptor;

@interface JavaNioFileChannelImpl : JavaNioChannelsFileChannel
{
    id stream_;
    JavaIoFileDescriptor *fd_;
    int mode_;
    id <JavaUtilSortedSet> locks_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)calculateTotalRemainingWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withBoolean:(BOOL)arg4;
+ (long long)translateLockLengthWithLong:(long long)arg1;
- (void)dealloc;
- (void)removeLockWithJavaNioChannelsFileLock:(id)arg1;
- (void)addLockWithJavaNioChannelsFileLock:(id)arg1;
- (id)getFD;
- (long long)writeWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)writeImplWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (int)writeWithJavaNioByteBuffer:(id)arg1;
- (int)writeWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (id)truncateWithLong:(long long)arg1;
- (long long)transferToWithLong:(long long)arg1 withLong:(long long)arg2 withJavaNioChannelsWritableByteChannel:(id)arg3;
- (long long)transferFromWithJavaNioChannelsReadableByteChannel:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)size;
- (long long)readWithJavaNioByteBufferArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)transferIoVecWithJavaNioIoVec:(id)arg1;
- (int)readImplWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (int)readWithJavaNioByteBuffer:(id)arg1;
- (int)readWithJavaNioByteBuffer:(id)arg1 withLong:(long long)arg2;
- (id)positionWithLong:(long long)arg1;
- (long long)position;
- (id)mapWithJavaNioChannelsFileChannel_MapMode:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (void)forceWithBoolean:(BOOL)arg1;
- (void)release__WithJavaNioChannelsFileLock:(id)arg1;
- (id)tryLockWithLong:(long long)arg1 withLong:(long long)arg2 withBoolean:(BOOL)arg3;
- (id)lockWithLong:(long long)arg1 withLong:(long long)arg2 withBoolean:(BOOL)arg3;
- (id)basicLockWithLong:(long long)arg1 withLong:(long long)arg2 withBoolean:(BOOL)arg3 withBoolean:(BOOL)arg4;
- (void)implCloseChannel;
- (void)checkWritable;
- (void)checkReadable;
- (void)checkOpen;
- (id)initWithId:(id)arg1 withJavaIoFileDescriptor:(id)arg2 withInt:(int)arg3;

@end

