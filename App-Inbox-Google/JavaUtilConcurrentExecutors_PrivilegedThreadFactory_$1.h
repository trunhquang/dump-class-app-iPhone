//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class JavaUtilConcurrentExecutors_PrivilegedThreadFactory, NSString;

@interface JavaUtilConcurrentExecutors_PrivilegedThreadFactory_$1 : NSObject <JavaLangRunnable>
{
    JavaUtilConcurrentExecutors_PrivilegedThreadFactory *this$0_;
    id <JavaLangRunnable> val$r_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJavaUtilConcurrentExecutors_PrivilegedThreadFactory:(id)arg1 withJavaLangRunnable:(id)arg2;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

