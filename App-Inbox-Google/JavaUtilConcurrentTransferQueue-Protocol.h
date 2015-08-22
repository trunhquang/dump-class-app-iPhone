//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilConcurrentBlockingQueue.h"
#import "NSObject.h"

@class JavaUtilConcurrentTimeUnitEnum;

@protocol JavaUtilConcurrentTransferQueue <JavaUtilConcurrentBlockingQueue, NSObject, JavaObject>
- (int)getWaitingConsumerCount;
- (BOOL)hasWaitingConsumer;
- (BOOL)tryTransferWithId:(id)arg1 withLong:(long long)arg2 withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)arg3;
- (void)transferWithId:(id)arg1;
- (BOOL)tryTransferWithId:(id)arg1;
@end

