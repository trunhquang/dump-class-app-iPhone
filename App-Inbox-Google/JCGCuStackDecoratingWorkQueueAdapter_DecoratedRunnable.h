//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JCGCuDebugStackCapturer.h"

#import "JavaLangRunnable.h"

@class NSString;

@interface JCGCuStackDecoratingWorkQueueAdapter_DecoratedRunnable : JCGCuDebugStackCapturer <JavaLangRunnable>
{
    id <JavaLangRunnable> innerRunnable_;
}

- (void)dealloc;
- (id)createDebugObjectWithJavaLangThrowable:(id)arg1;
- (void)run;
- (id)initWithJavaLangRunnable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

