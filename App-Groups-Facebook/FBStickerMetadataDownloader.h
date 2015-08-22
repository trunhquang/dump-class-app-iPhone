//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBServiceTransactionMutating.h"

@class FBUserSession, NSString;

@interface FBStickerMetadataDownloader : NSObject <FBServiceTransactionMutating>
{
    unsigned long long _stickerId;
    FBUserSession *_session;
    id <FBServiceTransactionMutating> _graphqlTransaction;
    BOOL _done;
    int _priority;
}

- (void).cxx_destruct;
- (void)changePriorityToNewPriority:(int)arg1;
- (void)_cancelInMainThread;
- (void)cancel;
- (void)_handleWithSticker:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchMetadataWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStickerId:(unsigned long long)arg1 priority:(int)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

