//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol FBFIGConfigBuilder <NSObject>
+ (id)builderForInstance:(id <FBFIGConfigurable>)arg1;
+ (id)builderFromConfig:(id <FBFIGConfigurable>)arg1;
+ (id)builderIgnoringClassLevelOverrides;
+ (id)builder;
- (id <FBFIGConfig>)build;
@end

