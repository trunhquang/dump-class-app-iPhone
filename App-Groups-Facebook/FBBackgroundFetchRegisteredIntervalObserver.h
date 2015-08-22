//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBBackgroundFetchRegisteredObserver.h"

@class FBBackgroundFetchThrottler, NSString;

@interface FBBackgroundFetchRegisteredIntervalObserver : NSObject <FBBackgroundFetchRegisteredObserver>
{
    FBBackgroundFetchThrottler *_throttler;
    id <FBBackgroundFetchObserver> _observer;
}

@property(readonly, nonatomic) __weak id <FBBackgroundFetchObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (double)minimumInterval;
- (void)handleBackgroundFetchRequest:(id)arg1;
- (BOOL)shouldBeCalledAtDate:(id)arg1 notification:(BOOL)arg2 reachability:(unsigned int)arg3;
- (id)initWithObserver:(id)arg1 withMinimumInterval:(struct FBBackgroundFetchMinimumInterval)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

