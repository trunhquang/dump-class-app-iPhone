//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCumulusCommonNetProto_Request;

@interface ComGoogleAppsBigtopDataNetworkSyncServerRequester : NSObject
{
    id <ComGoogleAppsBigtopDataNetworkNetworkTransport> networkTransport_;
    ComGoogleCumulusCommonNetProto_Request *defaultRequest_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithComGoogleAppsBigtopDataNetworkNetworkTransport_withComGoogleCumulusCommonNetProto_Request_;
+ (id)__annotations;
- (void)dealloc;
- (id)doRequestWithComGoogleCumulusCommonNetProto_Request:(id)arg1;
- (id)initWithComGoogleAppsBigtopDataNetworkNetworkTransport:(id)arg1 withComGoogleCumulusCommonNetProto_Request:(id)arg2;

@end

