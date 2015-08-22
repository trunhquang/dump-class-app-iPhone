//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoFilterReader.h"

@class IOSCharArray;

@interface JavaIoPushbackReader : JavaIoFilterReader
{
    IOSCharArray *buf_;
    int pos_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (long long)skipWithLong:(long long)arg1;
- (void)unreadWithInt:(int)arg1;
- (void)unreadWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)unreadWithCharArray:(id)arg1;
- (void)reset;
- (BOOL)ready;
- (int)readWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)checkNotClosed;
- (int)read;
- (BOOL)markSupported;
- (void)markWithInt:(int)arg1;
- (void)close;
- (id)initWithJavaIoReader:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaIoReader:(id)arg1;

@end

