//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecuritySignatureSpi.h"

@class JavaSecurityProvider, NSString;

@interface JavaSecuritySignature : JavaSecuritySignatureSpi
{
    JavaSecurityProvider *provider_;
    NSString *algorithm_;
    int state_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_getParameterWithNSString_;
+ (id)__annotations_setParameterWithNSString_withId_;
+ (void)initialize;
+ (id)tryAlgorithmWithProviderWithJavaSecurityKey:(id)arg1 withJavaSecurityProvider_Service:(id)arg2;
+ (id)tryAlgorithmWithJavaSecurityKey:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;
+ (id)getSignatureWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (id)getParameterWithNSString:(id)arg1;
- (id)getParameters;
- (void)setParameterWithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1;
- (void)setParameterWithNSString:(id)arg1 withId:(id)arg2;
- (id)stateToStringWithInt:(int)arg1;
- (id)description;
- (void)updateWithJavaNioByteBuffer:(id)arg1;
- (void)updateWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)updateWithByteArray:(id)arg1;
- (void)updateWithByte:(BOOL)arg1;
- (BOOL)verifyWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (BOOL)verifyWithByteArray:(id)arg1;
- (int)signWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)sign;
- (void)initSignWithJavaSecurityPrivateKey:(id)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)initSignWithJavaSecurityPrivateKey:(id)arg1;
- (void)initVerifyWithJavaSecurityCertCertificate:(id)arg1;
- (void)initVerifyWithJavaSecurityPublicKey:(id)arg1;
- (id)getAlgorithm;
- (void)ensureProviderChosen;
- (id)getProvider;
- (id)initWithNSString:(id)arg1;

@end

