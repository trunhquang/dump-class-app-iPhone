//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PPServiceResponse.h"

@class PPAuthNAuthCredentials;

@interface PPAuthNAuthLoginResponse : PPServiceResponse
{
    PPAuthNAuthCredentials *_credentials;
}

@property(readonly, nonatomic) PPAuthNAuthCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (BOOL)parse:(id)arg1;

@end

