//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAuthListener.h"

@class NSString;

@interface FBAuthPerfLogger : NSObject <FBAuthListener>
{
}

- (void)didCompleteAuthenticationRequest:(BOOL)arg1;
- (void)willSendAuthenticationRequestForCredentialType:(int)arg1 dblPinProvided:(BOOL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

