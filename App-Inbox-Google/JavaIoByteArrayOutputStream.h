//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoOutputStream.h"

@class IOSByteArray;

@interface JavaIoByteArrayOutputStream : JavaIoOutputStream
{
    IOSByteArray *buf_;
    int count_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_toStringWithInt_;
- (void)dealloc;
- (void)writeToWithJavaIoOutputStream:(id)arg1;
- (void)writeWithInt:(int)arg1;
- (void)writeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)toStringWithNSString:(id)arg1;
- (id)toStringWithInt:(int)arg1;
- (id)description;
- (id)toByteArray;
- (int)size;
- (void)reset;
- (void)expandWithInt:(int)arg1;
- (void)close;
- (id)initWithInt:(int)arg1;
- (id)init;

@end

