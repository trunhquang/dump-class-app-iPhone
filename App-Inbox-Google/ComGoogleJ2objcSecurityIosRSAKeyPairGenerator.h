//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaSecurityKeyPairGeneratorSpi.h"

@interface ComGoogleJ2objcSecurityIosRSAKeyPairGenerator : JavaSecurityKeyPairGeneratorSpi
{
    int keySize_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)init;
- (void)initialize__WithJavaSecuritySpecAlgorithmParameterSpec:(id)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (void)initialize__WithInt:(int)arg1 withJavaSecuritySecureRandom:(id)arg2;
- (id)generateKeyPair;

@end

