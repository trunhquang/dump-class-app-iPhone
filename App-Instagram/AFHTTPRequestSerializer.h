//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AFURLRequestSerialization.h"

@class NSDictionary, NSMutableDictionary, NSSet, NSString;

@interface AFHTTPRequestSerializer : NSObject <AFURLRequestSerialization>
{
    unsigned int _stringEncoding;
    NSSet *_HTTPMethodsEncodingParametersInURI;
    NSMutableDictionary *_mutableHTTPRequestHeaders;
    unsigned int _queryStringSerializationStyle;
    CDUnknownBlockType _queryStringSerialization;
}

+ (id)serializer;
@property(copy, nonatomic) CDUnknownBlockType queryStringSerialization; // @synthesize queryStringSerialization=_queryStringSerialization;
@property(nonatomic) unsigned int queryStringSerializationStyle; // @synthesize queryStringSerializationStyle=_queryStringSerializationStyle;
@property(retain, nonatomic) NSMutableDictionary *mutableHTTPRequestHeaders; // @synthesize mutableHTTPRequestHeaders=_mutableHTTPRequestHeaders;
@property(retain, nonatomic) NSSet *HTTPMethodsEncodingParametersInURI; // @synthesize HTTPMethodsEncodingParametersInURI=_HTTPMethodsEncodingParametersInURI;
@property(nonatomic) unsigned int stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;
- (id)multipartFormRequestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3;
- (void)setQueryStringSerializationWithBlock:(CDUnknownBlockType)arg1;
- (void)setQueryStringSerializationWithStyle:(unsigned int)arg1;
- (void)clearAuthorizationHeader;
- (void)setAuthorizationHeaderFieldWithToken:(id)arg1;
- (void)setAuthorizationHeaderFieldWithUsername:(id)arg1 password:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(readonly, nonatomic) NSDictionary *HTTPRequestHeaders;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

