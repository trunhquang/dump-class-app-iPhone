//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCumulusSyncClientSyncSweeper_SubscriptionChange.h"

@class ComGoogleCumulusCommonBaseProto_ObjectReference, NSString;

@interface ComGoogleCumulusSyncClientGroupMarker_SubscriptionChangeImpl : NSObject <ComGoogleCumulusSyncClientSyncSweeper_SubscriptionChange>
{
    ComGoogleCumulusCommonBaseProto_ObjectReference *ref_;
    id <JavaUtilList> subscriptions_;
}

- (void)dealloc;
- (id)subscriptionsToEvict;
- (id)getObjectReference;
- (void)addSubscriptionWithNSString:(id)arg1;
- (id)initWithComGoogleCumulusCommonBaseProto_ObjectReference:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

