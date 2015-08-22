//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TOPAuthRpcHandler.h"

@class NSString;

@interface TOPAuthRpcClientLoginHandler : NSObject <TOPAuthRpcHandler>
{
    id <TOPClientLoginProvider> authProvider_;
    NSString *service_;
}

- (id)userEmail;
- (void)handleUserNoLongerAuthenticated;
- (void)authorizeConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNotAuthorized:(CDUnknownBlockType)arg1;
- (BOOL)isAuthenticated;
- (void)dealloc;
- (id)initWithAuthProvider:(id)arg1 forService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

