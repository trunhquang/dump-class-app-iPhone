//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBaseStruct.h"

#import "NSCoding.h"
#import "TBase.h"

@class IGRaindropUser, NSString;

@interface IGRaindropHideEvent : TBaseStruct <TBase, NSCoding>
{
    IGRaindropUser *__thrift_targetUser;
    long long __thrift_sectionNumber;
    long long __thrift_position;
    NSString *__thrift_algorithm;
    NSString *__thrift_clusterkey;
    BOOL __thrift_targetUser_set;
    BOOL __thrift_sectionNumber_set;
    BOOL __thrift_position_set;
    BOOL __thrift_algorithm_set;
    BOOL __thrift_clusterkey_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (BOOL)makeImmutable;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetClusterkey;
- (BOOL)clusterkeyIsSet;
@property(retain, nonatomic) NSString *clusterkey;
- (void)unsetAlgorithm;
- (BOOL)algorithmIsSet;
@property(retain, nonatomic) NSString *algorithm;
- (void)unsetPosition;
- (BOOL)positionIsSet;
@property(nonatomic) long long position;
- (void)unsetSectionNumber;
- (BOOL)sectionNumberIsSet;
@property(nonatomic) long long sectionNumber;
- (void)unsetTargetUser;
- (BOOL)targetUserIsSet;
@property(retain, nonatomic) IGRaindropUser *targetUser;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetUser:(id)arg1 sectionNumber:(long long)arg2 position:(long long)arg3 algorithm:(id)arg4 clusterkey:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
