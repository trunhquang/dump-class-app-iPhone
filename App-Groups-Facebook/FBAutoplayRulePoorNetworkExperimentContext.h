//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBAutoplayRulePoorNetworkExperimentContext : FBExperimentContext
{
    BOOL _enabled;
    BOOL _checkCache;
    int _minBandwithState;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) int minBandwithState; // @synthesize minBandwithState=_minBandwithState;
@property(readonly, nonatomic) BOOL checkCache; // @synthesize checkCache=_checkCache;
@property(readonly, nonatomic) BOOL enabled; // @synthesize enabled=_enabled;

@end

