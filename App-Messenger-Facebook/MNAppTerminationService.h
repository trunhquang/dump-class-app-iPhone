//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"
#import "MNServiceControllable.h"

@class FBMMQTTManager, NSNotificationCenter, NSString, OrcaPersistManager, UIApplication;

@interface MNAppTerminationService : NSObject <MNServiceControllable, FBClassProvidable>
{
    UIApplication *_application;
    NSNotificationCenter *_notificationCenter;
    FBMMQTTManager *_mqttManager;
    OrcaPersistManager *_persistManager;
    BOOL _shouldPersistStateOnTerminate;
}

- (void).cxx_destruct;
- (void)_handleWillTerminate:(id)arg1;
- (void)handleIdle;
- (void)stop;
- (void)start:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 MQTTManager:(id)arg2 persistManager:(id)arg3 notificationCenter:(id)arg4 shouldPersistStateOnTerminate:(BOOL)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
