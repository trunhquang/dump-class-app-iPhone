//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ActiveChatItemsCache.h"

@interface ActiveChatUsersCache : ActiveChatItemsCache
{
}

- (void)updateChatUser:(id)arg1 withPresence:(id)arg2;
- (void)userPresenceChangedFromNotification:(id)arg1;
- (void)removeChatUserWithJID:(id)arg1;
- (void)setChatUserWithJID:(id)arg1 chatID:(id)arg2 name:(id)arg3 presence:(id)arg4;
- (Class)objectClass;
- (id)storeName;
- (void)dealloc;
- (id)initWithApp:(id)arg1;
- (id)init;

@end

