//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuCallback.h"

@class JCGCuWorkerFeatureHandler_StoreValidationRunner, NSString;

@interface JCGCuWorkerFeatureHandler_StoreValidationRunner_$1 : NSObject <JCGCuCallback>
{
    JCGCuWorkerFeatureHandler_StoreValidationRunner *this$0_;
}

- (void)dealloc;
- (id)initWithJCGCuWorkerFeatureHandler_StoreValidationRunner:(id)arg1;
- (void)onFailureWithJavaLangException:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

