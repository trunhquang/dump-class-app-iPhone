//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMethodSignature, NSString;

@interface RCTModuleMethod : NSObject
{
    Class _moduleClass;
    SEL _selector;
    NSMethodSignature *_methodSignature;
    NSArray *_argumentBlocks;
    NSString *_JSMethodName;
    unsigned int _functionKind;
}

@property(readonly, nonatomic) unsigned int functionKind; // @synthesize functionKind=_functionKind;
@property(readonly, nonatomic) SEL selector; // @synthesize selector=_selector;
@property(readonly, nonatomic) Class moduleClass; // @synthesize moduleClass=_moduleClass;
@property(readonly, copy, nonatomic) NSString *JSMethodName; // @synthesize JSMethodName=_JSMethodName;
- (void).cxx_destruct;
- (id)description;
- (id)methodName;
- (void)invokeWithBridge:(id)arg1 module:(id)arg2 arguments:(id)arg3;
- (id)initWithObjCMethodName:(id)arg1 JSMethodName:(id)arg2 moduleClass:(Class)arg3;
- (id)init;

@end

