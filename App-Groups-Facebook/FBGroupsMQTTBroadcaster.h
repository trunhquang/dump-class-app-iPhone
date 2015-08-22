//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAppService.h"

@class FBMQTTClientManager, FBMQTTManager, FBUserSession, NSMutableArray, NSSet, NSString;

@interface FBGroupsMQTTBroadcaster : NSObject <FBAppService>
{
    BOOL _subscribedToMQTT;
    BOOL _shouldSubscribeToLandingUpdates;
    FBUserSession *_session;
    FBMQTTManager *_mqttManager;
    FBMQTTClientManager *_mqttClientManager;
    NSMutableArray *_mqttListeners;
}

@property(nonatomic) BOOL shouldSubscribeToLandingUpdates; // @synthesize shouldSubscribeToLandingUpdates=_shouldSubscribeToLandingUpdates;
@property(readonly, nonatomic) NSMutableArray *mqttListeners; // @synthesize mqttListeners=_mqttListeners;
@property(retain, nonatomic) FBMQTTClientManager *mqttClientManager; // @synthesize mqttClientManager=_mqttClientManager;
@property(retain, nonatomic) FBMQTTManager *mqttManager; // @synthesize mqttManager=_mqttManager;
@property(readonly, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(nonatomic) BOOL subscribedToMQTT; // @synthesize subscribedToMQTT=_subscribedToMQTT;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int serviceStartupLevel;
- (void)signalAppServiceToHandleInitialSessionIdle;
- (void)stopAppServiceWithDependencies:(id)arg1;
- (void)startAppServiceWithDependencies:(id)arg1;
@property(readonly, copy, nonatomic) NSSet *appServiceDependencyIDs;
@property(readonly, copy, nonatomic) NSString *appServiceID;
- (void)_processNewGroupsMQTTUpdates:(id)arg1;
- (void)_unsubscribeFromMQTT;
- (void)_subscribeToMQTT;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

