//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFProcessor.h"

@interface AFMoaEffectProcessor : AFProcessor
{
    CDUnknownFunctionPointerType _function;
    struct MoaEffectParams _params;
}

@property CDUnknownFunctionPointerType function; // @synthesize function=_function;
@property struct MoaEffectParams params; // @synthesize params=_params;
- (CDUnknownBlockType)moaliteBlock;
- (id)initWithEffectFunction:(CDUnknownFunctionPointerType)arg1 params:(struct MoaEffectParams)arg2;

@end

