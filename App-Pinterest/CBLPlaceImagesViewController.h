//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLRemoteModelCollectionBasedViewController.h"

#import "ASCollectionViewDataSource.h"
#import "ASCollectionViewDelegate.h"

@class ASCollectionView, CBLIndeterminateActivityIndicatorView, CBLOuterShadowedView, CBLPlace, NSString, UICollectionViewFlowLayout;

@interface CBLPlaceImagesViewController : CBLRemoteModelCollectionBasedViewController <ASCollectionViewDataSource, ASCollectionViewDelegate>
{
    BOOL _isPinning;
    id <CBLPlaceImagesViewControllerDelegate> _delegate;
    CBLPlace *_place;
    CBLIndeterminateActivityIndicatorView *_loadingIndicatorView;
    ASCollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    CBLOuterShadowedView *_headerView;
}

@property(retain, nonatomic) CBLOuterShadowedView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) BOOL isPinning; // @synthesize isPinning=_isPinning;
@property(retain, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) ASCollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) CBLIndeterminateActivityIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(retain, nonatomic) CBLPlace *place; // @synthesize place=_place;
@property(nonatomic) __weak id <CBLPlaceImagesViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadModelView;
- (id)modelView;
- (id)localLayoutAttributes;
- (id)placeImagesHeader;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 nodeForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (void)updateFlowLayoutWithViewSize:(struct CGSize)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (id)initWithPlace:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

