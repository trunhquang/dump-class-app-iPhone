//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgApacheHarmonySecurityAsn1ASN1Constants.h"

@class NSString;

@interface OrgApacheHarmonySecurityAsn1ASN1Type : NSObject <OrgApacheHarmonySecurityAsn1ASN1Constants>
{
    int id__;
    int constrId_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
@property(readonly, copy) NSString *description;
- (int)getEncodedLengthWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (void)setEncodingContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (void)encodeContentWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (void)encodeASNWithOrgApacheHarmonySecurityAsn1BerOutputStream:(id)arg1;
- (id)getDecodedObjectWithOrgApacheHarmonySecurityAsn1BerInputStream:(id)arg1;
- (BOOL)checkTagWithInt:(int)arg1;
- (id)decodeWithOrgApacheHarmonySecurityAsn1BerInputStream:(id)arg1;
- (id)encodeWithId:(id)arg1;
- (void)verifyWithJavaIoInputStream:(id)arg1;
- (void)verifyWithByteArray:(id)arg1;
- (id)decodeWithJavaIoInputStream:(id)arg1;
- (id)decodeWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)decodeWithByteArray:(id)arg1;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

