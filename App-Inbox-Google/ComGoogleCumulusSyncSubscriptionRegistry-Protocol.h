//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusQueryQueryProto_Query, NSString;

@protocol ComGoogleCumulusSyncSubscriptionRegistry <NSObject, JavaObject>
- (id <JavaUtilCollection>)getQueries;
- (ComGoogleCumulusQueryQueryProto_Query *)getQueryWithNSString:(NSString *)arg1;
- (BOOL)hasQueryWithNSString:(NSString *)arg1;
@end

