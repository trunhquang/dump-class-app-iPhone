//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleAppsBigtopSyncClientApiInvitesInvites.h"

@class NSString;

@interface ComGoogleAppsBigtopSyncClientImplInvitesInvitesImpl : NSObject <ComGoogleAppsBigtopSyncClientApiInvitesInvites>
{
    id <JCGCuChannel> channel_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_sendWithNSString_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_sendWithNSString_withJBTCallback_withJBTSpan_;
+ (id)__annotations_sendWithSourceWithNSString_withComGoogleAppsBigtopSyncClientApiInvitesInvites_InviteSourceEnum_withJBTCallback_withJBTSpan__params;
+ (id)__annotations_initWithJCGCuChannel_;
+ (void)initialize;
- (void)dealloc;
- (id)getMappedInviteSourceWithComGoogleAppsBigtopSyncClientApiInvitesInvites_InviteSourceEnum:(id)arg1;
- (void)sendWithNSString:(id)arg1 withJBTCallback:(id)arg2 withJBTSpan:(id)arg3;
- (void)sendWithSourceWithNSString:(id)arg1 withComGoogleAppsBigtopSyncClientApiInvitesInvites_InviteSourceEnum:(id)arg2 withJBTCallback:(id)arg3 withJBTSpan:(id)arg4;
- (id)initWithJCGCuChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

