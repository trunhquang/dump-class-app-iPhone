//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ComGoogleAppsBigtopSyncQueryParseConfiguration_FieldConfig_PrefixModeEnum, IOSObjectArray, NSString;

@interface ComGoogleAppsBigtopSyncQueryParseConfiguration_FieldConfig : NSObject
{
    ComGoogleAppsBigtopSyncQueryParseConfiguration_FieldConfig_PrefixModeEnum *prefixMode_;
    NSString *name_;
    IOSObjectArray *aliases_;
    IOSObjectArray *parallelFieldQueries_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)withParallelFieldQueriesWithNSStringArray:(id)arg1;
- (id)withAliasesWithNSStringArray:(id)arg1;
- (id)setPrefixModeWithComGoogleAppsBigtopSyncQueryParseConfiguration_FieldConfig_PrefixModeEnum:(id)arg1;
- (id)initWithNSString:(id)arg1 withComGoogleAppsBigtopSyncQueryParseConfiguration_FieldConfig_PrefixModeEnum:(id)arg2 withNSStringArray:(id)arg3 withNSStringArray:(id)arg4;
- (id)initWithNSString:(id)arg1;

@end

