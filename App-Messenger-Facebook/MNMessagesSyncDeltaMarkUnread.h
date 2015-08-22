//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "TBase.h"

@class NSMutableArray, NSString;

@interface MNMessagesSyncDeltaMarkUnread : NSObject <TBase, NSCoding>
{
    NSMutableArray *__threadKeys;
    NSMutableArray *__folders;
    BOOL __threadKeys_isset;
    BOOL __folders_isset;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)validate;
- (void)write:(id)arg1;
- (void)read:(id)arg1;
- (void)unsetFolders;
- (BOOL)foldersIsSet;
@property(retain, nonatomic, getter=folders, setter=setFolders:) NSMutableArray *folders;
- (void)unsetThreadKeys;
- (BOOL)threadKeysIsSet;
@property(retain, nonatomic, getter=threadKeys, setter=setThreadKeys:) NSMutableArray *threadKeys;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithThreadKeys:(id)arg1 folders:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
