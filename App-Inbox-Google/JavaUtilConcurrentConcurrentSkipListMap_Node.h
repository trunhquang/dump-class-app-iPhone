//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JavaUtilConcurrentConcurrentSkipListMap_Node : NSObject
{
    id key_;
    // Error parsing type: A^v, name: value_
    // Error parsing type: A^v, name: next_
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (void)initialize;
- (void)__javaClone;
- (void)dealloc;
- (id)createSnapshot;
- (id)getValidValue;
- (void)helpDeleteWithJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg1 withJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg2;
- (BOOL)appendMarkerWithJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg1;
- (BOOL)isBaseHeader;
- (BOOL)isMarker;
- (BOOL)casNextWithJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg1 withJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg2;
- (BOOL)casValueWithId:(id)arg1 withId:(id)arg2;
- (id)initWithJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg1;
- (id)initWithId:(id)arg1 withId:(id)arg2 withJavaUtilConcurrentConcurrentSkipListMap_Node:(id)arg3;

@end

