//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ActiveChatItem, ActiveChatItemsCache;

@protocol ActiveChatItemsDelegate <NSObject>

@optional
- (void)activeChatItemsDidUpdateChatItemSortOrder:(ActiveChatItemsCache *)arg1;
- (void)activeChatItems:(ActiveChatItemsCache *)arg1 didRemoveChatItem:(ActiveChatItem *)arg2 fromIndex:(int)arg3;
- (void)activeChatItems:(ActiveChatItemsCache *)arg1 didUpdateChatItem:(ActiveChatItem *)arg2;
- (void)activeChatItems:(ActiveChatItemsCache *)arg1 didAddChatItem:(ActiveChatItem *)arg2;
- (void)activeChatItems:(ActiveChatItemsCache *)arg1 loadedFromSource:(int)arg2;
@end

