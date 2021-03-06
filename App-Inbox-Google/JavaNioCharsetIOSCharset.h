//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaNioCharsetCharset.h"

@interface JavaNioCharsetIOSCharset : JavaNioCharsetCharset
{
    long long nsEncoding_;
    float charBytes_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getEncodings;
+ (id)getDefaultCharset;
+ (id)charsetForNameWithNSString:(id)arg1;
+ (id)getAvailableCharsetNames;
- (id)newDecoder;
- (id)newEncoder;
- (BOOL)containsWithJavaNioCharsetCharset:(id)arg1;
- (long long)nsEncoding;
- (id)initWithLong:(long long)arg1 withNSString:(id)arg2 withNSStringArray:(id)arg3 withFloat:(float)arg4;

@end

