//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaObject.h"
#import "JavaUtilMap.h"
#import "NSObject.h"

@protocol ComGoogleCommonCollectBiMap <JavaUtilMap, NSObject, JavaObject>
- (id <ComGoogleCommonCollectBiMap>)inverse;
- (id <JavaUtilSet>)values;
- (void)putAllWithJavaUtilMap:(id <JavaUtilMap>)arg1;
- (id)forcePutWithId:(id)arg1 withId:(id)arg2;
- (id)putWithId:(id)arg1 withId:(id)arg2;
@end

