//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBMThreadSet, NSString;

@interface FBMThreadClientStateManager : NSObject <FBClassProvidable>
{
    FBMThreadSet *_threadSet;
    id <FBClock> _clock;
}

@property(retain, nonatomic) id <FBClock> clock; // @synthesize clock=_clock;
@property(retain, nonatomic) FBMThreadSet *threadSet; // @synthesize threadSet=_threadSet;
- (long long)generateThreadClientTimestampForInbox;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithThreadSet:(id)arg1 clock:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

