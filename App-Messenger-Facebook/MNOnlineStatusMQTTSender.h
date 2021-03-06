//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class NSString;

@interface MNOnlineStatusMQTTSender : NSObject <FBClassProvidable>
{
    id <MNMQTTSending> _sender;
}

@property(retain, nonatomic) id <MNMQTTSending> sender; // @synthesize sender=_sender;
- (void).cxx_destruct;
- (void)sendShowOnline:(BOOL)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMQTTSender:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

