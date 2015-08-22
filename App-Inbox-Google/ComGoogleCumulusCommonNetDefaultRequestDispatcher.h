//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusCommonNetRequestDispatcher.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, NSString;

@interface ComGoogleCumulusCommonNetDefaultRequestDispatcher : NSObject <ComGoogleCumulusCommonNetRequestDispatcher>
{
    id <JCGCuChannel> channel_;
    id <JavaUtilSet> inflightRequests_;
    id <JavaUtilQueue> queue_;
    id <JCGCuWorkQueue> workQueue_;
    id <JavaUtilMap> requestGroups_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    int numMaxPendingRequests_;
    id <JavaUtilList> frontendRequestContextProducers_;
}

+ (void)initialize;
- (void)dealloc;
- (void)delete__WithComGoogleCumulusCommonNetDefaultRequestDispatcher_PendingRequest:(id)arg1;
- (id)toErrorInfoWithJavaLangException:(id)arg1;
- (void)sendWithComGoogleCumulusCommonNetDefaultRequestDispatcher_PendingRequest:(id)arg1;
- (id)addSpanToRequestWithComGoogleCumulusApiMetricsSpan:(id)arg1 withComGoogleCumulusCommonNetProto_Request:(id)arg2;
- (BOOL)shouldSendQueued;
- (void)sendIfQueued;
- (id)sendWithComGoogleCumulusCommonNetProto_Request:(id)arg1 withComGoogleCumulusCommonNetRequestDispatcher_RequestCallback:(id)arg2 withComGoogleCumulusCommonNetRequestDispatcher_RequestGroupIdentifier:(id)arg3 withNSString:(id)arg4;
- (id)getRequestContextWithComGoogleCumulusCommonNetRequestDispatcher_RequestGroupIdentifier:(id)arg1;
- (id)initWithJCGCuChannel:(id)arg1 withJavaUtilList:(id)arg2 withJCGCuWorkQueue:(id)arg3 withInt:(int)arg4 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

