//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSURL;

@interface CLSUserDefaults : NSObject
{
    struct dispatch_queue_s *_access_queue;
    struct dispatch_queue_s *_io_queue;
    NSMutableDictionary *_dataDictionary;
    NSURL *_directoryURL;
    NSURL *_fileURL;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)standardUserDefaults;
- (void)migrateFromNSUserDefaults:(id)arg1;
- (id)loadDictionaryFromDisk;
- (void)synchronize;
- (id)dictionaryRepresentation;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (BOOL)boolForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
