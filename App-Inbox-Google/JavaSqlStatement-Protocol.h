//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangAutoCloseable.h"
#import "JavaObject.h"
#import "JavaSqlWrapper.h"
#import "NSObject.h"

@class IOSIntArray, IOSObjectArray, JavaSqlSQLWarning, NSString;

@protocol JavaSqlStatement <JavaSqlWrapper, JavaLangAutoCloseable, NSObject, JavaObject>
- (BOOL)isPoolable;
- (void)setPoolableWithBoolean:(BOOL)arg1;
- (BOOL)isClosed;
- (void)setQueryTimeoutWithInt:(int)arg1;
- (void)setMaxRowsWithInt:(int)arg1;
- (void)setMaxFieldSizeWithInt:(int)arg1;
- (void)setFetchSizeWithInt:(int)arg1;
- (void)setFetchDirectionWithInt:(int)arg1;
- (void)setEscapeProcessingWithBoolean:(BOOL)arg1;
- (void)setCursorNameWithNSString:(NSString *)arg1;
- (JavaSqlSQLWarning *)getWarnings;
- (int)getUpdateCount;
- (int)getResultSetType;
- (int)getResultSetHoldability;
- (int)getResultSetConcurrency;
- (id <JavaSqlResultSet>)getResultSet;
- (int)getQueryTimeout;
- (BOOL)getMoreResultsWithInt:(int)arg1;
- (BOOL)getMoreResults;
- (int)getMaxRows;
- (int)getMaxFieldSize;
- (id <JavaSqlResultSet>)getGeneratedKeys;
- (int)getFetchSize;
- (int)getFetchDirection;
- (id <JavaSqlConnection>)getConnection;
- (int)executeUpdateWithNSString:(NSString *)arg1 withNSStringArray:(IOSObjectArray *)arg2;
- (int)executeUpdateWithNSString:(NSString *)arg1 withIntArray:(IOSIntArray *)arg2;
- (int)executeUpdateWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (int)executeUpdateWithNSString:(NSString *)arg1;
- (id <JavaSqlResultSet>)executeQueryWithNSString:(NSString *)arg1;
- (IOSIntArray *)executeBatch;
- (BOOL)executeWithNSString:(NSString *)arg1 withNSStringArray:(IOSObjectArray *)arg2;
- (BOOL)executeWithNSString:(NSString *)arg1 withIntArray:(IOSIntArray *)arg2;
- (BOOL)executeWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (BOOL)executeWithNSString:(NSString *)arg1;
- (void)close;
- (void)clearWarnings;
- (void)clearBatch;
- (void)cancel;
- (void)addBatchWithNSString:(NSString *)arg1;
@end

