//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MNMessageSendStateMachineListening.h"

@class FBAnalytics, NSString;

@interface MNMessageSendStateMachineAnalyticsLogger : NSObject <MNMessageSendStateMachineListening>
{
    FBAnalytics *_analytics;
}

- (void).cxx_destruct;
- (void)messageSendStateMachine:(id)arg1 stateFailedToChangeFromState:(id)arg2 toState:(id)arg3;
- (void)messageSendStateMachine:(id)arg1 stateChangedFromState:(id)arg2 toState:(id)arg3;
- (id)initWithAnalytics:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
