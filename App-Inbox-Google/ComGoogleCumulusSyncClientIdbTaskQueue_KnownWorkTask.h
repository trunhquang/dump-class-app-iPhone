//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbTaskQueue_AbstractTask.h"

@interface ComGoogleCumulusSyncClientIdbTaskQueue_KnownWorkTask : ComGoogleCumulusSyncClientIdbTaskQueue_AbstractTask
{
    id <JavaLangRunnable> work_;
}

- (void)dealloc;
- (void)runInternal;
- (id)initWithComGoogleCumulusSyncClientIdbTaskQueue:(id)arg1 withJavaLangRunnable:(id)arg2 withBoolean:(BOOL)arg3;

@end

