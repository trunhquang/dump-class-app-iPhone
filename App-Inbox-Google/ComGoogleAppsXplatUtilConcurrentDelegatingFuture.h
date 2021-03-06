//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilConcurrentFuture.h"

@class NSString;

@interface ComGoogleAppsXplatUtilConcurrentDelegatingFuture : NSObject <JavaUtilConcurrentFuture>
{
    id <JavaUtilConcurrentFuture> delegate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getWithLong:(long long)arg1 withJavaUtilConcurrentTimeUnitEnum:(id)arg2;
- (id)get;
- (BOOL)isDone;
- (BOOL)isCancelled;
- (BOOL)cancelWithBoolean:(BOOL)arg1;
- (id)getDelegate;
- (id)initWithJavaUtilConcurrentFuture:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

