//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioMemoryBlock.h"

@class IOSByteArray;

@interface JavaNioMemoryBlock_NonMovableHeapBlock : JavaNioMemoryBlock
{
    IOSByteArray *array_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)free;
- (id)array;
- (id)initWithByteArray:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;

@end

