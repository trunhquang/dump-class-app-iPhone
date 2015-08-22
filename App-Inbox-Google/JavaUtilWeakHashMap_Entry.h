//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaLangRefWeakReference.h"

#import "JavaUtilMap_Entry.h"

@class NSString;

@interface JavaUtilWeakHashMap_Entry : JavaLangRefWeakReference <JavaUtilMap_Entry>
{
    int hash__;
    BOOL isNull_;
    id value_;
    JavaUtilWeakHashMap_Entry *next_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)setValueWithId:(id)arg1;
- (id)getValue;
- (id)getKey;
- (id)initWithId:(id)arg1 withId:(id)arg2 withJavaLangRefReferenceQueue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

