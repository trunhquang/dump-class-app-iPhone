//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqlExp.h"

@class ComGoogleAppsXplatSqlSqlParam, ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsXplatSqlSqlColumnDef : ComGoogleAppsXplatSqlSqlExp
{
    NSString *tableName_;
    NSString *columnName_;
    ComGoogleCommonCollectImmutableList *constraints_;
    ComGoogleAppsXplatSqlSqlParam *defaultParam_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)createWithNSString:(id)arg1 withNSString:(id)arg2 withComGoogleAppsXplatSqlSqlType:(id)arg3 withComGoogleCommonCollectImmutableList:(id)arg4;
- (void)dealloc;
- (id)getForeignKeyConstraints;
- (id)acceptWithComGoogleAppsXplatSqlSqlExpVisitor:(id)arg1;
- (id)descOrder;
- (id)ascOrder;
- (id)defaultOrder;
- (BOOL)isPrimaryKey;
- (id)description;
- (id)isWithId:(id)arg1;
- (id)createParam;
- (id)getParam;
- (id)getConstraints;
- (id)getName;
- (id)getColumnName;
- (id)getTableName;
- (id)initWithNSString:(id)arg1 withNSString:(id)arg2 withComGoogleAppsXplatSqlSqlType:(id)arg3 withComGoogleCommonCollectImmutableList:(id)arg4 withComGoogleAppsXplatSqlSqlParam:(id)arg5;

@end

