//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaLangComparable.h"

@class NSString;

@interface OrgJodaTimeDurationField : NSObject <JavaLangComparable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)init;
@property(readonly, copy) NSString *description;
- (long long)getDifferenceAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getDifferenceWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)subtractWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)subtractWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)getMillisWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)getMillisWithInt:(int)arg1 withLong:(long long)arg2;
- (long long)getMillisWithLong:(long long)arg1;
- (long long)getMillisWithInt:(int)arg1;
- (long long)getValueAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getValueWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)getValueAsLongWithLong:(long long)arg1;
- (int)getValueWithLong:(long long)arg1;
- (long long)getUnitMillis;
- (BOOL)isPrecise;
- (BOOL)isSupported;
- (id)getName;
- (id)getType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

