//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgApacheHarmonyXmlDomTextImpl.h"

#import "OrgW3cDomCDATASection.h"

@class NSString;

@interface OrgApacheHarmonyXmlDomCDATASectionImpl : OrgApacheHarmonyXmlDomTextImpl <OrgW3cDomCDATASection>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)replaceWithText;
- (BOOL)needsSplitting;
- (void)split;
- (short)getNodeType;
- (id)getNodeName;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

