//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FBSVGKitDataBuilder : NSObject
{
    NSString *_bundle;
    NSString *_file;
}

+ (id)kitDataFromExistingKitData:(id)arg1;
+ (id)kitData;
- (void).cxx_destruct;
- (id)withFile:(id)arg1;
- (id)withBundle:(id)arg1;
- (id)build;

@end

