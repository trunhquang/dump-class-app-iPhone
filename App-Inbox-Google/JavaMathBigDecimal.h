//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSNumber.h"

#import "JavaIoSerializable.h"
#import "JavaLangComparable.h"

@class JavaMathBigInteger, NSString;

@interface JavaMathBigDecimal : NSNumber <JavaLangComparable, JavaIoSerializable>
{
    NSString *toStringImage_;
    int hashCode_;
    JavaMathBigInteger *intVal_;
    int bitLength_;
    long long smallValue_;
    int scale__;
    int precision_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
+ (int)bitLengthWithInt:(int)arg1;
+ (int)bitLengthWithLong:(long long)arg1;
+ (id)zeroScaledByWithLong:(long long)arg1;
+ (int)toIntScaleWithLong:(long long)arg1;
+ (int)roundingBehaviorWithInt:(int)arg1 withInt:(int)arg2 withJavaMathRoundingModeEnum:(id)arg3;
+ (int)longCompareToWithLong:(long long)arg1 withLong:(long long)arg2;
+ (id)dividePrimitiveLongsWithLong:(long long)arg1 withLong:(long long)arg2 withInt:(int)arg3 withJavaMathRoundingModeEnum:(id)arg4;
+ (id)divideBigIntegersWithJavaMathBigInteger:(id)arg1 withJavaMathBigInteger:(id)arg2 withInt:(int)arg3 withJavaMathRoundingModeEnum:(id)arg4;
+ (id)addAndMult10WithJavaMathBigDecimal:(id)arg1 withJavaMathBigDecimal:(id)arg2 withInt:(int)arg3;
+ (id)valueOfWithDouble:(double)arg1;
+ (id)valueOfWithLong:(long long)arg1;
+ (id)valueOfWithLong:(long long)arg1 withInt:(int)arg2;
- (void)getValue:(void *)arg1;
- (const char *)objCType;
- (void)dealloc;
- (void)setUnscaledValueWithJavaMathBigInteger:(id)arg1;
- (id)getUnscaledValue;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (int)aproxPrecision;
- (long long)valueExactWithInt:(int)arg1;
- (void)smallRoundWithJavaMathMathContext:(id)arg1 withInt:(int)arg2;
- (void)inplaceRoundWithJavaMathMathContext:(id)arg1;
- (id)ulp;
- (double)doubleValue;
- (float)floatValue;
- (BOOL)byteValueExact;
- (short)shortValueExact;
- (int)intValueExact;
- (int)intValue;
- (long long)longValueExact;
- (long long)longLongValue;
- (id)toBigIntegerExact;
- (id)toBigInteger;
- (id)toPlainString;
- (id)toEngineeringString;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (id)maxWithJavaMathBigDecimal:(id)arg1;
- (id)minWithJavaMathBigDecimal:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)compareToWithId:(id)arg1;
- (id)stripTrailingZeros;
- (id)scaleByPowerOfTenWithInt:(int)arg1;
- (id)movePointRightWithInt:(int)arg1;
- (id)movePointWithLong:(long long)arg1;
- (id)movePointLeftWithInt:(int)arg1;
- (id)setScaleWithInt:(int)arg1;
- (id)setScaleWithInt:(int)arg1 withInt:(int)arg2;
- (id)setScaleWithInt:(int)arg1 withJavaMathRoundingModeEnum:(id)arg2;
- (id)roundWithJavaMathMathContext:(id)arg1;
- (id)unscaledValue;
- (int)precision;
- (int)scale__;
- (BOOL)isZero;
- (int)signum;
- (id)plusWithJavaMathMathContext:(id)arg1;
- (id)plus;
- (id)negateWithJavaMathMathContext:(id)arg1;
- (id)negate;
- (id)absWithJavaMathMathContext:(id)arg1;
- (id)abs;
- (id)powWithInt:(int)arg1 withJavaMathMathContext:(id)arg2;
- (id)powWithInt:(int)arg1;
- (id)divideAndRemainderWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)divideAndRemainderWithJavaMathBigDecimal:(id)arg1;
- (id)remainderWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)remainderWithJavaMathBigDecimal:(id)arg1;
- (id)divideToIntegralValueWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)divideToIntegralValueWithJavaMathBigDecimal:(id)arg1;
- (id)divideWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)divideWithJavaMathBigDecimal:(id)arg1;
- (id)divideWithJavaMathBigDecimal:(id)arg1 withJavaMathRoundingModeEnum:(id)arg2;
- (id)divideWithJavaMathBigDecimal:(id)arg1 withInt:(int)arg2;
- (id)divideWithJavaMathBigDecimal:(id)arg1 withInt:(int)arg2 withJavaMathRoundingModeEnum:(id)arg3;
- (id)divideWithJavaMathBigDecimal:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)multiplyWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)multiplyWithJavaMathBigDecimal:(id)arg1;
- (id)subtractWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)subtractWithJavaMathBigDecimal:(id)arg1;
- (id)addWithJavaMathBigDecimal:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)addWithJavaMathBigDecimal:(id)arg1;
- (id)initWithLong:(long long)arg1 withJavaMathMathContext:(id)arg2;
- (id)initWithLong:(long long)arg1;
- (id)initWithInt:(int)arg1 withJavaMathMathContext:(id)arg2;
- (id)initWithInt:(int)arg1;
- (id)initWithJavaMathBigInteger:(id)arg1 withInt:(int)arg2 withJavaMathMathContext:(id)arg3;
- (id)initWithJavaMathBigInteger:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaMathBigInteger:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)initWithJavaMathBigInteger:(id)arg1;
- (id)initWithDouble:(double)arg1 withJavaMathMathContext:(id)arg2;
- (id)initWithDouble:(double)arg1;
- (id)initWithNSString:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (id)initWithCharArray:(id)arg1 withJavaMathMathContext:(id)arg2;
- (id)initWithCharArray:(id)arg1;
- (id)initWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withJavaMathMathContext:(id)arg4;
- (id)initWithCharArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithInt:(int)arg1 withInt:(int)arg2;
- (id)initWithLong:(long long)arg1 withInt:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

