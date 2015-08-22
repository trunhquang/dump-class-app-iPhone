//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NRMAConnectInformation, NSString;

@interface NRMAHarvesterConnection : NSObject
{
    BOOL _useSSL;
    NRMAConnectInformation *_connectionInformation;
    NSString *_collectorHost;
    NSString *_applicationToken;
    NSString *_crossProcessID;
    long long _serverTimestamp;
}

@property BOOL useSSL; // @synthesize useSSL=_useSSL;
@property(retain) NSString *crossProcessID; // @synthesize crossProcessID=_crossProcessID;
@property long long serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
@property(retain) NSString *applicationToken; // @synthesize applicationToken=_applicationToken;
@property(retain) NSString *collectorHost; // @synthesize collectorHost=_collectorHost;
@property(retain) NRMAConnectInformation *connectionInformation; // @synthesize connectionInformation=_connectionInformation;
- (void).cxx_destruct;
- (id)collectorHostURL:(id)arg1;
- (id)collectorHostDataURL;
- (id)collectorConnectURL;
- (id)createDataPost:(id)arg1;
- (id)createConnectPost:(id)arg1;
- (id)sendData:(id)arg1;
- (id)sendConnect;
- (id)send:(id)arg1;
- (id)createPostWithURI:(id)arg1 message:(id)arg2;
- (id)init;

@end
