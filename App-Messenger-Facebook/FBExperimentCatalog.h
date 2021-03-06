//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableDictionary;

@interface FBExperimentCatalog : NSObject
{
    NSMutableDictionary *_experimentRegistrationData;
    NSMutableDictionary *_experiments;
    NSMutableDictionary *_overrides;
    NSArray *_availableExperimentNames;
    struct Mutex _lock;
    NSDate *_startDate;
}

@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)groupForExperimentWithName_unlocked:(id)arg1;
- (id)groupForExperimentWithName:(id)arg1;
- (id)allOverrides;
- (void)removeOverrideForExperimentWithName:(id)arg1;
- (BOOL)registerValidOverrides:(id)arg1;
- (void)registerOverrideWithName_unlocked:(id)arg1 forExperimentWithName:(id)arg2;
- (void)registerOverrideWithName:(id)arg1 forExperimentWithName:(id)arg2;
- (BOOL)hasOverrideForExperimentWithName_unlocked:(id)arg1;
- (BOOL)hasOverrideForExperimentWithName:(id)arg1;
- (id)_registeredExperimentNamesIncludingInactive_unlocked:(BOOL)arg1;
- (BOOL)_isExperimentActive_unlocked:(id)arg1;
- (void)_addExperiments_unlocked:(id)arg1;
- (void)_removeOverridesFromExperimentsWithNames_unlocked:(id)arg1;
- (void)_removeExperimentsWithNames_unlocked:(id)arg1;
- (id)_experimentsIncludingInactive_locked:(BOOL)arg1;
- (void)_replaceExperimentNames_locked:(id)arg1 withExperiments:(id)arg2 preservingOverrides:(BOOL)arg3;
- (id)experimentsIncludingInactive:(BOOL)arg1;
- (id)allExperimentNames;
- (id)allRegisteredExperimentNames;
- (id)activeExperimentNames;
- (BOOL)isExperimentActive:(id)arg1;
- (void)registerExperiment:(id)arg1;
- (void)replaceExperimentsWithNames:(id)arg1 withExperiments:(id)arg2 preservingOverrides:(BOOL)arg3;
- (void)setExperiments:(id)arg1;
- (void)reset;
- (id)GKWithName:(id)arg1;
- (id)QEWithName:(id)arg1;
- (id)experimentWithName:(id)arg1;
- (id)experimentTestModuleNameForExperimentWithName:(id)arg1;
- (id)init;

@end

