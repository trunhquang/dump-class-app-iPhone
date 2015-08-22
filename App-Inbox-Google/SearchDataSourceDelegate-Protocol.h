//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SearchDataSource;

@protocol SearchDataSourceDelegate <NSObject>

@optional
- (void)searchDataSourceDidUpdateSearchProgress:(SearchDataSource *)arg1 isExpectingMoreChanges:(BOOL)arg2;
- (void)searchDataSourceDidUpdateSuggestions:(SearchDataSource *)arg1;
- (void)searchDataSource:(SearchDataSource *)arg1 updatedQueryText:(NSString *)arg2;
@end

