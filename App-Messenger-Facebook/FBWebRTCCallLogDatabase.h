//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EGODatabase, NSDictionary, NSString;

@interface FBWebRTCCallLogDatabase : NSObject
{
    NSString *_dbPath;
    EGODatabase *_db;
    NSDictionary *_dbStatements;
}

+ (BOOL)isDatabasePotentiallyCorrupt:(id)arg1;
- (void).cxx_destruct;
- (id)_dbError;
- (id)_executeQuery:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)_createTables;
- (void)_discardStore;
- (BOOL)_executeUpdate:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (int)_checkDatabase;
- (void)_createDBStatements;
- (id)_openDB;
- (id)queryRecentCallsMaxCount:(unsigned int)arg1;
- (id)queryRecentCallsForUserID:(id)arg1 maxCount:(unsigned int)arg2;
- (id)queryRecentCallersMaxCount:(unsigned int)arg1;
- (id)deleteCallsBeforeTime:(id)arg1;
- (id)addCall:(id)arg1;
- (id)rebuildAndOpenDatabase;
- (BOOL)checkIntegrity;
@property(readonly, nonatomic) BOOL isOpen;
- (void)close;
- (id)open;
- (void)dealloc;
- (id)initWithDatabasePath:(id)arg1;

@end
