//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQTTClient;

@interface CBLRealTimeManager : NSObject
{
    BOOL _connected;
    BOOL _enabled;
    MQTTClient *_client;
}

+ (id)sharedManager;
@property(retain, nonatomic) MQTTClient *client; // @synthesize client=_client;
@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)getRealTimeHost:(CDUnknownBlockType)arg1;
- (void)setUpClientRootCertificate:(CDUnknownBlockType)arg1;
- (id)formatUserChannel:(id)arg1;
- (void)handleHintData:(id)arg1;
- (void)disconnect;
- (void)connect;

@end

