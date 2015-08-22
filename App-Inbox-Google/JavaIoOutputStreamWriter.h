//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoWriter.h"

@class JavaIoOutputStream, JavaNioByteBuffer, JavaNioCharsetCharsetEncoder;

@interface JavaIoOutputStreamWriter : JavaIoWriter
{
    JavaIoOutputStream *out_;
    JavaNioCharsetCharsetEncoder *encoder_;
    JavaNioByteBuffer *bytes_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)checkError;
- (void)writeWithNSString:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)writeWithInt:(int)arg1;
- (void)writeWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)getEncoding;
- (void)checkStatus;
- (void)drainEncoder;
- (void)convertWithJavaNioCharBuffer:(id)arg1;
- (void)flushBytesWithBoolean:(BOOL)arg1;
- (void)flush;
- (void)close;
- (id)initWithJavaIoOutputStream:(id)arg1 withJavaNioCharsetCharsetEncoder:(id)arg2;
- (id)initWithJavaIoOutputStream:(id)arg1 withJavaNioCharsetCharset:(id)arg2;
- (id)initWithJavaIoOutputStream:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoOutputStream:(id)arg1;

@end

