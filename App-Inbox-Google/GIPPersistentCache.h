//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileManager, NSMutableDictionary, NSMutableSet, NSString;

@interface GIPPersistentCache : NSObject
{
    unsigned int retentionPolicy_;
    unsigned int memoryCapacity_;
    unsigned int diskCapacity_;
    double timeToLive_;
    unsigned int currentMemoryUsage_;
    unsigned int currentDiskUsage_;
    unsigned int sequenceNumber_;
    BOOL isMetaDataDirty_;
    NSString *path_;
    NSMutableDictionary *memoryCache_;
    NSMutableDictionary *metaDataCache_;
    NSFileManager *fileManager_;
    NSMutableSet *filesToDelete_;
}

+ (id)sharedCacheWithName:(id)arg1;
@property(readonly, nonatomic) unsigned int currentDiskUsage; // @synthesize currentDiskUsage=currentDiskUsage_;
@property(readonly, nonatomic) unsigned int currentMemoryUsage; // @synthesize currentMemoryUsage=currentMemoryUsage_;
- (void)updateLastAccess:(id)arg1;
- (void)removeMetaDataIfDeadForKey:(id)arg1;
- (BOOL)removeEntryFromDiskCacheForKey:(id)arg1;
- (BOOL)removeEntryFromMemoryCacheForKey:(id)arg1;
- (id)pathForMetaData:(id)arg1;
- (id)uniqueFileName;
- (void)readCapacitiesFromDisk;
- (void)saveCapacitiesToDisk;
- (id)capacitiesFileName;
- (void)readMetaDataFromDisk;
- (void)saveMetaDataToDisk;
- (void)saveMetaDataToDiskIfNeeded;
- (void)markMetaDataAsDirty;
- (id)metaDataFileName;
- (void)removeCachedDataForKey:(id)arg1;
- (void)mergeCache:(id)arg1;
- (void)removeAllCachedData;
- (void)removeAllCachedDataFromDisk;
- (void)removeAllCachedDataFromMemory;
- (void)storeCachedData:(id)arg1 forKey:(id)arg2;
- (BOOL)pruneCachesForIncomingDataWithSize:(unsigned int)arg1 isInDiskCache:(BOOL)arg2;
- (id)timestampForKey:(id)arg1;
- (id)cachedDataForKey:(id)arg1;
@property double timeToLive;
@property unsigned int diskCapacity;
@property unsigned int memoryCapacity;
@property unsigned int retentionPolicy;
- (void)dealloc;
- (id)initWithDiskPath:(id)arg1;

@end

