//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol FBAvatarTaggingSectionDataSourceDelegate <NSObject>
- (void)dataSourceDidFinishFetchingResults:(id <FBAvatarTaggingSectionDataSource>)arg1;
- (void)dataSource:(id <FBAvatarTaggingSectionDataSource>)arg1 didSearchAvatars:(NSArray *)arg2 forText:(NSString *)arg3;
@end

