//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBGraphQLFetchCacheEntry : NSObject
{
    BOOL _stale;
    id _item;
    id <FBGraphQLFetchUnit> _fetchUnit;
}

@property(readonly, nonatomic) BOOL stale; // @synthesize stale=_stale;
@property(readonly, nonatomic) id <FBGraphQLFetchUnit> fetchUnit; // @synthesize fetchUnit=_fetchUnit;
@property(readonly, nonatomic) id item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)description;
- (id)initWithItem:(id)arg1 fetchUnit:(id)arg2 stale:(BOOL)arg3;

@end

