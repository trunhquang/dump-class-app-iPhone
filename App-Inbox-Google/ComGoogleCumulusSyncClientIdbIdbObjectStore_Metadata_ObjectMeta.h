//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JavaLangInteger, NSString;

@interface ComGoogleCumulusSyncClientIdbIdbObjectStore_Metadata_ObjectMeta : NSObject
{
    NSString *soid_;
    BOOL hasState_;
    JavaLangInteger *pendingPriority_;
    JavaLangInteger *mutationOrder_;
}

- (void)dealloc;
- (id)toStoredMetaProto;
- (id)toMappingProtoWithIntArray:(id)arg1;
- (void)applyUpdateWithComGoogleCumulusSyncClientObjectUpdate:(id)arg1;
- (BOOL)hasState;
- (id)getSoid;
- (id)initWithComGoogleCumulusFrameworkStoreProto_StoredMeta:(id)arg1;
- (id)initWithComGoogleCumulusFrameworkStoreProto_Mapping:(id)arg1;
- (id)initWithNSString:(id)arg1 withComGoogleCumulusSyncClientObjectUpdate:(id)arg2;

@end

