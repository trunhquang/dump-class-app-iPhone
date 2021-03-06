//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GCDWebServerDataResponse.h"

@interface GCDWebServerErrorResponse : GCDWebServerDataResponse
{
}

+ (id)responseWithServerError:(int)arg1 underlyingError:(id)arg2 message:(id)arg3;
+ (id)responseWithClientError:(int)arg1 underlyingError:(id)arg2 message:(id)arg3;
+ (id)responseWithServerError:(int)arg1 message:(id)arg2;
+ (id)responseWithClientError:(int)arg1 message:(id)arg2;
- (id)initWithServerError:(int)arg1 underlyingError:(id)arg2 message:(id)arg3;
- (id)initWithClientError:(int)arg1 underlyingError:(id)arg2 message:(id)arg3;
- (id)initWithServerError:(int)arg1 message:(id)arg2;
- (id)initWithClientError:(int)arg1 message:(id)arg2;
- (id)initWithStatusCode:(int)arg1 underlyingError:(id)arg2 messageFormat:(id)arg3 arguments:(void *)arg4;

@end

