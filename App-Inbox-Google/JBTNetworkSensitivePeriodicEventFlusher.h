//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JBTPubSubHubObserver.h"

#import "ComGoogleAppsBigtopSyncClientLoggingPeriodicEventFlusher.h"

@class NSString;

@interface JBTNetworkSensitivePeriodicEventFlusher : JBTPubSubHubObserver <ComGoogleAppsBigtopSyncClientLoggingPeriodicEventFlusher>
{
    id <ComGoogleAppsXplatLoggingEventsFlushable> flushable_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsXplatPubsubPubSubHub_withComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent_;
+ (void)initialize;
- (void)dealloc;
- (void)onMessageWithId:(id)arg1;
- (id)initWithComGoogleAppsXplatPubsubPubSubHub:(id)arg1 withComGoogleAppsBigtopSyncClientLoggingEventLoggingComponent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

