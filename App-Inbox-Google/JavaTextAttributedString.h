//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JavaTextAttributedString : NSObject
{
    NSString *text_;
    id <JavaUtilMap> attributeMap_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)getIteratorWithJavaTextAttributedCharacterIterator_AttributeArray:(id)arg1;
- (id)getIterator;
- (void)addAttributesWithJavaUtilMap:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (void)addAttributeWithJavaTextAttributedCharacterIterator_Attribute:(id)arg1 withId:(id)arg2;
- (id)initWithNSString:(id)arg1 withJavaUtilMap:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithJavaTextAttributedCharacterIterator:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaTextAttributedCharacterIterator_AttributeArray:(id)arg4;
- (id)initWithJavaTextAttributedCharacterIterator:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithJavaTextAttributedCharacterIterator:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaUtilSet:(id)arg4;
- (id)initWithJavaTextAttributedCharacterIterator:(id)arg1;

@end

