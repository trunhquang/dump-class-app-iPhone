//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, XMPPJID;

@protocol XMPPUser <NSObject>
- (NSArray *)allResources;
- (id <XMPPResource>)resourceForJID:(XMPPJID *)arg1;
- (id <XMPPResource>)primaryResource;
- (BOOL)isPendingApproval;
- (BOOL)isOnline;
- (NSString *)mobile;
- (NSString *)mentionName;
- (NSString *)displayName;
- (NSString *)name;
- (XMPPJID *)jid;
@end

