//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface BigtopAccessManager : NSObject
{
    NSMutableDictionary *callbacks_;
    NSMutableDictionary *fetchers_;
    id <BigtopAccessManagerDelegate> _delegate;
}

+ (void)setSharedAccessManager:(id)arg1;
+ (BOOL)hasAccessForSecondaryStatus:(unsigned int)arg1;
+ (BOOL)hasAccessForPrimaryStatus:(unsigned int)arg1;
+ (int)accessResultForSecondaryResponseStatus:(id)arg1;
+ (int)accessResultForPrimaryResponseStatus:(id)arg1;
+ (id)sharedAccessManager;
@property(nonatomic) __weak id <BigtopAccessManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHasActivatedApp:(BOOL)arg1;
- (void)forgetBigtopEnabledUsers;
- (void)fetcher:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
- (void)updateActivatedState;
- (id)primaryEnabledUserToken;
- (void)persistSecondaryToken:(id)arg1 forPrimaryUser:(id)arg2;
- (void)persistEnabledUser:(id)arg1;
- (int)parseSecondaryCheckResponseData:(id)arg1 forSecondaryUser:(id)arg2;
- (int)parsePrimaryCheckResponseData:(id)arg1 forPrimaryUser:(id)arg2;
- (void)fetchURLRequest:(id)arg1 forUser:(id)arg2 callback:(CDUnknownBlockType)arg3 isPrimary:(BOOL)arg4;
- (id)fetcherWithRequest:(id)arg1 isPrimary:(BOOL)arg2;
- (void)updateAvailableInvitesCountForUser:(id)arg1;
- (void)removeDataForUser:(id)arg1;
- (void)persistAvailableInvites:(int)arg1 forUser:(id)arg2;
- (int)numberOfAvailableInvitesForUser:(id)arg1;
@property(readonly, nonatomic) int numberOfAvailableInvitesForCurrentUser;
- (BOOL)isBigtopEnabledForUser:(id)arg1;
- (void)persistHasActivatedApp;
- (BOOL)hasActivatedApp;
- (void)fetchInviteStatusForUser:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)decrementAvailableInvitesCountForUser:(id)arg1;
- (void)dealloc;
- (id)init;

@end

