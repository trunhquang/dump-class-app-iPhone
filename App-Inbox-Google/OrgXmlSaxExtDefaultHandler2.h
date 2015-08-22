//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgXmlSaxHelpersDefaultHandler.h"

#import "OrgXmlSaxExtDeclHandler.h"
#import "OrgXmlSaxExtEntityResolver2.h"
#import "OrgXmlSaxExtLexicalHandler.h"

@class NSString;

@interface OrgXmlSaxExtDefaultHandler2 : OrgXmlSaxHelpersDefaultHandler <OrgXmlSaxExtLexicalHandler, OrgXmlSaxExtDeclHandler, OrgXmlSaxExtEntityResolver2>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)resolveEntityWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)resolveEntityWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4;
- (id)getExternalSubsetWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)internalEntityDeclWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)externalEntityDeclWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)elementDeclWithNSString:(id)arg1 withNSString:(id)arg2;
- (void)attributeDeclWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3 withNSString:(id)arg4 withNSString:(id)arg5;
- (void)commentWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)endEntityWithNSString:(id)arg1;
- (void)startEntityWithNSString:(id)arg1;
- (void)endDTD;
- (void)startDTDWithNSString:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (void)endCDATA;
- (void)startCDATA;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

