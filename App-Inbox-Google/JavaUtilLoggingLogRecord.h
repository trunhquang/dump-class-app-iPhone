//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class IOSObjectArray, JavaLangThrowable, JavaUtilLoggingLevel, JavaUtilResourceBundle, NSString;

@interface JavaUtilLoggingLogRecord : NSObject <JavaIoSerializable>
{
    JavaUtilLoggingLevel *level_;
    long long sequenceNumber_;
    NSString *sourceClassName_;
    NSString *sourceMethodName_;
    NSString *message_;
    int threadID_;
    long long millis_;
    JavaLangThrowable *thrown_;
    NSString *loggerName_;
    NSString *resourceBundleName_;
    JavaUtilResourceBundle *resourceBundle_;
    IOSObjectArray *parameters_;
    BOOL sourceInitialized_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)setThrownWithJavaLangThrowable:(id)arg1;
- (id)getThrown;
- (void)setThreadIDWithInt:(int)arg1;
- (int)getThreadID;
- (void)setSourceMethodNameWithNSString:(id)arg1;
- (id)getSourceMethodName;
- (void)setSourceClassNameWithNSString:(id)arg1;
- (void)initSource;
- (id)getSourceClassName;
- (void)setSequenceNumberWithLong:(long long)arg1;
- (long long)getSequenceNumber;
- (void)setResourceBundleNameWithNSString:(id)arg1;
- (id)getResourceBundleName;
- (void)setResourceBundleWithJavaUtilResourceBundle:(id)arg1;
- (id)getResourceBundle;
- (void)setParametersWithNSObjectArray:(id)arg1;
- (id)getParameters;
- (void)setMillisWithLong:(long long)arg1;
- (long long)getMillis;
- (void)setMessageWithNSString:(id)arg1;
- (id)getMessage;
- (void)setLoggerNameWithNSString:(id)arg1;
- (id)getLoggerName;
- (void)setLevelWithJavaUtilLoggingLevel:(id)arg1;
- (id)getLevel;
- (id)initWithJavaUtilLoggingLevel:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

