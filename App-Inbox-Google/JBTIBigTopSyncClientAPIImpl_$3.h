//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class JBTIBigTopSyncClientAPIImpl, JBTICommonSapiCallbackUtil_OneTimeSapiCallback, NSString;

@interface JBTIBigTopSyncClientAPIImpl_$3 : NSObject <JavaLangRunnable>
{
    JBTIBigTopSyncClientAPIImpl *this$0_;
    JBTICommonSapiCallbackUtil_OneTimeSapiCallback *val$oneTimeCallback_;
    id <JBTICommonSapiSpan> val$startSpan_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIBigTopSyncClientAPIImpl:(id)arg1 withJBTICommonSapiCallbackUtil_OneTimeSapiCallback:(id)arg2 withJBTICommonSapiSpan:(id)arg3;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

