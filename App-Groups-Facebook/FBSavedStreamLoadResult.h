//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBStreamLoadResult.h"

@class FBMemUserSavedItemsConnection;

@interface FBSavedStreamLoadResult : FBStreamLoadResult
{
    FBMemUserSavedItemsConnection *_connectionPage;
}

@property(readonly, nonatomic) FBMemUserSavedItemsConnection *connectionPage; // @synthesize connectionPage=_connectionPage;
- (void).cxx_destruct;
- (id)initWithStartCursor:(id)arg1 endCursor:(id)arg2 hasNextPage:(BOOL)arg3 connectionPage:(id)arg4;

@end

