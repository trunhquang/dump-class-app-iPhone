//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IOSCharArray, IOSObjectArray, JavaLangClassLoader, LibcoreReflectListOfTypes, NSString;

@interface LibcoreReflectGenericSignatureParser : NSObject
{
    LibcoreReflectListOfTypes *exceptionTypes_;
    LibcoreReflectListOfTypes *parameterTypes_;
    IOSObjectArray *formalTypeParameters_;
    id <JavaLangReflectType> returnType_;
    id <JavaLangReflectType> fieldType_;
    LibcoreReflectListOfTypes *interfaceTypes_;
    id <JavaLangReflectType> superclassType_;
    JavaLangClassLoader *loader_;
    id <JavaLangReflectGenericDeclaration> genericDecl_;
    unsigned short symbol_;
    NSString *identifier_;
    IOSCharArray *buffer_;
    int pos_;
    BOOL eof_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (BOOL)isStopSymbolWithChar:(unsigned short)arg1;
- (void)dealloc;
- (void)scanIdentifier;
- (void)expectWithChar:(unsigned short)arg1;
- (void)scanSymbol;
- (id)parseReturnType;
- (void)parseMethodTypeSignatureWithIOSClassArray:(id)arg1;
- (id)parseTypeSignature;
- (id)parseTypeVariableSignature;
- (id)parseTypeArgument;
- (id)parseOptTypeArguments;
- (id)parseClassTypeSignature;
- (id)parseFieldTypeSignature;
- (id)parseFormalTypeParameter;
- (void)parseOptFormalTypeParameters;
- (void)parseClassSignature;
- (void)parseForFieldWithJavaLangReflectGenericDeclaration:(id)arg1 withNSString:(id)arg2;
- (void)parseForConstructorWithJavaLangReflectGenericDeclaration:(id)arg1 withNSString:(id)arg2 withIOSClassArray:(id)arg3;
- (void)parseForMethodWithJavaLangReflectGenericDeclaration:(id)arg1 withNSString:(id)arg2 withIOSClassArray:(id)arg3;
- (void)parseForClassWithJavaLangReflectGenericDeclaration:(id)arg1 withNSString:(id)arg2;
- (void)setInputWithJavaLangReflectGenericDeclaration:(id)arg1 withNSString:(id)arg2;
- (id)initWithJavaLangClassLoader:(id)arg1;

@end

