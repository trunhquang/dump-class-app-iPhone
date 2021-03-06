//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@protocol JBTWorkQueueController <NSObject, JavaObject>
- (BOOL)enqueueWithDelayWithInt:(int)arg1 withJavaLangRunnable:(id <JavaLangRunnable>)arg2;
- (BOOL)enqueueWithJavaLangRunnable:(id <JavaLangRunnable>)arg1;
- (BOOL)isPaused;
- (void)shutdown;
- (void)resume;
- (void)pause;
@end

