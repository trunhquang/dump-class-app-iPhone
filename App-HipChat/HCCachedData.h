//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSString, ThreadSafeDictionary;

@interface HCCachedData : NSObject
{
    BOOL _storeUsesSharedDefaults;
    BOOL _loadedFromStore;
    ThreadSafeDictionary *_objects;
    NSString *_directoryPath;
    NSFileManager *_fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(nonatomic) BOOL loadedFromStore; // @synthesize loadedFromStore=_loadedFromStore;
@property(readonly, nonatomic) BOOL storeUsesSharedDefaults; // @synthesize storeUsesSharedDefaults=_storeUsesSharedDefaults;
@property(readonly, nonatomic) ThreadSafeDictionary *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)removeCacheFromUserDefaults;
- (void)removeCacheFile;
- (void)removeCache;
- (void)clearData;
- (void)saveToSharedDefaults;
- (void)saveToFile;
- (void)saveToStore;
- (id)loadFromSharedDefaults;
- (id)loadFromFile;
- (BOOL)loadFromStore;
@property(readonly) NSString *storeName;
- (BOOL)prepareStoreDirectory;
- (id)storeFilePath;
- (void)enumerateKeysAndObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (id)keysOfEntriesPassingTest:(CDUnknownBlockType)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (unsigned int)itemCount;
- (id)getData;
- (id)getOrCreateObjectForKey:(id)arg1;
- (Class)objectClass;
- (id)generateObjectWithData:(id)arg1;
- (id)initWithQueueName:(const char *)arg1 storeDirectoryPath:(id)arg2;
- (id)initWithQueueName:(const char *)arg1;

@end

