//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"

@class IOSObjectArray, NSString;

@protocol ComGoogleCumulusCommonMetric2SysTraceService <NSObject, JavaObject>
- (void)stopTraceWithNSString:(NSString *)arg1;
- (void)startTraceWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSObjectArray:(IOSObjectArray *)arg3;
- (void)startTraceWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (BOOL)isEnabled;
@end

