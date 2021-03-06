//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableIndexSet, NSMutableSet, UICollectionView;

@interface AFCollectionViewUpdateContext : NSObject
{
    BOOL _reloadAll;
    BOOL _needsReload;
    CDUnknownBlockType _dataUpdateBlock;
    CDUnknownBlockType _completionBlock;
    UICollectionView *_collectionView;
    NSMutableIndexSet *_insertedSections;
    NSMutableIndexSet *_deletedSections;
    NSMutableIndexSet *_reloadedSections;
    NSMutableArray *_movedSections;
    NSMutableSet *_insertedItems;
    NSMutableSet *_deletedItems;
    NSMutableSet *_reloadedItems;
    NSMutableSet *_movedItems;
}

+ (id)updateContextWithCollectionView:(id)arg1 combinedUpdateContexts:(id)arg2;
@property(retain, nonatomic) NSMutableSet *movedItems; // @synthesize movedItems=_movedItems;
@property(retain, nonatomic) NSMutableSet *reloadedItems; // @synthesize reloadedItems=_reloadedItems;
@property(retain, nonatomic) NSMutableSet *deletedItems; // @synthesize deletedItems=_deletedItems;
@property(retain, nonatomic) NSMutableSet *insertedItems; // @synthesize insertedItems=_insertedItems;
@property(retain, nonatomic) NSMutableArray *movedSections; // @synthesize movedSections=_movedSections;
@property(retain, nonatomic) NSMutableIndexSet *reloadedSections; // @synthesize reloadedSections=_reloadedSections;
@property(retain, nonatomic) NSMutableIndexSet *deletedSections; // @synthesize deletedSections=_deletedSections;
@property(retain, nonatomic) NSMutableIndexSet *insertedSections; // @synthesize insertedSections=_insertedSections;
@property(nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) CDUnknownBlockType dataUpdateBlock; // @synthesize dataUpdateBlock=_dataUpdateBlock;
@property(nonatomic) BOOL reloadAll; // @synthesize reloadAll=_reloadAll;
- (void).cxx_destruct;
- (void)adjustItems;
- (void)adjustSections;
- (BOOL)updateRequired;
- (void)commitChanges:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)commitChanges;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPath:(id)arg1;
- (void)deleteItemsAtIndexPath:(id)arg1;
- (void)insertItemsAtIndexPath:(id)arg1;
- (void)moveSection:(int)arg1 toSection:(int)arg2;
- (void)reloadSection:(int)arg1;
- (void)deleteSection:(int)arg1;
- (void)insertSection:(int)arg1;
- (id)initWithCollectionView:(id)arg1;

@end

