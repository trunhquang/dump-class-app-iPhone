//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCommonCollectMapMakerInternalMap_StrongEntry.h"

#import "ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry.h"

@class NSString;

@interface ComGoogleCommonCollectMapMakerInternalMap_StrongExpirableEntry : ComGoogleCommonCollectMapMakerInternalMap_StrongEntry <ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry>
{
    // Error parsing type: Aq, name: time_
    id <ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry> nextExpirable_;
    id <ComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry> previousExpirable_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_initWithId_withInt_withComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry__params;
- (void)dealloc;
- (void)setPreviousExpirableWithComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id)arg1;
- (id)getPreviousExpirable;
- (void)setNextExpirableWithComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id)arg1;
- (id)getNextExpirable;
- (void)setExpirationTimeWithLong:(long long)arg1;
- (long long)getExpirationTime;
- (id)initWithId:(id)arg1 withInt:(int)arg2 withComGoogleCommonCollectMapMakerInternalMap_ReferenceEntry:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

