//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBLigerUtils : NSObject
{
}

+ (id)redirectRequestFromRequest:(id)arg1 withNewLocation:(id)arg2 status:(int)arg3;
+ (id)dictionaryForMap:(map_5a58ff85)arg1;
+ (BOOL)shouldAllowCloudFrontUrls:(id)arg1 cloudFrontUrlsAllowed:(BOOL)arg2;
+ (BOOL)shouldAllowRequest:(id)arg1 allRequestsAllowed:(BOOL)arg2;
+ (unique_ptr_3d2dd75c)prepareRequest:(id)arg1 priorityCalback:(CDUnknownBlockType)arg2;
+ (id)transformResponse:(const struct HTTPResponse *)arg1 andUrl:(id)arg2;
+ (id)removeIPFromURL:(id)arg1 withHeaders:(id)arg2;

@end

