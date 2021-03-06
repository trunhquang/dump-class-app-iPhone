//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSessionClassProvidable.h"

@class MNDiskPersistenceConfiguration, MNIncrementalPersistenceJobBuilder, NSString;

@interface MNMessagesSyncIncrementalPersistenceRunner : NSObject <FBSessionClassProvidable>
{
    MNIncrementalPersistenceJobBuilder *_persistenceJobBuilder;
    MNDiskPersistenceConfiguration *_persistenceConfiguration;
    id <MNIncrementalPersistenceCoordinating> _persistenceCoordinator;
}

- (void).cxx_destruct;
- (void)buildAndRunJobsFromDescriptionsQueue:(id)arg1 withSequenceId:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithPersistenceJobBuilder:(id)arg1 persistenceConfiguration:(id)arg2 persistenceCoordinator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

