//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XPLTLoggingApi.h"

@class NSString, XPLTXLogLevelEnum, XPLTXLoggerImpl;

@interface XPLTWithLevelLoggingApi : NSObject <XPLTLoggingApi>
{
    XPLTXLoggerImpl *logger_;
    XPLTXLogLevelEnum *level_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)isEnabled;
- (void)logWithNSString:(id)arg1 withNSObjectArray:(id)arg2;
- (void)logWithNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4 withId:(id)arg5;
- (void)logWithNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3 withId:(id)arg4;
- (void)logWithNSString:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (void)logWithNSString:(id)arg1 withId:(id)arg2;
- (void)logWithNSString:(id)arg1;
- (id)withCauseWithJavaLangThrowable:(id)arg1;
- (id)getLevel;
- (id)getLoggerState;
- (id)getLogger;
- (id)getBackend;
- (id)initWithXPLTXLoggerImpl:(id)arg1 withXPLTXLogLevelEnum:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

