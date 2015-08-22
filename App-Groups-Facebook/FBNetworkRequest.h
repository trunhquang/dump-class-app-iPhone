//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBRequest.h"

@class NSDictionary, NSMutableDictionary, NSString;

@interface FBNetworkRequest : NSObject <FBRequest>
{
    NSMutableDictionary *_headers;
    CDUnknownBlockType _responseHandlerFactory;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandlerFactory; // @synthesize responseHandlerFactory=_responseHandlerFactory;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldHandleCookies;
@property(readonly, copy, nonatomic) NSString *httpMethod;
@property(readonly, copy, nonatomic) NSDictionary *headers;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValuesForHTTPHeaderFieldsWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

