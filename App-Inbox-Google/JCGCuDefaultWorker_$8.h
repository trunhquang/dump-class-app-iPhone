//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class JCGCuDefaultWorker, NSString;

@interface JCGCuDefaultWorker_$8 : NSObject <JavaLangRunnable>
{
    JCGCuDefaultWorker *this$0_;
    id <JCGCuCallback> val$callback_;
}

- (void)dealloc;
- (id)initWithJCGCuDefaultWorker:(id)arg1 withJCGCuCallback:(id)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

