//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerPublisher.h"

@class NSArray, NSString;

@interface FBTestPublisher : NSObject <FBComposerPublisher>
{
    id <FBComposerPublisherStatusListener> _listener;
    NSArray *_events;
}

- (void).cxx_destruct;
- (void)stoppingPublishingDueToUnexpectedReason;
- (void)cancelPublishingPublication:(id)arg1 withReason:(id)arg2;
- (void)executePublishOfPublication:(id)arg1;
- (void)retryPublishingPublisherData:(id)arg1 withSource:(unsigned int)arg2;
- (void)restorePausedPublication:(id)arg1;
- (void)pausePublication:(id)arg1;
- (void)publish:(id)arg1;
- (void)firePublishEvents:(id)arg1;
- (id)initWithListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

