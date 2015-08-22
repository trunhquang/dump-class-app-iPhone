//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IGViewController.h"

#import "IGCollectionViewLayoutDataSource.h"
#import "UICollectionViewDataSource.h"

@class IGCollectionViewLayout, IGInternalCollectionView, IGPullToRefreshControl, NSArray, NSDate, NSString, UIView;

@interface IGCollectionViewController : IGViewController <IGCollectionViewLayoutDataSource, UICollectionViewDataSource>
{
    BOOL _maintainsDistanceFromBottomOnReload;
    BOOL _flippedScrollIndicator;
    BOOL _hasNotifiedForEndOfContentReached;
    BOOL _showsPullToRefreshControl;
    id <IGCollectionViewControllerDelegate> _delegate;
    id <IGCollectionViewControllerDataSource> _dataSource;
    IGCollectionViewLayout *_collectionViewLayout;
    NSArray *_objects;
    id _context;
    float _supplementaryHeaderViewHeight;
    float _supplementaryFooterViewHeight;
    float _headerAdjustmentAmount;
    UIView *_backgroundSupplementaryHeaderView;
    UIView *_backgroundSupplementaryFooterView;
    int _keyboardDismissMode;
    float _pullToRefreshYInset;
    NSArray *_currentLoadingUnfilteredObjects;
    NSArray *_currentLoadingFilteredObjects;
    id _currentLoadingContext;
    IGInternalCollectionView *_collectionView;
    IGPullToRefreshControl *_pullToRefreshControl;
    float _pullToRefreshInset;
    NSDate *_pullToRefreshStartTime;
    int _reloadingCount;
    struct CGSize _contentSize;
    struct UIEdgeInsets _contentInset;
}

@property(nonatomic) int reloadingCount; // @synthesize reloadingCount=_reloadingCount;
@property(retain, nonatomic) NSDate *pullToRefreshStartTime; // @synthesize pullToRefreshStartTime=_pullToRefreshStartTime;
@property(nonatomic) BOOL showsPullToRefreshControl; // @synthesize showsPullToRefreshControl=_showsPullToRefreshControl;
@property(nonatomic) float pullToRefreshInset; // @synthesize pullToRefreshInset=_pullToRefreshInset;
@property(nonatomic) BOOL hasNotifiedForEndOfContentReached; // @synthesize hasNotifiedForEndOfContentReached=_hasNotifiedForEndOfContentReached;
@property(retain, nonatomic) IGPullToRefreshControl *pullToRefreshControl; // @synthesize pullToRefreshControl=_pullToRefreshControl;
@property(retain, nonatomic) IGInternalCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id currentLoadingContext; // @synthesize currentLoadingContext=_currentLoadingContext;
@property(retain, nonatomic) NSArray *currentLoadingFilteredObjects; // @synthesize currentLoadingFilteredObjects=_currentLoadingFilteredObjects;
@property(retain, nonatomic) NSArray *currentLoadingUnfilteredObjects; // @synthesize currentLoadingUnfilteredObjects=_currentLoadingUnfilteredObjects;
@property(nonatomic) float pullToRefreshYInset; // @synthesize pullToRefreshYInset=_pullToRefreshYInset;
@property(nonatomic, getter=hasFlippedScrollIndicator) BOOL flippedScrollIndicator; // @synthesize flippedScrollIndicator=_flippedScrollIndicator;
@property(nonatomic) int keyboardDismissMode; // @synthesize keyboardDismissMode=_keyboardDismissMode;
@property(nonatomic) BOOL maintainsDistanceFromBottomOnReload; // @synthesize maintainsDistanceFromBottomOnReload=_maintainsDistanceFromBottomOnReload;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) UIView *backgroundSupplementaryFooterView; // @synthesize backgroundSupplementaryFooterView=_backgroundSupplementaryFooterView;
@property(retain, nonatomic) UIView *backgroundSupplementaryHeaderView; // @synthesize backgroundSupplementaryHeaderView=_backgroundSupplementaryHeaderView;
@property(nonatomic) float headerAdjustmentAmount; // @synthesize headerAdjustmentAmount=_headerAdjustmentAmount;
@property(nonatomic) float supplementaryFooterViewHeight; // @synthesize supplementaryFooterViewHeight=_supplementaryFooterViewHeight;
@property(nonatomic) float supplementaryHeaderViewHeight; // @synthesize supplementaryHeaderViewHeight=_supplementaryHeaderViewHeight;
@property(retain, nonatomic) id context; // @synthesize context=_context;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
@property(retain, nonatomic) IGCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak id <IGCollectionViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IGCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)finishRefreshFromPullToRefreshControl;
- (id)indexPathForCell:(id)arg1;
- (void)enumerateVisibleViewsWithClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateVisibleCellsWithClass:(Class)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)cellForItemAtIndexPath:(id)arg1;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifier:(id)arg2 forIndexPath:(id)arg3;
- (id)dequeueReusableCellWithReuseIdentifier:(id)arg1 forIndexPath:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
@property(readonly, nonatomic) BOOL isReloadingContent;
- (void)didChangeHeaderAdjustmentAmount:(float)arg1;
- (id)collectionViewLayout:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5;
- (struct CGSize)collectionViewLayout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5;
- (int)collectionViewLayout:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4;
- (int)numberOfSectionsForCollectionViewLayout:(id)arg1 withObjects:(id)arg2 context:(id)arg3;
- (void)collectionViewLayout:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)onPullToRefresh:(id)arg1;
- (void)updatePullToRefreshControl;
- (void)fakePullToRefreshWithDuration:(double)arg1 animated:(BOOL)arg2;
- (void)notifyChangeFromScrollPosition:(struct CGPoint)arg1 toScrollPosition:(struct CGPoint)arg2;
- (void)onScrollViewPan:(id)arg1;
- (void)layoutFooterView;
- (void)setSupplementaryHeaderViewHeight:(float)arg1 animated:(BOOL)arg2;
- (id)indexPathForPoint:(struct CGPoint)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToBottomAnimated:(BOOL)arg1;
- (void)scrollToTopOfContentInsetAnimated:(BOOL)arg1;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)setItemHeight:(float)arg1 atIndexPath:(id)arg2;
- (void)setFooterHeight:(float)arg1 atIndexPath:(id)arg2;
- (void)reloadWithCurrentObjects;
- (void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(BOOL)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (BOOL)disableAsynchronousLoading;
- (id)currentReloadContext;
- (void)reloadWithNewObjects:(id)arg1 context:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)filteredObjectsArrayFromArray:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *visibleCells;
- (unsigned int)mostVisibleSection;
- (id)visibleIndexPaths;
@property(readonly, copy, nonatomic) NSArray *sortedVisibleIndexPaths;
@property(readonly, nonatomic) float currentContentOffsetY;
@property(readonly, nonatomic) BOOL isAtTopOfContent;
- (float)inverseScrollIndicatorPaddingInset;
- (void)applyContentInset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
- (void)registerClasses;
- (BOOL)automaticallyAdjustsScrollViewInsets;
- (id)initWithLayout:(id)arg1 showsPullToRefresh:(BOOL)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
