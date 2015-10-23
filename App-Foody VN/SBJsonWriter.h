//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SBJsonWriter : NSObject
{
    BOOL sortKeys;
    BOOL humanReadable;
    NSString *error;
    unsigned int maxDepth;
    CDUnknownBlockType sortKeysComparator;
}

@property(copy) CDUnknownBlockType sortKeysComparator; // @synthesize sortKeysComparator;
@property unsigned int maxDepth; // @synthesize maxDepth;
@property(copy) NSString *error; // @synthesize error;
@property BOOL humanReadable; // @synthesize humanReadable;
@property BOOL sortKeys; // @synthesize sortKeys;
- (id)dataWithObject:(id)arg1;
- (id)stringWithObject:(id)arg1 error:(id *)arg2;
- (id)stringWithObject:(id)arg1;
- (id)init;

@end
