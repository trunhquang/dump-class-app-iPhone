//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSIntArray, JavaLangCharacter;

@interface JBTIContactsMonograms : NSObject
{
    IOSIntArray *availableSizes_;
    JavaLangCharacter *defaultFirstLetter_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_hashcodeForEmailWithNSString__params;
+ (id)__annotations_getFirstLetterWithNSString_withNSString__params;
+ (id)__annotations_getMonogramUrlWithInt_withNSString_withNSString__params;
+ (int)chooseClosestSizeWithIntArray:(id)arg1 withInt:(int)arg2;
- (void)dealloc;
- (id)generateMonogramUrlWithInt:(int)arg1 withInt:(int)arg2 withChar:(unsigned short)arg3;
- (int)hashcodeForEmailWithNSString:(id)arg1;
- (BOOL)isInEnglishWithChar:(unsigned short)arg1;
- (unsigned short)getFirstLetterWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getMonogramUrlWithInt:(int)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)initWithIntArray:(id)arg1 withChar:(unsigned short)arg2;

@end

