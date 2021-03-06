//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopDataNetworkRetryConfig.h"

@class IOSIntArray, JavaUtilConcurrentTimeUnitEnum, NSString;

@interface ComGoogleAppsBigtopDataNetworkSequenceRetryConfig : NSObject <ComGoogleAppsBigtopDataNetworkRetryConfig>
{
    IOSIntArray *timeouts_;
    JavaUtilConcurrentTimeUnitEnum *timeoutUnit_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createExponentialSequenceWithInt:(int)arg1 withInt:(int)arg2;
+ (id)createConstantSequenceWithInt:(int)arg1 withInt:(int)arg2;
- (void)dealloc;
- (id)getTimeoutUnit;
- (int)getTimeoutDurationWithInt:(int)arg1;
- (int)getMaxAttempts;
- (id)initWithIntArray:(id)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

