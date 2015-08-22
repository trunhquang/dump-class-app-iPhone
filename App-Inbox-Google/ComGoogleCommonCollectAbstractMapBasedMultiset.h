//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectAbstractMultiset.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonCollectAbstractMapBasedMultiset : ComGoogleCommonCollectAbstractMultiset <JavaIoSerializable>
{
    id <JavaUtilMap> backingMap_;
    long long size_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_setCountWithId_withInt__params;
+ (id)__annotations_removeWithId_withInt__params;
+ (id)__annotations_addWithId_withInt__params;
+ (id)__annotations_countWithId__params;
+ (void)initialize;
+ (int)getAndSetWithComGoogleCommonCollectCount:(id)arg1 withInt:(int)arg2;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)readObjectNoData;
- (int)setCountWithId:(id)arg1 withInt:(int)arg2;
- (int)removeWithId:(id)arg1 withInt:(int)arg2;
- (int)addWithId:(id)arg1 withInt:(int)arg2;
- (int)countWithId:(id)arg1;
- (id)iterator;
- (int)size;
- (int)distinctElements;
- (void)clear;
- (id)entryIterator;
- (id)entrySet;
- (void)setBackingMapWithJavaUtilMap:(id)arg1;
- (id)initWithJavaUtilMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

