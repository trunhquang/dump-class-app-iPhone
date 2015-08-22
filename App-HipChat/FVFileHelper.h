//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FVFileHelper : NSObject
{
}

+ (id)originalFileExtensionForFileAtPath:(id)arg1;
+ (id)fileExtensionForFileAtPath:(id)arg1;
+ (id)originalFilenameForFileAtPath:(id)arg1;
+ (id)sharedInstance;
- (id)temporaryFilePathAfterCachingDocument:(id)arg1;
- (id)temporaryFilePathAfterCachingData:(id)arg1 filename:(id)arg2;
- (id)urlForCachedData:(id)arg1 filename:(id)arg2;
- (void)cacheData:(id)arg1 filename:(id)arg2 cachedURL:(id *)arg3;
- (id)addNumber:(int)arg1 toDestination:(id)arg2;
- (id)findNonExistingDestinationFor:(id)arg1;
- (BOOL)fileExists:(id)arg1;
- (BOOL)copyFileFromData:(id)arg1 ToDestination:(id)arg2;
- (void)truncateDocumentsFolder;
- (void)moveFileFromUrl:(id)arg1 ToDestination:(id)arg2 alteringModifiedDate:(BOOL)arg3;
- (void)moveFileFromUrl:(id)arg1 ToDestination:(id)arg2;

@end

