//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFNetworkReachabilityManager, EventPublisher;

@interface NetworkConnectionManager : NSObject
{
    BOOL _monitoring;
    EventPublisher *_eventPublisher;
    AFNetworkReachabilityManager *_reachabilityManager;
}

@property(retain, nonatomic) AFNetworkReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
@property(nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic) __weak EventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
- (void).cxx_destruct;
- (void)onApplicationStateChangedEvent:(id)arg1;
- (void)fireNetworkConnectedEvent;
- (void)fireNetworkDisconnectedEvent;
- (void)reachabilityStatusChangedWithNewStatus:(int)arg1;
- (CDUnknownBlockType)statusChangeBlock;
- (void)stopMonitoring;
- (void)startMonitoring;
@property(readonly, nonatomic) unsigned int currentStatus;
- (id)initWithEventPublisher:(id)arg1;

@end

