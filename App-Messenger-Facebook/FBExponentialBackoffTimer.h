//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBTimerDispatchSource, NSDate;

@interface FBExponentialBackoffTimer : NSObject
{
    int _baseDuration;
    int _maxExponent;
    BOOL _isRandomized;
    NSDate *_fireDate;
    int _currentExponent;
    FBTimerDispatchSource *_timer;
}

+ (double)_randomNumberBetweenZeroandOne;
@property(retain, nonatomic) FBTimerDispatchSource *timer; // @synthesize timer=_timer;
@property(nonatomic) int currentExponent; // @synthesize currentExponent=_currentExponent;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void).cxx_destruct;
- (void)_clear;
- (void)_cancel;
- (double)scheduleNextTimer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (BOOL)hasPendingTimer;
- (void)reset;
- (void)dealloc;
- (id)initWithBaseDuration:(int)arg1 maxExponent:(int)arg2 isRandomized:(BOOL)arg3;
- (id)initWithBaseDuration:(int)arg1 maxExponent:(int)arg2;

@end
