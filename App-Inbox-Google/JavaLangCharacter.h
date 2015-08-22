//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"

@class NSString;

@interface JavaLangCharacter : NSObject <JavaIoSerializable, JavaLangComparable>
{
    unsigned short value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_isSpaceWithChar_;
+ (id)__annotations_isJavaLetterOrDigitWithChar_;
+ (id)__annotations_isJavaLetterWithChar_;
+ (void)initialize;
+ (int)binarySearchRangeWithIntArray:(id)arg1 withInt:(int)arg2;
+ (int)toUpperCaseWithInt:(int)arg1;
+ (unsigned short)toUpperCaseWithChar:(unsigned short)arg1;
+ (int)toTitleCaseWithInt:(int)arg1;
+ (unsigned short)toTitleCaseWithChar:(unsigned short)arg1;
+ (id)toStringWithChar:(unsigned short)arg1;
+ (int)toLowerCaseWithInt:(int)arg1;
+ (unsigned short)toLowerCaseWithChar:(unsigned short)arg1;
+ (unsigned short)reverseBytesWithChar:(unsigned short)arg1;
+ (BOOL)isWhitespaceWithInt:(int)arg1;
+ (BOOL)isWhitespaceWithChar:(unsigned short)arg1;
+ (BOOL)isUpperCaseWithInt:(int)arg1;
+ (BOOL)isUpperCaseWithChar:(unsigned short)arg1;
+ (BOOL)isUnicodeIdentifierStartWithInt:(int)arg1;
+ (BOOL)isUnicodeIdentifierStartWithChar:(unsigned short)arg1;
+ (BOOL)isUnicodeIdentifierPartWithInt:(int)arg1;
+ (BOOL)isUnicodeIdentifierPartWithChar:(unsigned short)arg1;
+ (BOOL)isTitleCaseWithInt:(int)arg1;
+ (BOOL)isTitleCaseWithChar:(unsigned short)arg1;
+ (BOOL)isSpaceCharWithInt:(int)arg1;
+ (BOOL)isSpaceCharWithChar:(unsigned short)arg1;
+ (BOOL)isSpaceWithChar:(unsigned short)arg1;
+ (BOOL)isLowerCaseWithInt:(int)arg1;
+ (BOOL)isLowerCaseWithChar:(unsigned short)arg1;
+ (BOOL)isLetterOrDigitWithInt:(int)arg1;
+ (BOOL)isLetterOrDigitWithChar:(unsigned short)arg1;
+ (BOOL)isLetterWithInt:(int)arg1;
+ (BOOL)isLetterWithChar:(unsigned short)arg1;
+ (BOOL)isJavaLetterOrDigitWithChar:(unsigned short)arg1;
+ (BOOL)isJavaLetterWithChar:(unsigned short)arg1;
+ (BOOL)isJavaIdentifierStartWithInt:(int)arg1;
+ (BOOL)isJavaIdentifierStartWithChar:(unsigned short)arg1;
+ (BOOL)isJavaIdentifierPartWithInt:(int)arg1;
+ (BOOL)isJavaIdentifierPartWithChar:(unsigned short)arg1;
+ (BOOL)isISOControlWithInt:(int)arg1;
+ (BOOL)isISOControlWithChar:(unsigned short)arg1;
+ (BOOL)isIdentifierIgnorableWithInt:(int)arg1;
+ (BOOL)isIdeographicWithInt:(int)arg1;
+ (BOOL)isIdentifierIgnorableWithChar:(unsigned short)arg1;
+ (BOOL)isDigitWithInt:(int)arg1;
+ (BOOL)isDigitWithChar:(unsigned short)arg1;
+ (BOOL)isDefinedWithInt:(int)arg1;
+ (BOOL)isDefinedWithChar:(unsigned short)arg1;
+ (BOOL)isBmpCodePointWithInt:(int)arg1;
+ (BOOL)isAlphabeticWithInt:(int)arg1;
+ (unsigned short)lowSurrogateWithInt:(int)arg1;
+ (unsigned short)highSurrogateWithInt:(int)arg1;
+ (BOOL)isMirroredWithInt:(int)arg1;
+ (BOOL)isMirroredWithChar:(unsigned short)arg1;
+ (BOOL)getDirectionalityWithInt:(int)arg1;
+ (BOOL)getDirectionalityWithChar:(unsigned short)arg1;
+ (int)getTypeWithInt:(int)arg1;
+ (int)getTypeWithChar:(unsigned short)arg1;
+ (int)getNumericValueWithInt:(int)arg1;
+ (int)getNumericValueWithChar:(unsigned short)arg1;
+ (id)getNameImplWithInt:(int)arg1;
+ (id)getNameWithInt:(int)arg1;
+ (unsigned short)forDigitWithInt:(int)arg1 withInt:(int)arg2;
+ (int)digitWithInt:(int)arg1 withInt:(int)arg2;
+ (int)digitWithChar:(unsigned short)arg1 withInt:(int)arg2;
+ (int)offsetByCodePointsWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
+ (int)offsetByCodePointsWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)codePointCountWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)codePointCountWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (id)toCharsWithInt:(int)arg1;
+ (int)toCharsWithInt:(int)arg1 withCharArray:(id)arg2 withInt:(int)arg3;
+ (int)codePointBeforeWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)codePointBeforeWithCharArray:(id)arg1 withInt:(int)arg2;
+ (int)codePointBeforeWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
+ (int)codePointAtWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
+ (int)codePointAtWithCharArray:(id)arg1 withInt:(int)arg2;
+ (int)codePointAtWithJavaLangCharSequence:(id)arg1 withInt:(int)arg2;
+ (int)toCodePointWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2;
+ (int)charCountWithInt:(int)arg1;
+ (BOOL)isSurrogatePairWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2;
+ (BOOL)isSurrogateWithChar:(unsigned short)arg1;
+ (BOOL)isLowSurrogateWithChar:(unsigned short)arg1;
+ (BOOL)isHighSurrogateWithChar:(unsigned short)arg1;
+ (BOOL)isSupplementaryCodePointWithInt:(int)arg1;
+ (BOOL)isValidCodePointWithInt:(int)arg1;
+ (id)smallValueOfWithChar:(unsigned short)arg1;
+ (id)valueOfWithChar:(unsigned short)arg1;
+ (int)compareWithChar:(unsigned short)arg1 withChar:(unsigned short)arg2;
+ (void)checkValidCodePointWithInt:(int)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (int)compareToWithId:(id)arg1;
- (unsigned short)charValue;
- (id)initWithChar:(unsigned short)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

