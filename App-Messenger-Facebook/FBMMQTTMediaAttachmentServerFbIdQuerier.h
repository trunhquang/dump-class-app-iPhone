//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBMessageAttachmentServerFbIdQuerier.h"

@class NSString;

@interface FBMMQTTMediaAttachmentServerFbIdQuerier : NSObject <FBMessageAttachmentServerFbIdQuerier>
{
    id <MNMQTTSending> _sender;
    id <MNMQTTListenerManaging> _listenerManager;
}

- (void).cxx_destruct;
- (void)queryMediaFbIdFromServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithMQTTSender:(id)arg1 listenerManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

