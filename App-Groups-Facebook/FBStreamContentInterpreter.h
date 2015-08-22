//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBContentInterpreting.h"

@class FBGraphBatchRequest, NSMutableDictionary, NSString;

@interface FBStreamContentInterpreter : NSObject <FBContentInterpreting>
{
    int _responseCount;
    NSMutableDictionary *_nameToRequestMap;
    FBGraphBatchRequest *_request;
}

@property(retain, nonatomic) FBGraphBatchRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)interpret:(id)arg1 responseProcessor:(id)arg2 error:(id *)arg3;
@property(readonly, copy) NSString *description;
- (id)initWithRequest:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

