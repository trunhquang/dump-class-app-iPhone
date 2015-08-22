//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMQTTClient.h"

@class FBMQTTClientConnectLogger, FBMqttCredential, NSMutableArray, NSMutableDictionary, NSString, NSThread, NSTimer;

@interface FBMQTTNativeClient : NSObject <FBMQTTClient>
{
    struct mosquitto *_impl;
    NSThread *_mqttThread;
    NSMutableArray *_mqttThreadWorkQueue;
    BOOL _started;
    CDUnknownBlockType _trustVerifier;
    BOOL _needCustomCertificateVerification;
    BOOL _connected;
    struct __CFReadStream *_readStream;
    struct __CFWriteStream *_writeStream;
    int _readStreamState;
    int _writeStreamState;
    NSMutableDictionary *_publishedMessages;
    BOOL _connectionIsCellular;
    NSMutableDictionary *_publishedMessageTokens;
    unsigned int _backgroundTaskID;
    BOOL _running;
    BOOL _finalizeMqttThread;
    NSString *_appSessionId;
    NSString *_mqttSessionId;
    BOOL _disableSSL;
    BOOL _useVOIP;
    BOOL _inBackground;
    int _mqttKeepAliveTime;
    int _mqttForegroundKeepAliveTime;
    float _pingResponseTimeout;
    float _connectTimeout;
    id <FBMQTTClientDelegate> _delegate;
    FBMQTTClientConnectLogger *_connectAnalyticLogger;
    NSString *_clientID;
    FBMqttCredential *_credential;
    NSString *_mqttHostName;
    NSString *_mqttHostIp;
    int _mqttPort;
    NSTimer *_disconnectTimer;
    NSTimer *_pingResponseTimer;
    NSTimer *_keepAliveTimer;
    struct __CFRunLoop *_mqttThreadRunLoop;
    struct __CFRunLoopSource *_mqttThreadSignal;
    int _encodingFormat;
    int _connectStatus;
    double _lastMqttActivityTimeSecond;
}

