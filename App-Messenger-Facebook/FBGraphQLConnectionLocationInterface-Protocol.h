//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBGraphQLConnectionCursor;

@protocol FBGraphQLConnectionLocationInterface <NSObject>
@property(readonly, nonatomic) BOOL isLoading;
@property(readonly, nonatomic) BOOL hasAnotherPage;
@property(readonly, nonatomic) FBGraphQLConnectionCursor *connectionCursor;
@end
