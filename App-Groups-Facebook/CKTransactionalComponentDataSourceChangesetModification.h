//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKTransactionalComponentDataSourceStateModifying.h"

@class CKTransactionalComponentDataSourceChangeset, NSDictionary, NSString;

@interface CKTransactionalComponentDataSourceChangesetModification : NSObject <CKTransactionalComponentDataSourceStateModifying>
{
    CKTransactionalComponentDataSourceChangeset *_changeset;
    id <CKComponentStateListener> _stateListener;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
- (id)changeFromState:(id)arg1;
- (id)initWithChangeset:(id)arg1 stateListener:(id)arg2 userInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

