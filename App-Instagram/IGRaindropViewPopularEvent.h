//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSString;

@interface IGRaindropViewPopularEvent : TBaseStruct <TBase, NSCoding>
{
    long long __thrift_mediaId;
    long long __thrift_mediaOwnerId;
    NSString *__thrift_rankToken;
    BOOL __thrift_mediaId_set;
    BOOL __thrift_mediaOwnerId_set;
    BOOL __thrift_rankToken_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetRankToken;
- (BOOL)rankTokenIsSet;
@property(retain, nonatomic) NSString *rankToken;
- (void)unsetMediaOwnerId;
- (BOOL)mediaOwnerIdIsSet;
@property(nonatomic) long long mediaOwnerId;
- (void)unsetMediaId;
- (BOOL)mediaIdIsSet;
@property(nonatomic) long long mediaId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaId:(long long)arg1 mediaOwnerId:(long long)arg2 rankToken:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

