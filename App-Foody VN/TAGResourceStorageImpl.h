//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGResourceStorage.h"

@class NSString;

@interface TAGResourceStorageImpl : NSObject <TAGResourceStorage>
{
    id <TAGLoadCallback> _loadCallback;
    NSString *_containerId;
}

@property(retain, nonatomic) NSString *containerId; // @synthesize containerId=_containerId;
@property(retain, nonatomic) id <TAGLoadCallback> loadCallback; // @synthesize loadCallback=_loadCallback;
- (void).cxx_destruct;
- (id)mainBundle;
- (id)dataPath;
- (id)resourceFilename;
- (BOOL)saveResourceToDisk:(id)arg1;
- (id)loadExpandedResourceFromPlistFile:(id)arg1;
- (id)loadExpandedResourceFromJsonFile:(id)arg1;
- (id)loadResourceFromContainerFile:(id)arg1;
- (void)saveResourceToDiskInBackground:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)saveResourceToDiskInBackground:(id)arg1;
- (id)loadResourceFromDisk;
- (void)loadResourceFromDiskInBackground;
- (id)initWithContainerId:(id)arg1;

@end

