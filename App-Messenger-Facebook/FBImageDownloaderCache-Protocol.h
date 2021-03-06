//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBCachedImage, NSData, NSObject<OS_dispatch_queue>, NSURL;

@protocol FBImageDownloaderCache <NSObject>
- (unsigned int)inMemoryCacheLimit;
- (void)clear:(void (^)(unsigned int, NSString *, NSString *))arg1;
- (CDStruct_f47ad830)cacheStatistics;
- (void)cacheImage:(FBCachedImage *)arg1 serializedImage:(NSData *)arg2 forURL:(NSURL *)arg3 cacheType:(unsigned int)arg4 callbackQueue:(NSObject<OS_dispatch_queue> *)arg5 completionBlock:(void (^)(NSError *))arg6;
- (void)fetchCachedImageForURL:(NSURL *)arg1 callbackQueue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(void (^)(FBCachedImage *, NSData *, unsigned int))arg3;
@end

