//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface JavaLangStackTraceElement : NSObject <JavaIoSerializable>
{
    NSString *declaringClass_;
    NSString *methodName_;
    NSString *fileName_;
    int lineNumber_;
    long long address_;
    NSString *hexAddress_;
    NSString *offset_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)initializeFromAddress;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithLong:(long long)arg1;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withInt:(int)arg4;
- (int)getLineNumber;
- (id)getFileName;
- (id)getMethodName;
- (id)getClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

