//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGDataLayerPersistentStore.h"

@class NSOperationQueue, NSString;

@interface TAGDataLayerPersistentStoreImpl : NSObject <TAGDataLayerPersistentStore>
{
    NSString *_databaseName;
    unsigned int _maxNumStoredItems;
    NSOperationQueue *_operationQueue;
    struct sqlite3 *_database;
    struct sqlite3_stmt *_insertAnEntryStmt;
    struct sqlite3_stmt *_queryNumberEntriesStmt;
    struct sqlite3_stmt *_queryAllEntriesStmt;
    struct sqlite3_stmt *_queryEntryIdsStmt;
    struct sqlite3_stmt *_deleteOlderThanStmt;
}

@property struct sqlite3_stmt *deleteOlderThanStmt; // @synthesize deleteOlderThanStmt=_deleteOlderThanStmt;
@property struct sqlite3_stmt *queryEntryIdsStmt; // @synthesize queryEntryIdsStmt=_queryEntryIdsStmt;
@property struct sqlite3_stmt *queryAllEntriesStmt; // @synthesize queryAllEntriesStmt=_queryAllEntriesStmt;
@property struct sqlite3_stmt *queryNumberEntriesStmt; // @synthesize queryNumberEntriesStmt=_queryNumberEntriesStmt;
@property struct sqlite3_stmt *insertAnEntryStmt; // @synthesize insertAnEntryStmt=_insertAnEntryStmt;
@property struct sqlite3 *database; // @synthesize database=_database;
@property(readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property unsigned int maxNumStoredItems; // @synthesize maxNumStoredItems=_maxNumStoredItems;
@property(readonly) NSString *databaseName; // @synthesize databaseName=_databaseName;
- (void).cxx_destruct;
- (double)currentTimeInMilliseconds;
- (void)closeDatabase;
- (BOOL)openDatabaseAndInitStatements;
- (struct sqlite3_stmt *)prepareSql:(id)arg1 description:(id)arg2;
- (BOOL)tablePresent:(id)arg1;
- (void)deleteEntriesOlderThan:(unsigned long long)arg1;
- (id)questionMarks:(unsigned int)arg1;
- (unsigned int)numStoredEntries;
- (id)peekEntryIds:(unsigned int)arg1;
- (void)deleteEntries:(id)arg1;
- (void)makeRoomForEntries:(unsigned int)arg1;
- (void)writeEntriesToDatabase:(id)arg1 expireTime:(unsigned long long)arg2;
- (id)loadSerialized;
- (id)serialize:(id)arg1;
- (id)unserialize:(id)arg1;
- (id)serializeValues:(id)arg1;
- (id)unserializeValues:(id)arg1;
- (void)clearKeysWithPrefixSingleThreaded:(id)arg1;
- (void)saveSingleThreaded:(id)arg1 lifetimeInMillis:(unsigned long long)arg2;
- (id)loadSingleThreaded;
- (void)clearKeysWithPrefix:(id)arg1;
- (void)loadSaved:(id)arg1;
- (void)saveKeyValues:(id)arg1 lifetimeInMillis:(unsigned long long)arg2;
- (void)dealloc;
- (id)initWithDatabaseName:(id)arg1 maxNumStoredItems:(unsigned int)arg2 operationQueue:(id)arg3;
- (id)init;

@end

