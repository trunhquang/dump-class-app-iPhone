//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonMetric2SpanHelper, ComGoogleCumulusQueryClientRemoteObjectReconciler;

@interface ComGoogleCumulusQueryClientRemoteQueryResultReconciler : NSObject
{
    id <ComGoogleCumulusSyncClientObjectManager> objectManager_;
    ComGoogleCumulusCommonMetric2SpanHelper *spanHelper_;
    ComGoogleCumulusQueryClientRemoteObjectReconciler *remoteObjectReconciler_;
}

+ (void)initialize;
- (void)dealloc;
- (void)computeResultWithJavaUtilMap:(id)arg1 withComGoogleCumulusQueryQueryProto_Result:(id)arg2 withComGoogleCumulusQueryQueryProto_Query:(id)arg3 withJCGCuCallback:(id)arg4;
- (id)initWithComGoogleCumulusSyncClientObjectManager:(id)arg1 withComGoogleCumulusQueryClientRemoteObjectReconciler:(id)arg2 withComGoogleCumulusCommonMetric2SpanHelper:(id)arg3;

@end

