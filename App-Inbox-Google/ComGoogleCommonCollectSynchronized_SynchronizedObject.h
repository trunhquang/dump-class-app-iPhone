//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JavaIoSerializable.h"

@class NSString;

@interface ComGoogleCommonCollectSynchronized_SynchronizedObject : NSObject <JavaIoSerializable>
{
    id delegate_;
    id mutex_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithId_withId__params;
- (void)dealloc;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)delegate;
- (id)initWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

