//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext, NSDictionary, NSMutableArray, NSMutableSet;

@interface IGGLProgram : NSObject
{
    EAGLContext *_context;
    NSMutableSet *_dirtyUniforms;
    unsigned int _program;
    NSDictionary *_attributes;
    NSDictionary *_uniforms;
    NSMutableArray *_deallocBlocks;
}

@property(retain, nonatomic) NSMutableArray *deallocBlocks; // @synthesize deallocBlocks=_deallocBlocks;
@property(readonly, copy, nonatomic) NSDictionary *uniforms; // @synthesize uniforms=_uniforms;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
@property(readonly, nonatomic) unsigned int program; // @synthesize program=_program;
- (void).cxx_destruct;
- (void)validate;
- (void)flushUniforms;
- (void)use;
- (int)uniformLocationForName:(id)arg1;
- (void)setTexture:(id)arg1 forUniformName:(id)arg2;
- (void)setValue:(id)arg1 forUniformName:(id)arg2;
- (void)addGLDeallocBlock:(CDUnknownBlockType)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)parseAttributes;
- (id)parseUniforms;
- (id)initWithVertexShader:(id)arg1 fragmentShader:(id)arg2;
- (id)init;
- (void)dealloc;

@end

