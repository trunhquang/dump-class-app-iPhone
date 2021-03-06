//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"
#import "MNActiveParticipantSetObserver.h"

@class FBMQTTClientManager, MNActiveParticipantSet, NSString;

@interface MNActiveParticipantMQTTPublisher : NSObject <MNActiveParticipantSetObserver, FBSessionClassProvidable>
{
    MNActiveParticipantSet *_activeUserSet;
    FBMQTTClientManager *_mqttClientManager;
    BOOL _isStarted;
}

- (void).cxx_destruct;
- (void)stop;
- (void)startWithClientMqttManager:(id)arg1;
- (void)didUpdateActiveUserSet:(id)arg1 toContainUserIds:(id)arg2;
- (void)dealloc;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithActiveUserSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

