//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AuthCallback.h"

@class IosHttpSocket, NSString;

@interface HttpSocketAuthCallback : NSObject <AuthCallback>
{
    IosHttpSocket *socket_;
    id request_;
}

+ (id)callbackWithSocket:(id)arg1 request:(id)arg2;
@property(retain, nonatomic) id request; // @synthesize request=request_;
@property(retain, nonatomic) IosHttpSocket *socket; // @synthesize socket=socket_;
- (void)onAuthFailure:(id)arg1;
- (void)onAuthSuccess;
- (void)dealloc;
- (id)initWithSocket:(id)arg1 request:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

