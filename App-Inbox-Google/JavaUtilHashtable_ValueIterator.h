//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilHashtable_HashIterator.h"

#import "JavaUtilIterator.h"

@class NSString;

@interface JavaUtilHashtable_ValueIterator : JavaUtilHashtable_HashIterator <JavaUtilIterator>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)initWithJavaUtilHashtable:(id)arg1;
- (id)next;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

