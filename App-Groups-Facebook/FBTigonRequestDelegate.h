//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNetworkerRequestDelegate.h"

@class NSString;

@interface FBTigonRequestDelegate : NSObject <FBNetworkerRequestDelegate>
{
}

+ (id)sharedDelegate;
- (void)networkerRequest:(id)arg1 didUpdateUploadProgress:(float)arg2 complete:(BOOL)arg3;
- (void)networkerRequest:(id)arg1 willRetryWithError:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3;
- (void)networkerRequest:(id)arg1 didReceiveData:(id)arg2;
- (void)networkerRequest:(id)arg1 didReceiveResponseWithStatus:(id)arg2;
- (void)networkerRequest:(id)arg1 didStartRequestWithStatus:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

