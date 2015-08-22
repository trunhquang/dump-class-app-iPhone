//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NRMAJSONABLE.h"

@class NRMACrashReport_AppInfo, NRMACrashReport_DeviceInfo, NRMACrashReport_Exception, NSArray, NSMutableArray, NSNumber, NSString;

@interface NRMACrashReport : NSObject <NRMAJSONABLE>
{
    NSString *_uuid;
    NSString *_buildIdentifier;
    NSNumber *_timestamp;
    NSString *_appToken;
    NSNumber *_accountId;
    NSNumber *_agentId;
    NRMACrashReport_DeviceInfo *_deviceInfo;
    NRMACrashReport_AppInfo *_appInfo;
    NRMACrashReport_Exception *_exception;
    NSMutableArray *_threads;
    NSMutableArray *_libraries;
    NSArray *_activityHistory;
}

@property(retain) NSArray *activityHistory; // @synthesize activityHistory=_activityHistory;
@property(retain) NSMutableArray *libraries; // @synthesize libraries=_libraries;
@property(retain) NSMutableArray *threads; // @synthesize threads=_threads;
@property(retain) NRMACrashReport_Exception *exception; // @synthesize exception=_exception;
@property(retain) NRMACrashReport_AppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(retain) NRMACrashReport_DeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(retain) NSNumber *agentId; // @synthesize agentId=_agentId;
@property(retain) NSNumber *accountId; // @synthesize accountId=_accountId;
@property(retain) NSString *appToken; // @synthesize appToken=_appToken;
@property(retain) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain) NSString *buildIdentifier; // @synthesize buildIdentifier=_buildIdentifier;
@property(retain) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(readonly) NSString *platform;
@property(readonly) NSNumber *protocolVersion;
- (id)JSONObject;
- (id)initWithUUID:(id)arg1 buildIdentifier:(id)arg2 timestamp:(id)arg3 appToken:(id)arg4 accountId:(id)arg5 agentId:(id)arg6 deviceInfo:(id)arg7 appInfo:(id)arg8 exception:(id)arg9 threads:(id)arg10 libraries:(id)arg11 activityHistory:(id)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

