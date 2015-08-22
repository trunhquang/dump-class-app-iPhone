//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTEventListener.h"

@class NSString;

@interface SyncPoller : NSObject <JBTEventListener>
{
    id <JBTBackgroundSyncPoller> syncPoller_;
    BOOL wasSyncing_;
    NSString *_email;
    id <SyncPollerDelegate> _delegate;
}

@property(nonatomic) __weak id <SyncPollerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *email; // @synthesize email=_email;
- (void).cxx_destruct;
- (void)setSyncPoller:(id)arg1;
- (void)onEventWithJBTEvent:(id)arg1;
@property(readonly, nonatomic) BOOL isSyncing;
- (void)stop;
- (void)start;
- (id)initWithSubscriptionIds:(id)arg1 email:(id)arg2 sync:(id)arg3 initialDelaySec:(int)arg4 pollingIntervalSec:(int)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

