//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAnnouncerBase : NSObject
{
    struct shared_ptr<const std::__1::vector<__weak id, std::__1::allocator<__weak id>>> _listenerVector;
    struct Mutex _listenerAddRemoveLock;
}

- (id).cxx_construct;
- (void).cxx_destruct;

@end

