//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFileManager, NSString;

@interface CLSFileManager : NSObject
{
    NSString *_rootPath;
    NSFileManager *_underlyingFileManager;
}

@property(readonly, nonatomic) NSFileManager *underlyingFileManager; // @synthesize underlyingFileManager=_underlyingFileManager;
- (void).cxx_destruct;
- (BOOL)removeContentsOfAllPaths;
- (BOOL)removeContentsOfPendingPath;
- (BOOL)removeContentsOfProcessingPath;
- (BOOL)movePendingToProcessing;
- (BOOL)moveProcessingContentsToPrepared;
- (void)enumerateFilesInPreparedDirectoryUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateFilesInActiveDirectoryUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateReportsInProcessingDirectoryUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeLegacyDirectories;
- (id)setupNewPathForExecutionIdentifier:(id)arg1;
- (BOOL)prepareForNewLaunch;
@property(readonly, nonatomic) NSArray *processingPathContents;
@property(readonly, nonatomic) NSArray *preparedPathContents;
@property(readonly, nonatomic) NSArray *activePathContents;
@property(readonly, copy, nonatomic) NSString *preparedPath;
@property(readonly, copy, nonatomic) NSString *processingPath;
@property(readonly, copy, nonatomic) NSString *pendingPath;
@property(readonly, copy, nonatomic) NSString *activePath;
@property(readonly, copy, nonatomic) NSString *structurePath;
@property(readonly, copy, nonatomic) NSString *rootPath;
- (id)pathNamespace;
- (id)contentsOfDirectory:(id)arg1;
- (id)fileSizeAtPath:(id)arg1;
- (BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2;
- (void)enumerateFilesInDirectory:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2;
- (BOOL)removeContentsOfDirectoryAtPath:(id)arg1;
- (BOOL)removeItemAtPath:(id)arg1;
- (BOOL)createDirectoryAtPath:(id)arg1;
- (id)init;

@end

