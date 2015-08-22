//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface ThreadSafeDictionary : NSObject
{
    NSObject<OS_dispatch_queue> *_collectionQueue;
    NSMutableDictionary *_internalDict;
}

@property(retain, nonatomic) NSMutableDictionary *internalDict; // @synthesize internalDict=_internalDict;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *collectionQueue; // @synthesize collectionQueue=_collectionQueue;
- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)JSONRepresentation;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (id)allValues;
- (id)allKeys;
- (id)objectForKey:(id)arg1;
- (unsigned int)count;
- (void)removeAllObjects;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)removeObjectsPassingTest:(CDUnknownBlockType)arg1;
- (void)removeObjectsForKeys:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (id)immutableCopy;
- (id)initWithQueueName:(const char *)arg1 andDictionary:(id)arg2;
- (id)initWithQueueName:(const char *)arg1;

@end

