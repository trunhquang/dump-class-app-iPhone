//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsXplatSqlSqlExp, ComGoogleCommonCollectImmutableList;

@interface ComGoogleAppsXplatSqlSqlQuery_Builder : NSObject
{
    id <JavaUtilList> selection_;
    id <JavaUtilList> from_;
    ComGoogleAppsXplatSqlSqlExp *where_;
    id <JavaUtilList> groupBy_;
    id <JavaUtilList> orderBy_;
    ComGoogleAppsXplatSqlSqlExp *limit_;
    ComGoogleCommonCollectImmutableList *allParams_;
    int lastSetIndex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_allParams_;
+ (id)__annotations_limit_;
+ (id)__annotations_where_;
- (void)dealloc;
- (id)build;
- (id)limitWithComGoogleAppsXplatSqlSqlExp:(id)arg1;
- (id)orderByWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;
- (id)groupByWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;
- (id)whereWithComGoogleAppsXplatSqlSqlExp:(id)arg1;
- (id)fromWithComGoogleAppsXplatSqlSqlTableDefArray:(id)arg1;
- (id)selectWithJavaLangIterable:(id)arg1;
- (id)selectWithComGoogleAppsXplatSqlSqlExpArray:(id)arg1;
- (id)init;

@end

