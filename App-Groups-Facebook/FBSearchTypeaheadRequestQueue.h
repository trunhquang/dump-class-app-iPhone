//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface FBSearchTypeaheadRequestQueue : NSObject
{
    NSMutableArray *_internalQueue;
    unsigned int _capacity;
    struct Mutex _spinLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)drainQueue;
- (BOOL)removeRequest:(id)arg1 isLast:(char *)arg2;
- (void)enqueueRequest:(id)arg1;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;

@end

