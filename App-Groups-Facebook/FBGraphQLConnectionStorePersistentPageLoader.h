//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLConnectionStorePersistentCache, NSString, _FBGraphQLConnectionStorePersistentPageLoaderQueue;

@interface FBGraphQLConnectionStorePersistentPageLoader : NSObject
{
    FBGraphQLConnectionStorePersistentCache *_persistentCache;
    NSString *_persistentCacheKey;
    int _options;
    _FBGraphQLConnectionStorePersistentPageLoaderQueue *_workQueue;
}

- (void).cxx_destruct;
- (void)persistPages:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadPagesBeginningAtStartCursor:(id)arg1 maxNumberOfPagesToLoad:(unsigned int)arg2 pageHandler:(CDUnknownBlockType)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithPersistentCache:(id)arg1 uniqueIdentifier:(id)arg2 options:(int)arg3;

@end

