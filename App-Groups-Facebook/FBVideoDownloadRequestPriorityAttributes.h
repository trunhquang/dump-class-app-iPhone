//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBScenePath;

@interface FBVideoDownloadRequestPriorityAttributes : NSObject
{
    FBScenePath *_scenePath;
    int _priority;
}

@property(readonly, nonatomic) int priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) FBScenePath *scenePath; // @synthesize scenePath=_scenePath;
- (void).cxx_destruct;
- (id)initWithScenePath:(id)arg1 priority:(int)arg2;
- (id)init;

@end

