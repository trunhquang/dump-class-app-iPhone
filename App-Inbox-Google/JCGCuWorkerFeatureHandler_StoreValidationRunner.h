//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JCGCuWorkerFeatureHandler_StoreValidationRunner : NSObject
{
    id <JavaUtilIterator> validatorIter_;
    id <JCGCuCallback> outerCallback_;
    id <JCGCuCallback> innerCallback_;
}

- (void)dealloc;
- (void)runNextValidator;
- (id)initWithJavaUtilList:(id)arg1 withJCGCuCallback:(id)arg2;

@end

