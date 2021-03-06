//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBReachabilityListener.h"

@class FBReachabilityAnnouncer, NSString;

@interface FBWhistleCellRadioChangeMonitor : NSObject <FBReachabilityListener>
{
    FBReachabilityAnnouncer *_reachabilityAnnouncer;
}

- (void).cxx_destruct;
- (void)reachabilityStateChangedTo:(unsigned int)arg1 from:(unsigned int)arg2;
- (unsigned int)reachabilityState;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

