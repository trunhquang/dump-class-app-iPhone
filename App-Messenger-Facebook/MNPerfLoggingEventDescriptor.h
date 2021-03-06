//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying.h"

@class NSString;

@interface MNPerfLoggingEventDescriptor : FBValueObject <NSCopying>
{
    BOOL _renameExistingEvent;
    NSString *_event;
    NSString *_existingEvent;
    double _animationDuration;
}

@property(readonly, nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(readonly, nonatomic) BOOL renameExistingEvent; // @synthesize renameExistingEvent=_renameExistingEvent;
@property(readonly, copy, nonatomic) NSString *existingEvent; // @synthesize existingEvent=_existingEvent;
@property(readonly, copy, nonatomic) NSString *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1 existingEvent:(id)arg2 renameExistingEvent:(BOOL)arg3 animationDuration:(double)arg4;

@end

