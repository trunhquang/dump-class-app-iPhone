//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBExperimentContext.h"

@interface FBPlacePickerPrefetchNewsfeedExperimentContext : FBExperimentContext
{
    BOOL _shouldPrefetch;
}

+ (void)logExposureWithSession:(id)arg1;
+ (id)parameterConfigurations;
+ (id)experimentName;
@property(readonly, nonatomic) BOOL shouldPrefetch; // @synthesize shouldPrefetch=_shouldPrefetch;

@end

