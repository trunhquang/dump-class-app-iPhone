//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleAppsXplatSqlSqliteAbstractSqliteModule.h"

@class NSString;

@interface ComGoogleAppsXplatSqlSqliteIosIosSqliteModule : ComGoogleAppsXplatSqlSqliteAbstractSqliteModule
{
    NSString *databaseFileName_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_provideSqlitePlatformAdaptorWithComGoogleAppsXplatSqlSqliteIosIosPlatformAdaptor_;
+ (id)__annotations_provideReadOnlyIosContext;
+ (id)__annotations_provideWritableIosContext;
+ (id)__annotations;
- (void)dealloc;
- (id)errorMsgWithLong:(long long)arg1;
- (id)exceptionForErrorWithLong:(long long)arg1 withNSString:(id)arg2;
- (long long)openConnectionWithNSString:(id)arg1;
- (id)provideSqlitePlatformAdaptorWithComGoogleAppsXplatSqlSqliteIosIosPlatformAdaptor:(id)arg1;
- (id)provideReadOnlyIosContext;
- (id)provideWritableIosContext;
- (id)initWithNSString:(id)arg1;

@end

