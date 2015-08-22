//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBFriendingPossibilitiesState, FBFriendingPossibilitiesStateListenerAnnouncer, FBUserSession, NSTimer;

@interface FBFriendingPossibilitiesStateFetcher : NSObject
{
    FBUserSession *_session;
    FBFriendingPossibilitiesStateListenerAnnouncer *_announcer;
    FBFriendingPossibilitiesState *_state;
    NSTimer *_timer;
    double _pollingInterval;
}

- (void).cxx_destruct;
- (void)_timerDidFire:(id)arg1;
- (void)_updatePollingTimer;
- (void)updateStateMarkingAllAsSeen;
- (void)updateStateWithDeletedCount:(unsigned int)arg1 deletedCountIncludeHidden:(unsigned int)arg2 updatedTimestamp:(id)arg3;
- (BOOL)_updateState:(id)arg1;
- (void)updateStateWithHeadLoadResponseResult:(id)arg1;
- (void)_loadFinishedWithResponse:(id)arg1 andError:(id)arg2;
- (void)_doFetchState;
- (void)fetchState;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)initWithSession:(id)arg1;

@end

