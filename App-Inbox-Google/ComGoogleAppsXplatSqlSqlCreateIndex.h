//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlWrite.h"

@class ComGoogleAppsXplatSqlSqlIndex;

@interface ComGoogleAppsXplatSqlSqlCreateIndex : ComGoogleAppsXplatSqlSqlWrite
{
    ComGoogleAppsXplatSqlSqlIndex *index_;
    BOOL ifNotExists_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)acceptWithComGoogleAppsXplatSqlSqlStatementVisitor:(id)arg1;
- (BOOL)isIfNotExists;
- (id)getIndex;
- (id)initWithComGoogleAppsXplatSqlSqlIndex:(id)arg1 withBoolean:(BOOL)arg2;

@end

