//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilMap_Entry.h"

@class JavaUtilConcurrentConcurrentHashMap, NSString;

@interface JavaUtilConcurrentConcurrentHashMap_MapEntry : NSObject <JavaUtilMap_Entry>
{
    id key_;
    id val_;
    JavaUtilConcurrentConcurrentHashMap *map_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)setValueWithId:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (id)getValue;
- (id)getKey;
- (id)initWithId:(id)arg1 withId:(id)arg2 withJavaUtilConcurrentConcurrentHashMap:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

