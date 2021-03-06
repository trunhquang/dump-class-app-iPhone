//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBExperimentCache.h"

@class FBExperimentManager;

@interface FBFeedComponentExperimentCache : NSObject <FBExperimentCache>
{
    FBExperimentManager *_experimentManager;
    struct unordered_map<__unsafe_unretained Class, FBFeedComponentExperimentCacheContext, FB::HashFunctor<__unsafe_unretained Class>, FB::EqualFunctor<__unsafe_unretained Class>, std::__1::allocator<std::__1::pair<const __unsafe_unretained Class, FBFeedComponentExperimentCacheContext>>> _experimentMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)isGKEnabled:(id)arg1;
- (id)experimentContextWithClass:(Class)arg1;
- (id)autoExposedExperimentContextWithClass:(Class)arg1;
- (id)initWithExperimentManager:(id)arg1 experiments:(const vector_e25fc222 *)arg2;

@end

