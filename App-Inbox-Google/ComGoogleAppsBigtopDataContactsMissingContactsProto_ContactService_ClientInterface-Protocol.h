//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleAppsBigtopDataContactsContactsProto_AutocompleteContactsRequest, ComGoogleAppsBigtopDataContactsContactsProto_GetContactsByEmailRequest, ComGoogleAppsXplatRpcRpcClientContext;

@protocol ComGoogleAppsBigtopDataContactsMissingContactsProto_ContactService_ClientInterface <NSObject, JavaObject>
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)autocompleteContactsWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataContactsContactsProto_AutocompleteContactsRequest:(ComGoogleAppsBigtopDataContactsContactsProto_AutocompleteContactsRequest *)arg2;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getContactsByEmailWithComGoogleAppsXplatRpcRpcClientContext:(ComGoogleAppsXplatRpcRpcClientContext *)arg1 withComGoogleAppsBigtopDataContactsContactsProto_GetContactsByEmailRequest:(ComGoogleAppsBigtopDataContactsContactsProto_GetContactsByEmailRequest *)arg2;
@end

