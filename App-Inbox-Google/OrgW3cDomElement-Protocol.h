//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "NSObject.h"
#import "OrgW3cDomNode.h"

@class NSString;

@protocol OrgW3cDomElement <OrgW3cDomNode, NSObject, JavaObject>
- (void)setIdAttributeNodeWithOrgW3cDomAttr:(id <OrgW3cDomAttr>)arg1 withBoolean:(BOOL)arg2;
- (void)setIdAttributeNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withBoolean:(BOOL)arg3;
- (void)setIdAttributeWithNSString:(NSString *)arg1 withBoolean:(BOOL)arg2;
- (id <OrgW3cDomTypeInfo>)getSchemaTypeInfo;
- (BOOL)hasAttributeNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (BOOL)hasAttributeWithNSString:(NSString *)arg1;
- (id <OrgW3cDomNodeList>)getElementsByTagNameNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (id <OrgW3cDomAttr>)setAttributeNodeNSWithOrgW3cDomAttr:(id <OrgW3cDomAttr>)arg1;
- (id <OrgW3cDomAttr>)getAttributeNodeNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (void)removeAttributeNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (void)setAttributeNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3;
- (NSString *)getAttributeNSWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (id <OrgW3cDomNodeList>)getElementsByTagNameWithNSString:(NSString *)arg1;
- (id <OrgW3cDomAttr>)removeAttributeNodeWithOrgW3cDomAttr:(id <OrgW3cDomAttr>)arg1;
- (id <OrgW3cDomAttr>)setAttributeNodeWithOrgW3cDomAttr:(id <OrgW3cDomAttr>)arg1;
- (id <OrgW3cDomAttr>)getAttributeNodeWithNSString:(NSString *)arg1;
- (void)removeAttributeWithNSString:(NSString *)arg1;
- (void)setAttributeWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (NSString *)getAttributeWithNSString:(NSString *)arg1;
- (NSString *)getTagName;
@end

