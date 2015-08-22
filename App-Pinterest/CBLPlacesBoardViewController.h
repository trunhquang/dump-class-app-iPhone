//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBoardViewController.h"

#import "CBLBoardHeaderViewDelegate.h"
#import "CBLBoardMapViewDelegate.h"
#import "CBLRemoteModelCollectionDelegate.h"
#import "CBLSinglePinPopoverDelegate.h"
#import "CBLTextInputViewControllerDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class CBLBoardMapView, NSString, UIPopoverController;

@interface CBLPlacesBoardViewController : CBLBoardViewController <CBLBoardHeaderViewDelegate, CBLBoardMapViewDelegate, CBLRemoteModelCollectionDelegate, CBLSinglePinPopoverDelegate, CBLTextInputViewControllerDelegate, UIPopoverControllerDelegate>
{
    CBLBoardMapView *_mapContainerView;
    UIPopoverController *_singlePinPopover;
    struct CGPoint _lastScrollViewOffset;
    struct CGRect _placesPreviousHeaderFrame;
}

@property(retain, nonatomic) UIPopoverController *singlePinPopover; // @synthesize singlePinPopover=_singlePinPopover;
@property(nonatomic) struct CGRect placesPreviousHeaderFrame; // @synthesize placesPreviousHeaderFrame=_placesPreviousHeaderFrame;
@property(nonatomic) struct CGPoint lastScrollViewOffset; // @synthesize lastScrollViewOffset=_lastScrollViewOffset;
@property(retain, nonatomic) CBLBoardMapView *mapContainerView; // @synthesize mapContainerView=_mapContainerView;
- (void).cxx_destruct;
- (id)backgroundColorForSection:(int)arg1;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)attachGesturesToHeader;
- (void)toggleMapView:(id)arg1;
- (void)updateBoardView;
- (void)updateHeaderInvitationView;
- (void)viewWillLayoutSubviews;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (id)activityViewButtonItem;
- (id)refreshButtonItem;
- (void)remoteModelCollectionDidClear:(id)arg1;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (void)remoteModelCollectionWillUpdateContent:(id)arg1;
- (float)boardMapViewHeightForHeaderView:(id)arg1;
- (float)boardMapViewHeightForCardView:(id)arg1;
- (BOOL)boardMapViewShouldUpdateClusters:(id)arg1;
- (void)boardMapView:(id)arg1 didTapOnCollection:(id)arg2 withPlace:(id)arg3;
- (void)boardMapView:(id)arg1 calloutAccessoryControlTappedOnPin:(id)arg2;
- (void)boardMapViewDidFinishLoadingMap:(id)arg1;
- (void)boardHeaderViewTappedTransparentView:(id)arg1;
- (void)boardHeaderWantsToEditBoard:(id)arg1;
- (void)CBLEditBoardViewControllerWasClosed:(id)arg1;
- (struct UIEdgeInsets)collectionViewLayout:(id)arg1 insetsForSection:(int)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)loadContent;
- (void)pinWasTappedFromSinglePinViewController:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (void)showPopoverForPin:(id)arg1 fromMapAnnotationView:(id)arg2;
- (struct CGRect)popoverRectForAnnotationView:(id)arg1;
- (id)placeholderView;
- (void)placeholderDidPresent;
- (BOOL)contentAvailable;
- (void)tappedMap:(id)arg1;
- (void)pinchedMap:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)repositionLegalLabelForPlaceboard;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)switchBoardTypeIfNecessary;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithBoard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
