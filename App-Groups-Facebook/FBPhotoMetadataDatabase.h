//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue;

@interface FBPhotoMetadataDatabase : NSObject
{
    struct sqlite3 *_db;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_requestIdentifierToSummaryMappingForProperty:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2 useDouble:(BOOL)arg3;
- (void)requestIdentifierToSummaryMappingWithcompletion:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2 useDouble:(BOOL)arg3;
- (void)requestIdentifierToDoubleSummaryMappingForProperty:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestIdentifierToIntegerSummaryMappingForProperty:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_requestDataForIdentifier:(id)arg1 andProperty:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestDataForIdentifier:(id)arg1 andProperty:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_writeRow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeRow:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct sqlite3 *)_openDbWithPath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

