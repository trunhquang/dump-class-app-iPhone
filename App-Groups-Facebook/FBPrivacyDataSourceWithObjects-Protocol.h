//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPrivacyTokenableOption, NSIndexPath;

@protocol FBPrivacyDataSourceWithObjects <NSObject>
- (NSIndexPath *)indexPathForOption:(FBPrivacyTokenableOption *)arg1;
- (FBPrivacyTokenableOption *)optionForIndexPath:(NSIndexPath *)arg1;
@end

