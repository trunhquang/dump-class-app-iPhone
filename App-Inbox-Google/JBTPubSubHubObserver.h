//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JBTICommonLifecycleTracker;

@interface JBTPubSubHubObserver : NSObject
{
    JBTICommonLifecycleTracker *lifecycleTracker_;
    id <ComGoogleAppsXplatPubsubSubscriber> subscriber_;
    id <JavaUtilConcurrentExecutor> executor_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
- (void)onMessageWithId:(id)arg1;
- (void)processMessages;
- (void)stop;
- (void)start;
- (id)initWithComGoogleAppsXplatPubsubPubSubHub:(id)arg1 withComGoogleAppsXplatPubsubTopic:(id)arg2 withJavaUtilConcurrentExecutor:(id)arg3;

@end

