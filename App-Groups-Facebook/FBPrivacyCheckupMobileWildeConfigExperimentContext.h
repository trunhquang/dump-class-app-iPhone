//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBPrivacyCheckupMobileWildeConfigExperimentContext : FBExperimentContext
{
    unsigned int _numRetries;
    unsigned int _networkRequestBatchSize;
}

+ (BOOL)allowUserInterfaceIdiom:(int)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) unsigned int networkRequestBatchSize; // @synthesize networkRequestBatchSize=_networkRequestBatchSize;
@property(readonly, nonatomic) unsigned int numRetries; // @synthesize numRetries=_numRetries;

@end

