//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleCommonCollectImmutableList, NSString;

@interface ComGoogleAppsXplatSqlSqlIndex : NSObject
{
    NSString *name_;
    BOOL isUnique_;
    ComGoogleCommonCollectImmutableList *orderingExps_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getTableName;
- (id)getOrderingExps;
- (BOOL)isUnique;
- (id)getName;
- (id)initWithNSString:(id)arg1 withBoolean:(BOOL)arg2 withComGoogleCommonCollectImmutableList:(id)arg3;

@end

