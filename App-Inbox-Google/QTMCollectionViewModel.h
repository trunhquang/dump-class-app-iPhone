//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QTMCollectionViewModelDelegate.h"

@class NSMutableArray, NSMutableIndexSet, NSMutableSet, NSString;

@interface QTMCollectionViewModel : NSObject <QTMCollectionViewModelDelegate>
{
    NSMutableArray *_sectionModels;
    BOOL _shouldObserveUpdates;
    NSMutableSet *_deletedIndexPaths;
    NSMutableSet *_insertedIndexPaths;
    NSMutableSet *_reloadedIndexPaths;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_insertedSections;
    NSMutableIndexSet *_reloadedSections;
    id <QTMCollectionViewModelDelegate> _delegate;
}

@property(nonatomic) __weak id <QTMCollectionViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didCancelSwipeToDismissSection:(int)arg2;
- (void)collectionView:(id)arg1 didEndSwipeToDismissSection:(int)arg2;
- (void)collectionView:(id)arg1 willBeginSwipeToDismissSection:(int)arg2;
- (BOOL)collectionView:(id)arg1 canSwipeToDismissSection:(int)arg2;
- (void)collectionView:(id)arg1 didCancelSwipeToDismissItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndSwipeToDismissItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willBeginSwipeToDismissItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canSwipeToDismissItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 willDeleteItemsAtIndexPaths:(id)arg2;
- (void)collectionView:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canSelectItemDuringEditingAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;
- (void)collectionViewDidEndEditing:(id)arg1;
- (void)collectionViewWillEndEditing:(id)arg1;
- (void)collectionViewDidBeginEditing:(id)arg1;
- (void)collectionViewWillBeginEditing:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 withCollectionView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)observeModelUpdateAction:(int)arg1 toIndexPath:(id)arg2;
- (BOOL)isValidIndexPath:(id)arg1;
- (BOOL)isEmpty;
- (id)allIndexPaths;
- (int)numberOfItemsInSection:(int)arg1;
- (int)numberOfSections;
- (int)sectionForFooter:(id)arg1;
- (int)sectionForHeader:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (BOOL)hasFooterInSection:(int)arg1;
- (BOOL)hasHeaderInSection:(int)arg1;
- (BOOL)hasItemInSection:(int)arg1;
- (BOOL)hasItemAtIndexPath:(id)arg1;
- (id)footerInSection:(int)arg1;
- (id)headerInSection:(int)arg1;
- (id)lastItemInSection:(int)arg1;
- (id)firstItemInSection:(int)arg1;
- (id)itemsInSection:(int)arg1;
- (id)itemsAtIndexPaths:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)exchangeFooterInSection:(int)arg1 withFooterInSection:(int)arg2;
- (void)exchangeHeaderInSection:(int)arg1 withHeaderInSection:(int)arg2;
- (void)exchangeItemAtIndexPath:(id)arg1 withItemAtIndexPath:(id)arg2;
- (void)moveFooterInSection:(int)arg1 toSection:(int)arg2;
- (void)moveHeaderInSection:(int)arg1 toSection:(int)arg2;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)replaceItemAtIndexPath:(id)arg1 withObject:(id)arg2;
- (void)removeAllObjects;
- (void)removeSection:(int)arg1;
- (void)removeFooterInSection:(int)arg1;
- (void)removeHeaderInSection:(int)arg1;
- (void)removeItemsAtIndexPaths:(id)arg1;
- (void)removeAllItemsInSection:(int)arg1;
- (void)removeItemAtIndexPath:(id)arg1;
- (void)addItem:(id)arg1 toSection:(int)arg2 observeChanges:(BOOL)arg3;
- (void)setFooter:(id)arg1 forSection:(int)arg2;
- (void)setHeader:(id)arg1 forSection:(int)arg2;
- (void)insertSection:(int)arg1 withItems:(id)arg2 header:(id)arg3 footer:(id)arg4;
- (void)insertItems:(id)arg1 atIndexPaths:(id)arg2;
- (void)addItems:(id)arg1 toSection:(int)arg2;
- (void)insertItem:(id)arg1 atIndexPath:(id)arg2;
- (void)addItem:(id)arg1 toSection:(int)arg2;
- (BOOL)object:(id)arg1 conformsToProtocol:(id)arg2;
- (void)removeModelObjectAtSection:(int)arg1;
- (id)getOrAddModelObjectAtSection:(int)arg1;
- (id)modelObjectAtSection:(int)arg1;
- (id)insertSectionModelObjectAtIndex:(int)arg1;
- (id)addSectionModelObject;
- (BOOL)isSectionEmptyAtSection:(int)arg1;
- (id)parseElementOfKind:(unsigned int)arg1 fromObject:(id)arg2;
- (void)compileDataWithSectionedArray:(id)arg1;
- (id)initWithSectionedArray:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

