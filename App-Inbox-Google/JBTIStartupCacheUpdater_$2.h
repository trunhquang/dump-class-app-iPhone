//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTICommonAsyncUtil_Invocation.h"

@class JBTIStartupCacheUpdater, NSString;

@interface JBTIStartupCacheUpdater_$2 : NSObject <JBTICommonAsyncUtil_Invocation>
{
    JBTIStartupCacheUpdater *this$0_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTIStartupCacheUpdater:(id)arg1;
- (void)executeWithId:(id)arg1 withJBTSpan:(id)arg2 withJBTICommonSapiCallback:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

