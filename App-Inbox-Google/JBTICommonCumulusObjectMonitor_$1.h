//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiQueryObserver.h"

@class JBTICommonCumulusObjectMonitor, NSString;

@interface JBTICommonCumulusObjectMonitor_$1 : NSObject <ComGoogleCumulusApiQueryObserver>
{
    JBTICommonCumulusObjectMonitor *this$0_;
    BOOL startCompleted_;
    BOOL isWaitingForLocalResult_;
    BOOL isWaitingForRemoteResult_;
    BOOL isLocalOnlyQuery_;
    id <JBTICommonSapiSpan> val$startSpan_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)initWithJBTICommonCumulusObjectMonitor:(id)arg1 withJBTICommonSapiSpan:(id)arg2;
- (BOOL)isExpectingResult;
- (void)onUpdateWithComGoogleCumulusApiQueryUpdate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

