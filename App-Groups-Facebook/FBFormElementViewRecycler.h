//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FBFormElementViewRecycler : NSObject
{
    NSMutableDictionary *_reusableViews;
}

- (void).cxx_destruct;
- (id)dequeueViewWithReuseID:(id)arg1;
- (BOOL)enqueueView:(id)arg1 withElement:(id)arg2;
- (id)init;

@end

