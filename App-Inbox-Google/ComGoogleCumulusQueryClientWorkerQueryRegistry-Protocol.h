//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusQueryQueryRegistry.h"
#import "JavaObject.h"
#import "NSObject.h"

@class ComGoogleCumulusQueryQueryProto_Result, NSString;

@protocol ComGoogleCumulusQueryClientWorkerQueryRegistry <ComGoogleCumulusQueryQueryRegistry, NSObject, JavaObject>
- (BOOL)shouldDropRemoteQueryResultWithNSString:(NSString *)arg1;
- (void)doneProcessingWithNSString:(NSString *)arg1;
- (void)markForProcessingWithNSString:(NSString *)arg1;
- (void)markForRequeryWithNSString:(NSString *)arg1 withBoolean:(BOOL)arg2;
- (void)markForRetryWithNSString:(NSString *)arg1;
- (void)markAllForRetry;
- (BOOL)hasPendingQueries;
- (id <JavaUtilCollection>)getPendingQueries;
- (void)updateQueryPriorityWithNSString:(NSString *)arg1 withInt:(int)arg2;
- (id <JavaUtilCollection>)getContinuousQueries;
- (void)acknowledgePageWithComGoogleCumulusQueryQueryProto_Result:(ComGoogleCumulusQueryQueryProto_Result *)arg1;
- (void)acknowledgeQueryWithComGoogleCumulusQueryQueryProto_Result:(ComGoogleCumulusQueryQueryProto_Result *)arg1;
- (BOOL)isPendingWithNSString:(NSString *)arg1;
- (void)markPendingWithNSString:(NSString *)arg1;
@end

