//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBFIGConfigProvider.h"

@protocol FBFIGConfigurable <FBFIGConfigProvider>
+ (id)newWithConfig:(id <FBFIGConfig>)arg1;
- (void)oldConfig:(id <FBFIGConfig>)arg1 configDidChange:(id <FBFIGConfig>)arg2;
- (void)applyConfig:(id <FBFIGConfig>)arg1;
- (id <FBFIGConfig>)config;
@end
