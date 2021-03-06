//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilMap.h"

@class NSMutableDictionary, NSString;

@interface NSDictionaryMap : NSObject <JavaUtilMap>
{
    NSMutableDictionary *dictionary_;
}

+ (id)mapWithDictionary:(id)arg1;
+ (id)map;
- (id)values;
- (int)size;
- (id)removeWithId:(id)arg1;
- (void)putAllWithJavaUtilMap:(id)arg1;
- (id)putWithId:(id)arg1 withId:(id)arg2;
- (id)keySet;
- (BOOL)isEmpty;
@property(readonly) unsigned int hash;
- (id)getWithId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)entrySet;
- (BOOL)containsValueWithId:(id)arg1;
- (BOOL)containsKeyWithId:(id)arg1;
- (void)clear;
- (id)initWithDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

