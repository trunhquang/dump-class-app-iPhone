//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusApiTypeObjectLoader.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, NSString;

@interface ComGoogleCumulusSyncClientObjectLoaderWorkQueueProxy : NSObject <ComGoogleCumulusApiTypeObjectLoader>
{
    id <ComGoogleCumulusApiTypeObjectLoader> objectLoader_;
    id <JCGCuWorkQueue> responseWorkQueue_;
    ComGoogleCumulusCommonMetric2SpanHelper *responseSpanHelper_;
    id <JCGCuWorkQueue> requestWorkQueue_;
    ComGoogleCumulusCommonMetric2SpanHelper *requestSpanHelper_;
    id <ComGoogleCumulusCommonUtilClock> clock_;
}

- (void)dealloc;
- (void)loadAllWithJavaUtilCollection:(id)arg1 withComGoogleCumulusApiTypeObjectLoader_LoadContext:(id)arg2 withComGoogleCumulusApiTypeObjectLoader_LoadCallback:(id)arg3;
- (id)initWithComGoogleCumulusApiTypeObjectLoader:(id)arg1 withJCGCuWorkQueue:(id)arg2 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg3 withJCGCuWorkQueue:(id)arg4 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg5 withComGoogleCumulusCommonUtilClock:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

