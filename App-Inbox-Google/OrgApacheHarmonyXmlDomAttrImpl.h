//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgApacheHarmonyXmlDomNodeImpl.h"

#import "OrgW3cDomAttr.h"

@class NSString, OrgApacheHarmonyXmlDomElementImpl;

@interface OrgApacheHarmonyXmlDomAttrImpl : OrgApacheHarmonyXmlDomNodeImpl <OrgW3cDomAttr>
{
    OrgApacheHarmonyXmlDomElementImpl *ownerElement_;
    BOOL isId_;
    BOOL namespaceAware_;
    NSString *namespaceURI_;
    NSString *prefix_;
    NSString *localName_;
    NSString *value_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (BOOL)isId;
- (id)getSchemaTypeInfo;
- (void)setValueWithNSString:(id)arg1;
- (void)setPrefixWithNSString:(id)arg1;
- (id)getValue;
- (BOOL)getSpecified;
- (id)getPrefix;
- (id)getOwnerElement;
- (id)getNodeValue;
- (short)getNodeType;
- (id)getNodeName;
- (id)getNamespaceURI;
- (id)getName;
- (id)getLocalName;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1 withNSString:(id)arg2;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

