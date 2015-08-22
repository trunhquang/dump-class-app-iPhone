//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface OffsiteServiceResult : NSObject <TBase, NSCoding>
{
    NSMutableArray *__results;
    NSString *__host;
    long long __time;
    int __checkLevel;
    BOOL __results_isset;
    BOOL __host_isset;
    BOOL __time_isset;
    BOOL __checkLevel_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetCheckLevel;
- (BOOL)checkLevelIsSet;
@property(nonatomic, getter=checkLevel, setter=setCheckLevel:) int checkLevel;
- (void)unsetTime;
- (BOOL)timeIsSet;
@property(nonatomic, getter=time, setter=setTime:) long long time;
- (void)unsetHost;
- (BOOL)hostIsSet;
@property(retain, nonatomic, getter=host, setter=setHost:) NSString *host;
- (void)unsetResults;
- (BOOL)resultsIsSet;
@property(retain, nonatomic, getter=results, setter=setResults:) NSMutableArray *results;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 host:(id)arg2 time:(long long)arg3 checkLevel:(int)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
