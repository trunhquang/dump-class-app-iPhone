//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XMPPCoreDataStorage.h"

#import "XMPPMessageArchivingStorage.h"

@class NSString;

@interface XMPPMessageArchivingCoreDataStorage : XMPPCoreDataStorage <XMPPMessageArchivingStorage>
{
    NSString *messageEntityName;
    NSString *contactEntityName;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)archiveMessage:(id)arg1 outgoing:(BOOL)arg2 xmppStream:(id)arg3;
- (BOOL)configureWithParent:(id)arg1 queue:(id)arg2;
- (id)contactEntity:(id)arg1;
- (id)messageEntity:(id)arg1;
@property(retain) NSString *contactEntityName;
@property(retain) NSString *messageEntityName;
- (id)contactWithBareJidStr:(id)arg1 streamBareJidStr:(id)arg2 managedObjectContext:(id)arg3;
- (id)contactWithJid:(id)arg1 streamJid:(id)arg2 managedObjectContext:(id)arg3;
- (id)contactForMessage:(id)arg1;
- (id)composingMessageWithJid:(id)arg1 streamJid:(id)arg2 outgoing:(BOOL)arg3 managedObjectContext:(id)arg4;
- (void)didUpdateContact:(id)arg1;
- (void)willInsertContact:(id)arg1;
- (void)willDeleteMessage:(id)arg1;
- (void)didUpdateMessage:(id)arg1;
- (void)willInsertMessage:(id)arg1;
- (void)didCreateManagedObjectContext;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

