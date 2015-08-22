//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class JavaUtilConcurrentSemaphore_Sync, NSString;

@interface JavaUtilConcurrentSemaphore : NSObject <JavaIoSerializable>
{
    JavaUtilConcurrentSemaphore_Sync *sync_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)getQueuedThreads;
- (int)getQueueLength;
- (BOOL)hasQueuedThreads;
- (BOOL)isFair;
- (void)reducePermitsWithInt:(int)arg1;
- (int)drainPermits;
- (int)availablePermits;
- (void)release__WithInt:(int)arg1;
- (BOOL)tryAcquireWithInt:(int)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(id)arg3;
- (BOOL)tryAcquireWithInt:(int)arg1;
- (void)acquireUninterruptiblyWithInt:(int)arg1;
- (void)acquireWithInt:(int)arg1;
- (void)release__;
- (BOOL)tryAcquireWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (BOOL)tryAcquire;
- (void)acquireUninterruptibly;
- (void)acquire;
- (id)initWithInt:(int)arg1 withBoolean:(BOOL)arg2;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

