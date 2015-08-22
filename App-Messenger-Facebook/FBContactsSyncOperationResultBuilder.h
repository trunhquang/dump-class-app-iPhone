//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBContactsFetchContext, NSArray;

@interface FBContactsSyncOperationResultBuilder : NSObject
{
    NSArray *_syncEvents;
    FBContactsFetchContext *_context;
    BOOL _shouldFetchMoreContacts;
}

+ (id)contactsSyncOperationResultFromExistingContactsSyncOperationResult:(id)arg1;
+ (id)contactsSyncOperationResult;
- (void).cxx_destruct;
- (id)withShouldFetchMoreContacts:(BOOL)arg1;
- (id)withContext:(id)arg1;
- (id)withSyncEvents:(id)arg1;
- (id)build;

@end
