//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBProviderMap, FBUserSession, NSObject<FBAppModule>, NSString;

@protocol FBAppModuleFactory <NSObject>
- (NSString *)moduleName;
- (NSObject<FBAppModule> *)moduleForSession:(FBUserSession *)arg1 providerMap:(FBProviderMap *)arg2;
@end

