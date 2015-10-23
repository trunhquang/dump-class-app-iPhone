//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary, NSMutableDictionary, TAGPValue;

@interface TAGExpandedFunctionCall : NSObject <NSCopying>
{
    TAGPValue *_pushAfterEvaluate;
    NSMutableDictionary *_propertiesMap;
}

+ (id)notDefaultMacroKey;
+ (id)functionKey;
+ (id)instanceNameKey;
+ (id)builder;
@property(retain, nonatomic) NSMutableDictionary *propertiesMap; // @synthesize propertiesMap=_propertiesMap;
@property(retain, nonatomic) TAGPValue *pushAfterEvaluate; // @synthesize pushAfterEvaluate=_pushAfterEvaluate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, nonatomic) NSDictionary *properties;
- (void)updateCacheablePropertyWithValue:(id)arg1 forKey:(id)arg2;
- (id)propertyForKey:(id)arg1;
- (int)approximateByteSize;
- (id)initWithPropertiesMap:(id)arg1 pushAfterEvaluate:(id)arg2;

@end

