//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASICacheDelegate.h"

@class NSRecursiveLock, NSString;

@interface ASIDownloadCache : NSObject <ASICacheDelegate>
{
    int defaultCachePolicy;
    NSString *storagePath;
    NSRecursiveLock *accessLock;
    BOOL shouldRespectCacheControlHeaders;
}

+ (id)keyForURL:(id)arg1;
+ (BOOL)serverAllowsResponseCachingForRequest:(id)arg1;
+ (id)fileExtensionsToHandleAsHTML;
+ (id)sharedCache;
+ (void)initialize;
@property BOOL shouldRespectCacheControlHeaders; // @synthesize shouldRespectCacheControlHeaders;
@property(retain) NSRecursiveLock *accessLock; // @synthesize accessLock;
- (BOOL)canUseCachedDataForRequest:(id)arg1;
- (void)clearCachedResponsesForStoragePolicy:(int)arg1;
@property(nonatomic) int defaultCachePolicy; // @synthesize defaultCachePolicy;
- (BOOL)isCachedDataCurrentForRequest:(id)arg1;
- (void)removeCachedDataForRequest:(id)arg1;
- (void)removeCachedDataForURL:(id)arg1;
- (id)pathToStoreCachedResponseHeadersForRequest:(id)arg1;
- (id)pathToStoreCachedResponseDataForRequest:(id)arg1;
- (id)pathToFile:(id)arg1;
- (id)pathToCachedResponseHeadersForURL:(id)arg1;
- (id)pathToCachedResponseDataForURL:(id)arg1;
- (id)cachedResponseDataForURL:(id)arg1;
- (id)cachedResponseHeadersForURL:(id)arg1;
- (void)storeResponseForRequest:(id)arg1 maxAge:(double)arg2;
- (id)expiryDateForRequest:(id)arg1 maxAge:(double)arg2;
- (void)updateExpiryForRequest:(id)arg1 maxAge:(double)arg2;
@property(retain, nonatomic) NSString *storagePath; // @synthesize storagePath;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

