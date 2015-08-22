//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSDictionary, NSSet, NSString, ZRUrlRewriteInfo;

@interface ZRTokenData : NSObject <NSCoding>
{
    NSString *_campaignId;
    NSString *_uid;
    int _status;
    NSDate *_expiryTime;
    NSSet *_enabledUiFeatures;
    NSSet *_disabledUiFeatures;
    ZRUrlRewriteInfo *_rewriteInfo;
    NSArray *_knownUnsafePageRegexes;
    NSDictionary *_networkIdentifier;
}

+ (id)tokenDataForUserId:(id)arg1 fromCampaignFetchResponse:(id)arg2;
+ (id)tokenDataFromFile:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *networkIdentifier; // @synthesize networkIdentifier=_networkIdentifier;
@property(readonly, retain, nonatomic) NSArray *knownUnsafePageRegexes; // @synthesize knownUnsafePageRegexes=_knownUnsafePageRegexes;
@property(readonly, retain, nonatomic) ZRUrlRewriteInfo *rewriteInfo; // @synthesize rewriteInfo=_rewriteInfo;
@property(readonly, copy, nonatomic) NSSet *disabledUiFeatures; // @synthesize disabledUiFeatures=_disabledUiFeatures;
@property(readonly, copy, nonatomic) NSSet *enabledUiFeatures; // @synthesize enabledUiFeatures=_enabledUiFeatures;
@property(readonly, retain, nonatomic) NSDate *expiryTime; // @synthesize expiryTime=_expiryTime;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, copy, nonatomic) NSString *campaignId; // @synthesize campaignId=_campaignId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)matchesNetwork:(id)arg1;
- (BOOL)hasExpired;
- (BOOL)isEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithCampaignId:(id)arg1 uid:(id)arg2 status:(int)arg3 expiry:(id)arg4 enabledInterstitials:(id)arg5 disabledInterstitials:(id)arg6 networkIdentifier:(id)arg7 rewriteInfo:(id)arg8 knownUnsafePageRegexes:(id)arg9;
- (BOOL)writeToFile:(id)arg1;

@end

