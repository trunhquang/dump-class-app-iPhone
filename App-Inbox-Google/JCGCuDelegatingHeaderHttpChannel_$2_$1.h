//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuCallback.h"

@class JCGCuDelegatingHeaderHttpChannel_$2, JCGCuHttpResponse, NSString;

@interface JCGCuDelegatingHeaderHttpChannel_$2_$1 : NSObject <JCGCuCallback>
{
    JCGCuDelegatingHeaderHttpChannel_$2 *this$0_;
    JCGCuHttpResponse *val$httpResponse_;
    int val$finalNewRetryCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJCGCuDelegatingHeaderHttpChannel_$2:(id)arg1 withJCGCuHttpResponse:(id)arg2 withInt:(int)arg3;
- (void)onFailureWithJavaLangException:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

