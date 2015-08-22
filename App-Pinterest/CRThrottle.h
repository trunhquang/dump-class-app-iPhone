//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate;

@interface CRThrottle : NSObject
{
    unsigned int _maxTokens;
    NSDate *_lastEventTime;
    double _timeWindow;
    double _tokensAccumulated;
}

@property(retain, nonatomic) NSDate *lastEventTime; // @synthesize lastEventTime=_lastEventTime;
@property(nonatomic) double tokensAccumulated; // @synthesize tokensAccumulated=_tokensAccumulated;
@property(nonatomic) double timeWindow; // @synthesize timeWindow=_timeWindow;
@property(nonatomic) unsigned int maxTokens; // @synthesize maxTokens=_maxTokens;
- (void).cxx_destruct;
- (BOOL)tryEvent;
- (id)initWithMaxEvents:(unsigned int)arg1 perUnitTime:(double)arg2;

@end
