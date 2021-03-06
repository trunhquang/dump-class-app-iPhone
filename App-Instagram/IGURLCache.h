//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLCache.h"

@class IGCache;

@interface IGURLCache : NSURLCache
{
    CDUnknownBlockType _cacheDeletionBlock;
    IGCache *_backingCache;
}

+ (void)storeCachedResponse:(id)arg1 forURL:(id)arg2;
+ (void)cachedResponseForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)cachedResponseForURL:(id)arg1;
+ (id)cacheKeyForURL:(id)arg1;
+ (BOOL)containsCachedResponseForURL:(id)arg1;
@property(retain, nonatomic) IGCache *backingCache; // @synthesize backingCache=_backingCache;
@property(copy, nonatomic) CDUnknownBlockType cacheDeletionBlock; // @synthesize cacheDeletionBlock=_cacheDeletionBlock;
- (void).cxx_destruct;
- (void)removeCachedResponseForURL:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forURL:(id)arg2;
- (void)cachedResponseForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)cachedResponseForURL:(id)arg1;
- (BOOL)containsCachedResponseForURL:(id)arg1;
- (void)removeAllCachedResponses;
- (void)removeCachedResponseForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;
- (id)initWithMemoryCapacity:(unsigned int)arg1 diskCapacity:(unsigned int)arg2 diskPath:(id)arg3;
- (id)initWithName:(id)arg1 memoryCapacity:(unsigned int)arg2 diskCapacity:(unsigned int)arg3 maxObjectCount:(unsigned int)arg4;

@end