+ (BOOL)isStreamUsingCellular:(struct __CFReadStream *)arg1;
+ (BOOL)enumerateInterfaceAddresses:(CDUnknownBlockType)arg1 error:(id *)arg2;
@property int connectStatus; // @synthesize connectStatus=_connectStatus;
@property(nonatomic) int encodingFormat; // @synthesize encodingFormat=_encodingFormat;
@property(retain, nonatomic) struct __CFRunLoopSource *mqttThreadSignal; // @synthesize mqttThreadSignal=_mqttThreadSignal;
@property(retain, nonatomic) struct __CFRunLoop *mqttThreadRunLoop; // @synthesize mqttThreadRunLoop=_mqttThreadRunLoop;
@property(retain, nonatomic) NSTimer *keepAliveTimer; // @synthesize keepAliveTimer=_keepAliveTimer;
@property(retain, nonatomic) NSTimer *pingResponseTimer; // @synthesize pingResponseTimer=_pingResponseTimer;
@property(retain, nonatomic) NSTimer *disconnectTimer; // @synthesize disconnectTimer=_disconnectTimer;
@property(retain, nonatomic) NSMutableDictionary *publishedMessageTokens; // @synthesize publishedMessageTokens=_publishedMessageTokens;
@property(retain, nonatomic) NSMutableDictionary *publishedMessages; // @synthesize publishedMessages=_publishedMessages;
@property(nonatomic) BOOL connected; // @synthesize connected=_connected;
@property(nonatomic) int mqttPort; // @synthesize mqttPort=_mqttPort;
@property(copy, nonatomic) NSString *mqttHostIp; // @synthesize mqttHostIp=_mqttHostIp;
@property(copy, nonatomic) NSString *mqttHostName; // @synthesize mqttHostName=_mqttHostName;
@property(copy, nonatomic) FBMqttCredential *credential; // @synthesize credential=_credential;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) FBMQTTClientConnectLogger *connectAnalyticLogger; // @synthesize connectAnalyticLogger=_connectAnalyticLogger;
@property(nonatomic) BOOL inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) __weak id <FBMQTTClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double lastMqttActivityTimeSecond; // @synthesize lastMqttActivityTimeSecond=_lastMqttActivityTimeSecond;
@property(nonatomic) float connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(nonatomic) float pingResponseTimeout; // @synthesize pingResponseTimeout=_pingResponseTimeout;
@property(nonatomic) int mqttForegroundKeepAliveTime; // @synthesize mqttForegroundKeepAliveTime=_mqttForegroundKeepAliveTime;
@property(nonatomic) int mqttKeepAliveTime; // @synthesize mqttKeepAliveTime=_mqttKeepAliveTime;
@property(nonatomic) BOOL useVOIP; // @synthesize useVOIP=_useVOIP;
- (void).cxx_destruct;
- (void)_changeConnectStatus:(int)arg1;
- (void)_dispatchCouldNotPublishMessageToMainThread:(id)arg1 error:(id)arg2;
- (void)_dispatchDisconnectErrorToMainThread:(id)arg1;
- (void)_dispatchConnectErrorToMainThread:(id)arg1;
- (void)onPingResponseReceived;
- (void)_doHandlePublishSent:(id)arg1;
- (void)onPublishWithMessageID:(id)arg1;
- (void)onMQTTDisconnectTimeoutFired:(id)arg1;
- (void)onMQTTDidDisconnectWithError:(id)arg1;
- (void)onMessageReceived:(id)arg1;
- (void)disconnectWithError:(id)arg1 gracefulDisconnect:(BOOL)arg2;
- (void)handleError:(id)arg1;
- (void)handleDisconnectError:(id)arg1;
- (void)completeMQTTConnectWithCode:(id)arg1;
- (void)cleanupMQTTWithError:(id)arg1;
- (void)_doStop;
- (void)stop;
- (void)startNegotiatingTLS;
- (void)setTCP_NODELAY;
- (void)setupKeepaliveForStream:(struct __CFReadStream *)arg1;
- (void)setMosquittoSocket;
- (long)handleLibraryWriteFromPayload:(const char *)arg1 length:(long)arg2 wouldBlock:(_Bool *)arg3;
- (long)handleLibraryReadToBuffer:(char *)arg1 length:(long)arg2 wouldBlock:(_Bool *)arg3;
- (void)handleWriteCallbackOfType:(unsigned long)arg1;
- (void)handleReadCallbackOfType:(unsigned long)arg1;
- (BOOL)_verifyCertificate:(struct __SecTrust *)arg1 errorMessage:(id *)arg2;
- (void)onPingResponseTimerFired:(id)arg1;
- (void)onLibraryTimerFired:(id)arg1;
- (BOOL)_startConnectWithError:(id *)arg1;
- (void)_processWorkQueue;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_addWorkQueueItem:(id)arg1;
- (void)stopMqttThread;
- (void)_mqttThreadMain:(id)arg1;
- (void)start;
- (void)_doPublishMessage:(id)arg1;
- (void)publishMessage:(id)arg1;
- (void)_doUnsubscribeFromPatterns:(id)arg1;
- (void)unsubscribeFromPatterns:(id)arg1;
- (void)_doSubscribeToPatterns:(id)arg1;
- (void)subscribeToPatterns:(id)arg1;
- (void)_doResumeForegroundKeepAlive;
- (void)resumeForegroundKeepAlive;
- (void)_doPauseForegroundKeepAlive;
- (void)pauseForegroundKeepAlive;
- (void)updateLastMqttActivityTime;
- (void)didMqttReceive:(id)arg1 payloadSize:(unsigned long)arg2 extra:(id)arg3;
- (void)didMqttSend:(id)arg1 payloadSize:(unsigned long)arg2 extra:(id)arg3;
- (void)_doRunKeepAlive;
- (void)runKeepAlive;
- (void)runExtraKeepAliveWhenSystemAwake:(double)arg1;
- (void)_dispatchReconnectToMainThread;
- (BOOL)_initMosquittoWithError:(id *)arg1;
- (void)dealloc;
- (id)connectionDebugInfo;
- (id)initClientWithParameter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

