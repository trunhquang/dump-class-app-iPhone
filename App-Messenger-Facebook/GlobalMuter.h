//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"

@class FBMRestNetworkerRequest, FBUserSession, NSString;

@interface GlobalMuter : NSObject <FBNetworkerRequestDelegate>
{
    FBMRestNetworkerRequest *_restRequest;
    FBUserSession *_session;
    id <GlobalMuterDelegate> _delegate;
    long long _muteUntil;
}

@property(nonatomic) long long muteUntil; // @synthesize muteUntil=_muteUntil;
@property(nonatomic) id <GlobalMuterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)cancel;
- (void)start;
- (void)dealloc;
- (id)initWithMuteUntil:(long long)arg1 delegate:(id)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

