//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AndroidTextTextUtils : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)unpackRangeEndFromLongWithLong:(long long)arg1;
+ (int)unpackRangeStartFromLongWithLong:(long long)arg1;
+ (long long)packRangeInLongWithInt:(int)arg1 withInt:(int)arg2;
+ (id)removeEmptySpansWithNSObjectArray:(id)arg1 withAndroidTextSpanned:(id)arg2 withIOSClass:(id)arg3;
+ (BOOL)delimitedStringContainsWithNSString:(id)arg1 withChar:(unsigned short)arg2 withNSString:(id)arg3;
+ (int)getCapsModeWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (BOOL)isPrintableAsciiOnlyWithJavaLangCharSequence:(id)arg1;
+ (BOOL)isPrintableAsciiWithChar:(unsigned short)arg1;
+ (BOOL)isDigitsOnlyWithJavaLangCharSequence:(id)arg1;
+ (BOOL)isGraphicWithChar:(unsigned short)arg1;
+ (BOOL)isGraphicWithJavaLangCharSequence:(id)arg1;
+ (id)concatWithJavaLangCharSequenceArray:(id)arg1;
+ (id)htmlEncodeWithNSString:(id)arg1;
+ (void)recycleWithCharArray:(id)arg1;
+ (id)obtainWithInt:(int)arg1;
+ (BOOL)doesNotNeedBidiWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (BOOL)doesNotNeedBidiWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (void)copySpansFromWithAndroidTextSpanned:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withIOSClass:(id)arg4 withAndroidTextSpannable:(id)arg5 withInt:(int)arg6;
+ (int)getOffsetAfterWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
+ (int)getOffsetBeforeWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
+ (id)expandTemplateWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequenceArray:(id)arg2;
+ (void)dumpSpansWithJavaLangCharSequence:(id)arg1 withAndroidUtilPrinter:(id)arg2 withNSString:(id)arg3;
+ (BOOL)equalsWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequence:(id)arg2;
+ (int)getTrimmedLengthWithJavaLangCharSequence:(id)arg1;
+ (BOOL)isEmptyWithJavaLangCharSequence:(id)arg1;
+ (id)stringOrSpannedStringWithJavaLangCharSequence:(id)arg1;
+ (id)splitWithNSString:(id)arg1 withJavaUtilRegexPattern:(id)arg2;
+ (id)splitWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)joinWithJavaLangCharSequence:(id)arg1 withJavaLangIterable:(id)arg2;
+ (id)joinWithJavaLangCharSequence:(id)arg1 withNSObjectArray:(id)arg2;
+ (id)joinWithJavaLangIterable:(id)arg1;
+ (id)substringWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (BOOL)regionMatchesWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withJavaLangCharSequence:(id)arg3 withInt:(int)arg4 withInt:(int)arg5;
+ (int)indexOfWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequence:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (int)indexOfWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequence:(id)arg2 withInt:(int)arg3;
+ (int)indexOfWithJavaLangCharSequence:(id)arg1 withJavaLangCharSequence:(id)arg2;
+ (int)lastIndexOfWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (int)lastIndexOfWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2 withInt:(int)arg3;
+ (int)lastIndexOfWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
+ (int)indexOfWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (int)indexOfWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2 withInt:(int)arg3;
+ (int)indexOfWithJavaLangCharSequence:(id)arg1 withChar:(unsigned short)arg2;
+ (void)getCharsWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withCharArray:(id)arg4 withInt:(int)arg5;
- (id)init;

@end

