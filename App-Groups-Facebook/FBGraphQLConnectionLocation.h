//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBValueObject.h"

#import "FBGraphQLConnectionLocationInterface.h"
#import "NSCopying.h"

@class FBGraphQLConnectionCursor, NSString;

@interface FBGraphQLConnectionLocation : FBValueObject <FBGraphQLConnectionLocationInterface, NSCopying>
{
    BOOL _hasAnotherPage;
    FBGraphQLConnectionCursor *_cursor;
    int _loadingStatus;
    unsigned int _requestedCount;
}

@property(readonly, nonatomic) unsigned int requestedCount; // @synthesize requestedCount=_requestedCount;
@property(readonly, nonatomic) int loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(readonly, nonatomic) BOOL hasAnotherPage; // @synthesize hasAnotherPage=_hasAnotherPage;
@property(readonly, copy, nonatomic) FBGraphQLConnectionCursor *cursor; // @synthesize cursor=_cursor;
- (void).cxx_destruct;
- (id)initWithCursor:(id)arg1 hasAnotherPage:(BOOL)arg2 loadingStatus:(int)arg3 requestedCount:(unsigned int)arg4;
@property(readonly, nonatomic) BOOL isLoading;
@property(readonly, nonatomic) FBGraphQLConnectionCursor *connectionCursor;
- (BOOL)isEquivalentToLocation:(id)arg1;
- (BOOL)isEquivalentToStoreLocation:(id)arg1;
- (id)locationWithDecrementedRequestedCount;
- (id)locationWithIncrementedRequestedCount;
- (id)locationWithUpdatedRequestedCount:(unsigned int)arg1;
- (id)locationWithUpdatedLoadingStatus:(int)arg1;
- (id)locationWithUpdatedHasAnotherPage:(BOOL)arg1;
- (id)initWithStoreLocation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

