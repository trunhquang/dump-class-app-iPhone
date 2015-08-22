//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDMQuery.h"

@class NSString, NSURL;

@interface MDMFetchRegisterTokenQuery : MDMQuery
{
    NSString *_apnsToken;
    NSURL *_registerURL;
}

@property(readonly, nonatomic) NSURL *registerURL; // @synthesize registerURL=_registerURL;
- (void).cxx_destruct;
- (id)requestBody;
- (void)processError:(id)arg1;
- (void)processResponse:(id)arg1;
- (id)fetcher;
- (int)queryType;
- (id)initWithDelegate:(id)arg1 deviceId:(id)arg2 apnsToken:(id)arg3;

@end

