//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCommonIoLineBuffer, IOSCharArray, JavaIoReader, JavaNioCharBuffer;

@interface ComGoogleCommonIoLineReader : NSObject
{
    id <JavaLangReadable> readable_;
    JavaIoReader *reader_;
    IOSCharArray *buf_;
    JavaNioCharBuffer *cbuf_;
    id <JavaUtilQueue> lines_;
    ComGoogleCommonIoLineBuffer *lineBuf_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)readLine;
- (id)initWithJavaLangReadable:(id)arg1;

@end

