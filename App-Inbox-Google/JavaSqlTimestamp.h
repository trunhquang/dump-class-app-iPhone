//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilDate.h"

@interface JavaSqlTimestamp : JavaUtilDate
{
    int nanos_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithInt_withInt_withInt_withInt_withInt_withInt_withInt_;
+ (id)badTimestampStringWithNSString:(id)arg1;
+ (id)valueOfWithNSString:(id)arg1;
- (void)formatWithInt:(int)arg1 withInt:(int)arg2 withJavaLangStringBuilder:(id)arg3;
- (id)description;
- (void)setTimeImplWithLong:(long long)arg1;
- (void)setTimeWithLong:(long long)arg1;
- (void)setNanosWithInt:(int)arg1;
- (long long)getTime;
- (int)getNanos;
- (BOOL)equalsWithJavaSqlTimestamp:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)compareToWithJavaSqlTimestamp:(id)arg1;
- (int)compareToWithId:(id)arg1;
- (BOOL)beforeWithJavaSqlTimestamp:(id)arg1;
- (BOOL)afterWithJavaSqlTimestamp:(id)arg1;
- (id)initWithLong:(long long)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7;

@end

