//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JCGCuCallback.h"

@class JCGCuClientImpl, NSString;

@interface JCGCuClientImpl_$1 : NSObject <JCGCuCallback>
{
    JCGCuClientImpl *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJCGCuClientImpl:(id)arg1;
- (void)onFailureWithJavaLangException:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

