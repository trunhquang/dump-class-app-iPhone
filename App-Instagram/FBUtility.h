//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBUtility : NSObject
{
}

+ (void)deleteFacebookCookies;
+ (BOOL)isSystemAccountStoreAvailable;
+ (BOOL)isMultitaskingSupported;
+ (BOOL)isRetinaDisplay;
+ (BOOL)isRegisteredURLScheme:(id)arg1;
+ (id)dialogBaseURL;
+ (id)buildFacebookUrlWithPre:(id)arg1 post:(id)arg2 version:(id)arg3;
+ (id)buildFacebookUrlWithPre:(id)arg1 withPost:(id)arg2;
+ (id)buildFacebookUrlWithPre:(id)arg1;
+ (id)stringAppBaseUrlFromAppId:(id)arg1 urlSchemeSuffix:(id)arg2;
+ (id)stringByURLEncodingString:(id)arg1;
+ (id)stringByURLDecodingString:(id)arg1;
+ (id)stringBySerializingQueryParameters:(id)arg1;
+ (id)dictionaryByParsingURLQueryPart:(id)arg1;
+ (id)queryParamsDictionaryFromFBURL:(id)arg1;
+ (id)simpleJSONDecode:(id)arg1 error:(id *)arg2;
+ (id)simpleJSONDecode:(id)arg1;
+ (id)simpleJSONEncode:(id)arg1 error:(id *)arg2 writingOptions:(unsigned int)arg3;
+ (id)simpleJSONEncode:(id)arg1;
+ (void)updateParametersWithEventUsageLimitsAndBundleInfo:(id)arg1 accessAdvertisingTrackingStatus:(BOOL)arg2;
+ (int)advertisingTrackingStatus;
+ (id)advertiserID;
+ (id)attributionID;
+ (id)newUUIDString;
+ (void)callTheFetchAppSettingsCallback:(CDUnknownBlockType)arg1;
+ (BOOL)isFetchedFBAppSettingsStale;
+ (id)fetchedAppSettings;
+ (void)fetchAppSettings:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (void)addBasicInfoPermission:(id)arg1;
+ (BOOL)areAllPermissionsReadPermissions:(id)arg1;
+ (BOOL)isPublishPermission:(id)arg1;
+ (BOOL)isFacebookBundleIdentifier:(id)arg1;
+ (id)facebookSDKBundle;
+ (id)localizedStringForKey:(id)arg1 withDefault:(id)arg2 inBundle:(id)arg3;
+ (id)localizedStringForKey:(id)arg1 withDefault:(id)arg2;
+ (id)expirationDateFromExpirationTimeIntervalString:(id)arg1;
+ (id)expirationDateFromExpirationUnixTimeString:(id)arg1;
+ (double)randomTimeInterval:(double)arg1 withMaxValue:(double)arg2;
+ (unsigned long)currentTimeInMilliseconds;
+ (void)centerView:(id)arg1 tableView:(id)arg2;
+ (id)stringFBIDFromObject:(id)arg1;
+ (id)graphObjectInArray:(id)arg1 withSameIDAs:(id)arg2;

@end

