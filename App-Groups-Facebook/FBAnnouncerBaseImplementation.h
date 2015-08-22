//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FBAnnouncerBaseImplementation : NSObject
{
    NSMutableArray *_subscriptions;
    BOOL _isAtomic;
    CDUnknownFunctionPointerType _executeWork;
    CDUnknownBlockType _onFirstSubscriptionAdded;
    CDUnknownBlockType _onLastSubscriptionRemoved;
}

- (void).cxx_destruct;
- (void)enumerateSubscriptionsUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeSubscription:(id)arg1;
- (void)addSubscription:(id)arg1;
- (id)initAtomic:(BOOL)arg1 firstSubscriptionBlock:(CDUnknownBlockType)arg2 lastSubscriptionBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

