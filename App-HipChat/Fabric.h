//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FABApplicationIdentiferModel, FABSettingsOnboardingManager, NSDictionary, NSString;

@interface Fabric : NSObject
{
    BOOL _debug;
    BOOL _isFirstInstall;
    NSDictionary *_kitMap;
    NSDictionary *_SDKConfig;
    FABSettingsOnboardingManager *_settingsAndOnboardingManager;
    FABApplicationIdentiferModel *_applicationIdentifierModel;
    NSString *_APIKey;
    NSString *_installID;
    NSString *_executionIdentifier;
    NSString *_advertisingToken;
}

+ (void)startInstance:(id)arg1;
+ (id)kitsByAddingDigitsIfFound:(id)arg1;
+ (id)with:(id)arg1;
+ (id)sharedSDK;
@property(copy, nonatomic) NSString *advertisingToken; // @synthesize advertisingToken=_advertisingToken;
@property(readonly, copy, nonatomic) NSString *executionIdentifier; // @synthesize executionIdentifier=_executionIdentifier;
@property(readonly, nonatomic) BOOL isFirstInstall; // @synthesize isFirstInstall=_isFirstInstall;
@property(readonly, copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(readonly, nonatomic) FABApplicationIdentiferModel *applicationIdentifierModel; // @synthesize applicationIdentifierModel=_applicationIdentifierModel;
@property(retain, nonatomic) FABSettingsOnboardingManager *settingsAndOnboardingManager; // @synthesize settingsAndOnboardingManager=_settingsAndOnboardingManager;
@property(retain, nonatomic) NSDictionary *SDKConfig; // @synthesize SDKConfig=_SDKConfig;
@property(copy, nonatomic) NSDictionary *kitMap; // @synthesize kitMap=_kitMap;
@property(nonatomic) BOOL debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *instanceIdentifier;
@property(readonly, nonatomic) NSDictionary *settings;
- (id)configurationDictionaryForKit:(id)arg1;
- (id)validSDKConfigFromInfoPlist:(id)arg1;
- (void)migrateNSUserDefaultsToCLSUserDefaults;
- (void)migrateLegacyPersistentData;
- (id)generateInstallationUUID;
- (id)readInstallationUUID;
- (id)SDKKitVersions;
- (id)kitForClass:(Class)arg1;
- (void)onboardAppAndDownloadSettings;
- (id)init;

@end

