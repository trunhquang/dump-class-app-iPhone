//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"

@class FBUserSession, NSString;

@interface FBQIInviteRequester : NSObject <FBNetworkerRequestDelegate>
{
    FBUserSession *_session;
    id <FBQIInviteRequesterDelegate> _delegate;
    NSString *_appId;
    NSString *_recipientId;
}

@property(readonly, copy, nonatomic) NSString *recipientId; // @synthesize recipientId=_recipientId;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) id <FBQIInviteRequesterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)sendQuickInvite:(id)arg1;
- (id)initWithSession:(id)arg1 appId:(id)arg2 recipientId:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

