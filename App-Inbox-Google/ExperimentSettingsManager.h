//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ExperimentSettingsManager : NSObject
{
}

+ (void)setSharedExperimentSettingsManager:(id)arg1;
+ (id)sharedExperimentSettingsManager;
- (id)settingKeyWithExperimentKey:(unsigned int)arg1;
- (id)experimentCache;
- (id)isEnabledOrUnavailable:(unsigned int)arg1 forAccount:(id)arg2;
- (BOOL)isEnabled:(unsigned int)arg1 forAccount:(id)arg2;
- (BOOL)isEnabled:(unsigned int)arg1;
- (void)addAllSettingsToPreloadWithAPISettings:(id)arg1;

@end

