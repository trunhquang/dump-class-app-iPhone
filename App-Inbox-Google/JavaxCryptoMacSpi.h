//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaxCryptoMacSpi : NSObject
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)clone;
- (void)engineReset;
- (id)engineDoFinal;
- (void)engineUpdateWithJavaNioByteBuffer:(id)arg1;
- (void)engineUpdateWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)engineUpdateWithByte:(BOOL)arg1;
- (void)engineInitWithJavaSecurityKey:(id)arg1 withJavaSecuritySpecAlgorithmParameterSpec:(id)arg2;
- (int)engineGetMacLength;
- (id)init;

@end

