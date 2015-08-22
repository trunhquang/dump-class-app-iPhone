//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UICollectionViewDataSource.h"

@class FBMagicStoryCollection, FBUserSession, NSString;

@interface FBMagicStoryEditAssetDataSource : NSObject <UICollectionViewDataSource>
{
    FBUserSession *_session;
    id <FBMagicStoryEditCellDelegate> _cellDelegate;
    FBMagicStoryCollection *_collection;
    unsigned int _currentBurstIndex;
    float _burstDetailViewHeight;
}

@property(nonatomic) float burstDetailViewHeight; // @synthesize burstDetailViewHeight=_burstDetailViewHeight;
@property(nonatomic) unsigned int currentBurstIndex; // @synthesize currentBurstIndex=_currentBurstIndex;
@property(retain, nonatomic) FBMagicStoryCollection *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)initWithCollection:(id)arg1 session:(id)arg2 cellDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
