//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ComGoogleCommonCacheLocalCache_ValueReference.h"

@class NSString;

@interface ComGoogleCommonCacheLocalCache_$1 : NSObject <ComGoogleCommonCacheLocalCache_ValueReference>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_copyForWithJavaLangRefReferenceQueue_withId_withComGoogleCommonCacheLocalCache_ReferenceEntry__params;
- (id)init;
- (void)notifyNewValueWithId:(id)arg1;
- (id)waitForValue;
- (BOOL)isActive;
- (BOOL)isLoading;
- (id)copyForWithJavaLangRefReferenceQueue:(id)arg1 withId:(id)arg2 withComGoogleCommonCacheLocalCache_ReferenceEntry:(id)arg3;
- (id)getEntry;
- (int)getWeight;
- (id)get;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

