//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilRandom.h"

@class JavaSecurityProvider, JavaSecuritySecureRandomSpi, NSString;

@interface JavaSecuritySecureRandom : JavaUtilRandom
{
    JavaSecurityProvider *provider_;
    JavaSecuritySecureRandomSpi *secureRandomSpi_;
    NSString *algorithm_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (id)getSeedWithInt:(int)arg1;
+ (id)getInstanceWithNSString:(id)arg1 withJavaSecurityProvider:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1 withNSString:(id)arg2;
+ (id)getInstanceWithNSString:(id)arg1;
- (void)dealloc;
- (id)generateSeedWithInt:(int)arg1;
- (int)nextWithInt:(int)arg1;
- (void)nextBytesWithByteArray:(id)arg1;
- (void)setSeedWithLong:(long long)arg1;
- (void)setSeedWithByteArray:(id)arg1;
- (id)getAlgorithm;
- (id)getProvider;
- (id)initWithJavaSecuritySecureRandomSpi:(id)arg1 withJavaSecurityProvider:(id)arg2 withNSString:(id)arg3;
- (id)initWithJavaSecuritySecureRandomSpi:(id)arg1 withJavaSecurityProvider:(id)arg2;
- (id)initWithByteArray:(id)arg1;
- (id)init;

@end

