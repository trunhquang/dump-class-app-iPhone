//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMapDifference.h"
#import "JavaObject.h"
#import "NSObject.h"

@protocol ComGoogleCommonCollectSortedMapDifference <ComGoogleCommonCollectMapDifference, NSObject, JavaObject>
- (id <JavaUtilSortedMap>)entriesDiffering;
- (id <JavaUtilSortedMap>)entriesInCommon;
- (id <JavaUtilSortedMap>)entriesOnlyOnRight;
- (id <JavaUtilSortedMap>)entriesOnlyOnLeft;
@end

