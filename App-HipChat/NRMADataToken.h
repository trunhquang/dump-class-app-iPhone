//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NRMAHarvestableArray.h"

@interface NRMADataToken : NRMAHarvestableArray
{
    long long _accountId;
    long long _agentId;
}

@property(nonatomic) long long agentId; // @synthesize agentId=_agentId;
@property(nonatomic) long long accountId; // @synthesize accountId=_accountId;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)JSONObject;

@end

