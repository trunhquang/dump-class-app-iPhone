//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusSyncSubscriptionsProto_SyncStatus;

@interface ComGoogleCumulusCommonSubscriptions_SyncStatus : NSObject
{
    ComGoogleCumulusSyncSubscriptionsProto_SyncStatus *statusProto_;
}

- (void)dealloc;
- (id)toProto;
- (BOOL)isPaused;
- (BOOL)isActive;
- (BOOL)isDoneSyncing;
- (id)initWithBoolean:(BOOL)arg1 withBoolean:(BOOL)arg2 withBoolean:(BOOL)arg3;
- (id)initWithComGoogleCumulusSyncSubscriptionsProto_SyncStatus:(id)arg1;

@end

