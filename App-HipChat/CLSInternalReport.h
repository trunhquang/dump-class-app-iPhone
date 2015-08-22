//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSString;

@interface CLSInternalReport : NSObject
{
    NSString *_identifier;
    NSString *_path;
    NSArray *_metadataSections;
}

+ (id)readMetadataAtPath:(id)arg1;
+ (id)reportWithPath:(id)arg1;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *OSBuildVersion;
@property(readonly, copy, nonatomic) NSString *OSVersion;
@property(readonly, copy, nonatomic) NSDate *dateCreated;
@property(readonly, copy, nonatomic) NSString *bundleShortVersionString;
@property(readonly, copy, nonatomic) NSString *bundleVersion;
@property(readonly, copy, nonatomic) NSDictionary *customKeys;
@property(readonly, copy, nonatomic) NSString *APIKey;
- (id)metadataSections;
- (void)enumerateSymbolicatableFilesInContent:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) BOOL needsToBeSubmitted;
@property(readonly, copy, nonatomic) NSString *binaryImagePath;
@property(readonly, copy, nonatomic) NSString *metadataPath;
- (id)pathForContentFile:(id)arg1;
@property(readonly, copy, nonatomic) NSString *directoryName;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 executionIdentifier:(id)arg2;

@end

