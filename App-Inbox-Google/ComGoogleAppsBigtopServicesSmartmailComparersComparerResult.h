//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ComGoogleAppsBigtopServicesSmartmailComparersComparerResult : NSObject
{
    int matches_;
    int compared_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)fromBooleanWithBoolean:(BOOL)arg1;
+ (id)falseResult;
- (id)init;
- (BOOL)isPartialMatch;
- (BOOL)isStrictPartialMatch;
- (BOOL)isExactMatch;
- (BOOL)isMatchWithComGoogleAppsBigtopServicesSmartmailComparersComparerResult_MatchTypeEnum:(id)arg1;
- (id)addWithBoolean:(BOOL)arg1;
- (id)addWithComGoogleAppsBigtopServicesSmartmailComparersComparerResult:(id)arg1;

@end

