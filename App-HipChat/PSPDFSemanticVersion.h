//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PSPDFSemanticVersion : NSObject
{
    int _major;
    int _minor;
    int _patch;
    NSString *_prerelease;
}

@property(readonly, copy, nonatomic) NSString *prerelease; // @synthesize prerelease=_prerelease;
@property(readonly, nonatomic) int patch; // @synthesize patch=_patch;
@property(readonly, nonatomic) int minor; // @synthesize minor=_minor;
@property(readonly, nonatomic) int major; // @synthesize major=_major;
- (void).cxx_destruct;
- (id)parseVersionString:(id)arg1;
- (id)description;
- (BOOL)versionIsGreaterThan:(id)arg1;
- (BOOL)versionIsLessThan:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)compare:(id)arg1;
- (id)initWithString:(id)arg1;

@end

