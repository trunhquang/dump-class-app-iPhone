//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaUtilMap_Entry.h"

@class NSString;

@interface JavaUtilCollections_UnmodifiableMap_UnmodifiableEntrySet_UnmodifiableMapEntry : NSObject <JavaUtilMap_Entry>
{
    id <JavaUtilMap_Entry> mapEntry_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)setValueWithId:(id)arg1;
@property(readonly) unsigned int hash;
- (id)getValue;
- (id)getKey;
- (BOOL)isEqual:(id)arg1;
- (id)initWithJavaUtilMap_Entry:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

