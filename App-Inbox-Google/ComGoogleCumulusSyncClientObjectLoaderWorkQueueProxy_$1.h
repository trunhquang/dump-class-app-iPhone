//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangRunnable.h"

@class ComGoogleCumulusApiTypeObjectLoader_LoadContext, ComGoogleCumulusSyncClientObjectLoaderWorkQueueProxy, NSString;

@interface ComGoogleCumulusSyncClientObjectLoaderWorkQueueProxy_$1 : NSObject <JavaLangRunnable>
{
    ComGoogleCumulusSyncClientObjectLoaderWorkQueueProxy *this$0_;
    double requestStartTime_;
    NSString *val$parentSpanId_;
    id <JavaUtilCollection> val$references_;
    ComGoogleCumulusApiTypeObjectLoader_LoadContext *val$loadContext_;
    id <ComGoogleCumulusApiTypeObjectLoader_LoadCallback> val$callback_;
}

- (void)dealloc;
- (id)initWithComGoogleCumulusSyncClientObjectLoaderWorkQueueProxy:(id)arg1 withNSString:(id)arg2 withJavaUtilCollection:(id)arg3 withComGoogleCumulusApiTypeObjectLoader_LoadContext:(id)arg4 withComGoogleCumulusApiTypeObjectLoader_LoadCallback:(id)arg5;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

