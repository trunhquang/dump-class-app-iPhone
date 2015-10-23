//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TAGPBEnumDescriptor, TAGPBFieldOptions;

@interface TAGPBFieldDescriptor : NSObject
{
    SEL getSel_;
    SEL setSel_;
    SEL hasSel_;
    SEL setHasSel_;
    struct TAGPBMessageFieldDescription *description_;
    CDUnion_67553414 defaultValue_;
    TAGPBFieldOptions *fieldOptions_;
    Class msgClass_;
    union {
        TAGPBEnumDescriptor *enumDescriptor_;
        CDUnknownFunctionPointerType enumVerifier_;
    } enumHandling_;
}

@property(readonly, nonatomic) Class msgClass; // @synthesize msgClass=msgClass_;
@property(readonly, nonatomic) SEL setSel; // @synthesize setSel=setSel_;
@property(readonly, nonatomic) SEL setHasSel; // @synthesize setHasSel=setHasSel_;
@property(readonly, nonatomic) SEL hasSel; // @synthesize hasSel=hasSel_;
@property(readonly, nonatomic) TAGPBFieldOptions *fieldOptions; // @synthesize fieldOptions=fieldOptions_;
@property(readonly, nonatomic) SEL getSel; // @synthesize getSel=getSel_;
- (id)textFormatName;
@property(readonly, nonatomic) CDUnion_67553414 defaultValue;
@property(readonly, nonatomic) TAGPBEnumDescriptor *enumDescriptor;
- (BOOL)isValidEnumValue:(int)arg1;
@property(readonly, nonatomic, getter=isMessage) BOOL message;
@property(readonly, nonatomic, getter=isPackable) BOOL packable;
@property(readonly, nonatomic, getter=isRepeated) BOOL repeated;
@property(readonly, nonatomic, getter=isOptional) BOOL optional;
@property(readonly, nonatomic, getter=isRequired) BOOL required;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned int tag;
@property(readonly, nonatomic) unsigned long offset;
@property(readonly, nonatomic) unsigned int number;
@property(readonly, nonatomic) BOOL hasDefaultValue;
@property(readonly, nonatomic) unsigned int hasIndex;
@property(readonly, nonatomic) int type;
- (void)dealloc;
- (id)initWithFieldDescription:(struct TAGPBMessageFieldDescription *)arg1 rootClass:(Class)arg2;
- (id)init;

@end

