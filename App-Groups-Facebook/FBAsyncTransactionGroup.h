//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface FBAsyncTransactionGroup : NSObject
{
    NSMutableSet *_containerLayers;
    NSMutableSet *_pendingContainerLayers;
    NSMutableArray *_pendingCompletionHandlers;
}

+ (void)layoutAndDisplayAllWindowsIfNeeded;
+ (void)displaySublayersOfLayerIfNeeded:(id)arg1;
+ (void)layoutAndDisplaySublayersOfLayerIfNeeded:(id)arg1;
+ (void)registerTransactionGroupAsMainRunloopObserver:(id)arg1;
+ (id)mainTransactionGroup;
- (void).cxx_destruct;
- (void)forceLayoutAndFlushPendingTransactions;
- (void)forceLayoutAndFlushPendingTransactionsIfNeeded;
- (void)commit;
- (void)flushPendingTransactions:(CDUnknownBlockType)arg1;
- (void)removeTransactionContainer:(id)arg1;
- (void)addTransactionContainer:(id)arg1;
- (id)init;

@end

