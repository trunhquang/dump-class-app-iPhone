//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBDiskCache;

@interface FBUIKitRenderedImageCache : NSObject
{
    FBDiskCache *_cache;
}

+ (id)sharedRenderedImageCache;
- (void).cxx_destruct;
- (id)__cacheKeyForImageNamed:(id)arg1 withColor:(id)arg2;
- (void)asynchronouslySetRenderedImage:(id)arg1 forName:(id)arg2 color:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)synchronouslySetRenderedImage:(id)arg1 forName:(id)arg2 color:(id)arg3;
- (id)renderedImageForName:(id)arg1 color:(id)arg2;
- (id)init;

@end

