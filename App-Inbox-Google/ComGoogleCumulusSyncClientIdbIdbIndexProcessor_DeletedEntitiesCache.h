//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexMetaData.h"

#import "JavaLangIterable.h"

@class ComGoogleCumulusCommonCollectIntrusiveQueue, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbIndexProcessor_DeletedEntitiesCache : ComGoogleCumulusSyncClientIdbIdbIndexProcessor_IndexMetaData <JavaLangIterable>
{
    ComGoogleCumulusCommonCollectIntrusiveQueue *deletedEntities_;
}

- (unsigned int)countByEnumeratingWithState:(CDStruct_11f37819 *)arg1 objects:(id *)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)iterator;
- (void)removeWithInt:(int)arg1;
- (void)addWithInt:(int)arg1 withJavaUtilList:(id)arg2;
- (id)toCustomValue;
- (void)populateFromProtoWithComGoogleCumulusCommonIndexIndexProto_CustomValue:(id)arg1;
- (id)initWithComGoogleCumulusCommonIndexIdbAdapter:(id)arg1 withDouble:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

