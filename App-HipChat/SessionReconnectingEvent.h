//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SessionEvent.h"

@interface SessionReconnectingEvent : SessionEvent
{
    unsigned int _stage;
}

@property(readonly, nonatomic) unsigned int stage; // @synthesize stage=_stage;
- (id)initWithAccount:(id)arg1 stage:(unsigned int)arg2;

@end

