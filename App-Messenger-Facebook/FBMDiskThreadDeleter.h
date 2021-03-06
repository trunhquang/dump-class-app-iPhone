//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBClassProvidable.h"

@class FBMessagingStore, NSObject<OS_dispatch_queue>, NSString;

@interface FBMDiskThreadDeleter : NSObject <FBClassProvidable>
{
    FBMessagingStore *_messagingStore;
    NSObject<OS_dispatch_queue> *_deleteQueue;
    id <FBMAppProperties> _appProperties;
}

- (void).cxx_destruct;
- (void)beginDeleteThreadWithFbIdFromDisk:(id)arg1;
- (id)initWithProviderMapData:(id)arg1;
- (id)initWithMessagingStore:(id)arg1 appProperties:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

