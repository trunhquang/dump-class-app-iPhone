//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaMathBigInteger;

@interface JavaSecuritySpecRSAOtherPrimeInfo : NSObject
{
    JavaMathBigInteger *prime_;
    JavaMathBigInteger *primeExponent_;
    JavaMathBigInteger *crtCoefficient_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getExponent;
- (id)getPrime;
- (id)getCrtCoefficient;
- (id)initWithJavaMathBigInteger:(id)arg1 withJavaMathBigInteger:(id)arg2 withJavaMathBigInteger:(id)arg3;

@end

