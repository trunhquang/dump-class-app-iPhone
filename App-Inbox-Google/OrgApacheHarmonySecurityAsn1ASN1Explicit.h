//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrgApacheHarmonySecurityAsn1ASN1Constructed.h"

@class OrgApacheHarmonySecurityAsn1ASN1Type;

@interface OrgApacheHarmonySecurityAsn1ASN1Explicit : OrgApacheHarmonySecurityAsn1ASN1Constructed
{
    OrgApacheHarmonySecurityAsn1ASN1Type *type_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)description;
- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(id)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2 withOrgApacheHarmonySecurityAsn1ASN1Type:(id)arg3;
- (id)initWithInt:(int)arg1 withOrgApacheHarmonySecurityAsn1ASN1Type:(id)arg2;

@end

