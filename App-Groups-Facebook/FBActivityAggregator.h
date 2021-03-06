//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCountedSet, NSObject<OS_dispatch_queue>;

@interface FBActivityAggregator : NSObject
{
    NSCountedSet *_activities;
    struct RecursiveMutex _lock;
    double _endHysteresis;
    BOOL _active;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)automaticallyNotifiesObserversOfActive;
@property(nonatomic) double endHysteresis; // @synthesize endHysteresis=_endHysteresis;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)endActivity:(id)arg1;
- (void)beginActivity:(id)arg1;
- (void)_updateActivity:(BOOL)arg1 delay:(double)arg2;
- (void)_updateActivity:(BOOL)arg1;
- (id)debugDescription;
- (BOOL)_isActive;
- (void)dealloc;
- (id)init;

@end

