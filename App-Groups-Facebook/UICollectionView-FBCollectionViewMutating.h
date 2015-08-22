//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "FBCollectionViewMutating.h"

@class NSString;

@interface UICollectionView (FBCollectionViewMutating) <FBCollectionViewMutating>
- (id)layoutAttributesForItemAtIndexPath:(id)arg1 forDataSource:(id)arg2;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2 forDataSource:(id)arg3;
- (id)cellForItemAtIndexPath:(id)arg1 forDataSource:(id)arg2;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2 forDataSource:(id)arg3;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2 forDataSource:(id)arg3;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2 forDataSource:(id)arg3;
- (void)reloadItemsAtIndexPaths:(id)arg1 forDataSource:(id)arg2;
- (void)deleteItemsAtIndexPaths:(id)arg1 forDataSource:(id)arg2;
- (void)insertItemsAtIndexPaths:(id)arg1 forDataSource:(id)arg2;
- (id)absoluteIndexPathFor:(id)arg1 fromDataSource:(id)arg2;
- (id)dataSourceForIndexPath:(id)arg1 translatedIndexPath:(id *)arg2;
- (id)indexPathsForVisibleItemsInDataSource:(id)arg1;
- (void)reloadSections:(id)arg1 forDataSource:(id)arg2;
- (void)deleteSections:(id)arg1 forDataSource:(id)arg2;
- (void)insertSections:(id)arg1 forDataSource:(id)arg2;
- (id)rootCollectionView;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

