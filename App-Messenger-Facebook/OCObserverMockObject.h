//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface OCObserverMockObject : NSObject
{
    BOOL expectationOrderMatters;
    NSMutableArray *recorders;
}

- (void)handleNotification:(id)arg1;
- (void)verify;
- (id)expect;
- (void)setExpectationOrderMatters:(BOOL)arg1;
- (id)description;
- (void)dealloc;
- (id)init;

@end

