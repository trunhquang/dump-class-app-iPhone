//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatItem.h"

#import "HCPresenceProtocol.h"

@class GCDMulticastDelegate<UserDelegate>, NSString, Presence;

@interface User : ChatItem <HCPresenceProtocol>
{
    NSString *_displayName;
    NSString *_mentionName;
    NSString *_mobile;
    NSString *_email;
    GCDMulticastDelegate<UserDelegate> *_multicastDelegate;
    Presence *_presence;
}

@property(retain, nonatomic) Presence *presence; // @synthesize presence=_presence;
@property(retain, nonatomic) GCDMulticastDelegate<UserDelegate> *multicastDelegate; // @synthesize multicastDelegate=_multicastDelegate;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain) NSString *mentionName; // @synthesize mentionName=_mentionName;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;
- (id)lastPresence;
- (void)updatePresence:(id)arg1;
- (id)proxyForJson;
- (id)key;
- (id)fillWithJsonData:(id)arg1;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)updateWithRosterItem:(id)arg1;
- (void)updateWithPresence:(id)arg1;
- (void)clearLastPresence;
- (void)fillWithRosterItem:(id)arg1;
@property(readonly) NSString *regexMentionName;
- (BOOL)isOffline;
- (unsigned int)type;
- (id)uniqueId;
@property(readonly, nonatomic) NSString *lightStatusIconName;
@property(readonly, nonatomic) NSString *statusIconName;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

