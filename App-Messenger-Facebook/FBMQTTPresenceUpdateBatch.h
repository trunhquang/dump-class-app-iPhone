//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface FBMQTTPresenceUpdateBatch : NSObject <TBase, NSCoding>
{
    BOOL __thrift_isIncrementalUpdate;
    NSMutableArray *__thrift_updates;
    BOOL __thrift_isIncrementalUpdate_set;
    BOOL __thrift_updates_set;
}

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)toDict;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetUpdates;
- (BOOL)updatesIsSet;
@property(retain, nonatomic) NSMutableArray *updates;
- (void)unsetIsIncrementalUpdate;
- (BOOL)isIncrementalUpdateIsSet;
@property(nonatomic) BOOL isIncrementalUpdate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIsIncrementalUpdate:(BOOL)arg1 updates:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
