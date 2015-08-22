//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaUtilAbstractList.h"

#import "JavaIoSerializable.h"
#import "JavaUtilRandomAccess.h"

@class IOSLongArray, NSString;

@interface ComGoogleCommonPrimitivesLongs_LongArrayAsList : JavaUtilAbstractList <JavaUtilRandomAccess, JavaIoSerializable>
{
    IOSLongArray *array_;
    int start_;
    int end_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)toLongArray;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
- (BOOL)isEqual:(id)arg1;
- (id)subListWithInt:(int)arg1 withInt:(int)arg2;
- (id)setWithInt:(int)arg1 withId:(id)arg2;
- (int)lastIndexOfWithId:(id)arg1;
- (int)indexOfWithId:(id)arg1;
- (BOOL)containsWithId:(id)arg1;
- (id)getWithInt:(int)arg1;
- (BOOL)isEmpty;
- (int)size;
- (id)initWithLongArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithLongArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

