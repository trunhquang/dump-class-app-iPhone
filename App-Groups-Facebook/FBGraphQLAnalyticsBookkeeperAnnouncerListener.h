//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBGraphQLMutationBookkeeperListener.h"

@class NSString;

@interface FBGraphQLAnalyticsBookkeeperAnnouncerListener : NSObject <FBGraphQLMutationBookkeeperListener>
{
}

- (void)mutationDidFail:(id)arg1 withError:(id)arg2;
- (void)mutationDidSucceed:(id)arg1 withPayload:(id)arg2;
- (void)mutationDidCancel:(id)arg1;
- (void)mutationDidStart:(id)arg1 withRequest:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

