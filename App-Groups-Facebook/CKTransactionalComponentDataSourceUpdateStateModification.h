//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CKTransactionalComponentDataSourceStateModifying.h"

@class NSString;

@interface CKTransactionalComponentDataSourceUpdateStateModification : NSObject <CKTransactionalComponentDataSourceStateModifying>
{
    unordered_map_4560de9f _stateUpdates;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)changeFromState:(id)arg1;
- (id)initWithStateUpdates:(const unordered_map_4560de9f *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

