//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonUtilConcurrentFutureCallback.h"

@class NSString;

@interface JBTSapiMainThreadHelper_$2 : NSObject <ComGoogleCommonUtilConcurrentFutureCallback>
{
    id <JBTICommonSapiSpan> val$span_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_onSuccessWithId__params;
- (void)dealloc;
- (id)initWithJBTICommonSapiSpan:(id)arg1;
- (void)onFailureWithJavaLangThrowable:(id)arg1;
- (void)onSuccessWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

