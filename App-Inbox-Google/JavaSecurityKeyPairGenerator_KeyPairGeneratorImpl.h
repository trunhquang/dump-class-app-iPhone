//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecurityKeyPairGenerator.h"

@class JavaSecurityKeyPairGeneratorSpi;

@interface JavaSecurityKeyPairGenerator_KeyPairGeneratorImpl : JavaSecurityKeyPairGenerator
{
    JavaSecurityKeyPairGeneratorSpi *spiImpl_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (id)generateKeyPair;
- (void)initialize__WithInt:(int)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (id)initWithJavaSecurityKeyPairGeneratorSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;

@end

