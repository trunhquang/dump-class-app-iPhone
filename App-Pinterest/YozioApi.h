//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YozioApi : NSObject
{
}

+ (id)buildApiUrl:(id)arg1;
+ (id)buildPostBody:(id)arg1;
+ (void)postCompletionHandlerWithData:(id)arg1 andResponse:(id)arg2 andNSError:(id)arg3 andCallback:(CDUnknownBlockType)arg4;
+ (void)httpRequestWithUrl:(id)arg1 andPostParams:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
+ (void)trackDeeplink:(id)arg1;
+ (void)appInstallGetMetaDataWithCallback:(CDUnknownBlockType)arg1;

@end

