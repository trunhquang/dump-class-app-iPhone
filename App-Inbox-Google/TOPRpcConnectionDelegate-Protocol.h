//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, TOPRpcConnection, TOPRpcContext;

@protocol TOPRpcConnectionDelegate <NSObject>
- (void)processResponse:(NSData *)arg1 statusCode:(int)arg2 fetchError:(NSError *)arg3 context:(TOPRpcContext *)arg4 connection:(TOPRpcConnection *)arg5;
@end

