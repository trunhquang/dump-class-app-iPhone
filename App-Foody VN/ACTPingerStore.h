//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ACTPingerStore : NSObject
{
    NSMutableDictionary *_transientStore;
}

+ (id)persistedPingers;
@property(retain, nonatomic) NSMutableDictionary *transientStore; // @synthesize transientStore=_transientStore;
- (void).cxx_destruct;
- (id)allPingers;
- (void)removePinger:(id)arg1;
- (void)addPinger:(id)arg1;
- (void)persistStore;
@property(readonly, nonatomic) unsigned int maxEntries;
- (id)init;
- (id)initFromStorage;
- (id)initWithPingers:(id)arg1;

@end

