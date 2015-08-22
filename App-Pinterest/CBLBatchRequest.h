//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBLPinterestClient, NSMutableArray, NSMutableDictionary;

@interface CBLBatchRequest : NSObject
{
    CBLPinterestClient *_client;
    NSMutableArray *_requests;
    NSMutableDictionary *_successBlocks;
    NSMutableDictionary *_failureBlocks;
}

@property(retain, nonatomic) NSMutableDictionary *failureBlocks; // @synthesize failureBlocks=_failureBlocks;
@property(retain, nonatomic) NSMutableDictionary *successBlocks; // @synthesize successBlocks=_successBlocks;
@property(retain, nonatomic) NSMutableArray *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) CBLPinterestClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)execute;
- (void)addRequestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)initWithClient:(id)arg1;

@end
