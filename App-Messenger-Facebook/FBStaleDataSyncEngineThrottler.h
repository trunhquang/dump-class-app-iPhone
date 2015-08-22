//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSyncEngine.h"
#import "FBSyncEngineDelegate.h"

@class NSString;

@interface FBStaleDataSyncEngineThrottler : NSObject <FBSyncEngine, FBSyncEngineDelegate>
{
    id <FBClock> _clock;
    double _throttleSyncsWithinTimeInterval;
    id <FBSyncEngine> _syncEngine;
    id <FBSyncEngineDelegate> _delegate;
}

@property id <FBSyncEngineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)syncEngine:(id)arg1 couldNotSyncWithError:(id)arg2;
- (void)syncEngine:(id)arg1 didSync:(id)arg2;
- (void)syncEngineDidFinishSync:(id)arg1;
- (void)syncEngineWillSync:(id)arg1 isInitial:(BOOL)arg2;
- (void)cancelSync;
- (void)forceUserSyncWithPreviousSyncSummary:(id)arg1;
- (void)syncUsersWithPreviousSyncSummary:(id)arg1;
- (void)throttleSyncsWithinTimeInterval:(double)arg1;
- (void)dealloc;
- (id)initWithSyncEngine:(id)arg1 clock:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
