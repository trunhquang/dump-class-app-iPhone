//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaxXmlParsersDocumentBuilderFactory : NSObject
{
    BOOL validating_;
    BOOL namespaceAware_;
    BOOL whitespace_;
    BOOL expandEntityRef_;
    BOOL ignoreComments_;
    BOOL coalescing_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)newInstanceWithNSString:(id)arg1 withJavaLangClassLoader:(id)arg2;
+ (id)newInstance;
- (BOOL)isXIncludeAware;
- (void)setXIncludeAwareWithBoolean:(BOOL)arg1;
- (void)setSchemaWithJavaxXmlValidationSchema:(id)arg1;
- (id)getSchema;
- (BOOL)getFeatureWithNSString:(id)arg1;
- (void)setFeatureWithNSString:(id)arg1 withBoolean:(BOOL)arg2;
- (id)getAttributeWithNSString:(id)arg1;
- (void)setAttributeWithNSString:(id)arg1 withId:(id)arg2;
- (BOOL)isCoalescing;
- (BOOL)isIgnoringComments;
- (BOOL)isExpandEntityReferences;
- (BOOL)isIgnoringElementContentWhitespace;
- (BOOL)isValidating;
- (BOOL)isNamespaceAware;
- (void)setCoalescingWithBoolean:(BOOL)arg1;
- (void)setIgnoringCommentsWithBoolean:(BOOL)arg1;
- (void)setExpandEntityReferencesWithBoolean:(BOOL)arg1;
- (void)setIgnoringElementContentWhitespaceWithBoolean:(BOOL)arg1;
- (void)setValidatingWithBoolean:(BOOL)arg1;
- (void)setNamespaceAwareWithBoolean:(BOOL)arg1;
- (id)newDocumentBuilder;
- (id)init;

@end

