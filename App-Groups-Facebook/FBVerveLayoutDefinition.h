//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBVerveLayoutDefinition : NSObject
{
    NSString *_name;
    unsigned int _assetCount;
}

+ (id)layoutDefinitionWithJSONDictionary:(id)arg1;
@property(readonly, nonatomic) unsigned int assetCount; // @synthesize assetCount=_assetCount;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (id)initWithName:(id)arg1 assetCount:(unsigned int)arg2;

@end

