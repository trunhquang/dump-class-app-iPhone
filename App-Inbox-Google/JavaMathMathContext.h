//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class JavaMathRoundingModeEnum, NSString;

@interface JavaMathMathContext : NSObject <JavaIoSerializable>
{
    int precision_;
    JavaMathRoundingModeEnum *roundingMode_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)getRoundingMode;
- (int)getPrecision;
- (id)initWithNSString:(id)arg1;
- (id)initWithInt:(int)arg1 withJavaMathRoundingModeEnum:(id)arg2;
- (id)initWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

