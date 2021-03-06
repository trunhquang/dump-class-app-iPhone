//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class FBGroupsTabNavSectionViewController, FBUserSession, NSMutableArray, NSMutableDictionary, NSString, UICollectionView;

@interface FBGroupsTabDataSource : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    FBUserSession *_session;
    NSMutableArray *_events;
    NSMutableArray *_groups;
    unsigned int _eventFooterStatus;
    unsigned int _groupsFooterStatus;
    NSMutableDictionary *_observationHandles;
    BOOL _showGroupsNavSection;
    id <FBGroupsTabActionProviderProtocol> _actionProvider;
    UICollectionView *_collectionViewMutator;
    id <FBGroupsTabViewConfig> _config;
    FBGroupsTabNavSectionViewController *_navSectionViewController;
}

@property(retain, nonatomic) FBGroupsTabNavSectionViewController *navSectionViewController; // @synthesize navSectionViewController=_navSectionViewController;
@property(retain, nonatomic) id <FBGroupsTabViewConfig> config; // @synthesize config=_config;
@property(nonatomic) __weak UICollectionView *collectionViewMutator; // @synthesize collectionViewMutator=_collectionViewMutator;
@property(nonatomic) __weak id <FBGroupsTabActionProviderProtocol> actionProvider; // @synthesize actionProvider=_actionProvider;
- (void).cxx_destruct;
- (float)_separatorThickness;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (void)_didTapCreateGroup:(id)arg1;
- (void)_didTapCreateEvent:(id)arg1;
- (void)_didTapGroupsHeader;
- (void)_didTapEventsHeader;
- (void)_updateUnseenStateForLandingItem:(id)arg1 atIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 navCellForItemAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 dropShadowCellForItemAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 gapCellForItemAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 footerCellForItemAtIndexPath:(id)arg2;
- (id)_squareBorderImageView:(float)arg1;
- (id)_roundCoverPhotoBorderImageView;
- (void)_updateCell:(id)arg1 forIndexPath:(id)arg2 landingItem:(id)arg3;
- (void)_updateCell:(id)arg1 forIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)_dataArrayForSection:(unsigned int)arg1;
- (id)_headerConfigForSection:(unsigned int)arg1;
- (id)_headerConfigForSectionAtIndexPath:(id)arg1;
- (id)_collectionView:(id)arg1 footerViewForSectionAtIndexPath:(id)arg2;
- (id)_collectionView:(id)arg1 headerViewForSectionAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (BOOL)_showSectionFooterForSection:(unsigned int)arg1;
- (BOOL)_showSectionHeaderForSection:(unsigned int)arg1;
- (void)_resetGroupsFooterMessage;
- (void)_resetEventsFooterMessage;
- (void)showFooterSpinnerForLoaderSection:(int)arg1;
- (void)_landingItemUpdated:(id)arg1 inSection:(unsigned int)arg2;
- (void)_groupsLandingItemUpdated:(id)arg1;
- (void)_eventsLandingItemUpdated:(id)arg1;
- (void)_startObservingLandingItems:(id)arg1 selector:(SEL)arg2;
- (void)_stopObservingLandingItems:(id)arg1;
- (void)reloadData;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

