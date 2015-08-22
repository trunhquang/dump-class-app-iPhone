//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "CBLRemoteModelCollectionDelegate.h"
#import "CBLSimilarPlaceProtocol.h"
#import "CLLocationManagerDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CBLPlace, CBLPlaceImagesViewController, CBLRemoteModelCollection, CBLSearchBar, CBLSimilarPlacesViewController, CLLocation, NSMutableArray, NSString, UIImageView, UILabel, UITableView, UIView;

@interface CBLPlaceSearchViewController : CBLBaseViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, CBLRemoteModelCollectionDelegate, CLLocationManagerDelegate, CBLSimilarPlaceProtocol>
{
    BOOL _immediatelySearchNearby;
    BOOL _cachePlaceSelector;
    BOOL _waitingOnLocation;
    id <CBLPlaceSearchViewControllerDelegate> _delegate;
    CBLPlace *_referencePlace;
    CBLPlaceImagesViewController *_imagesController;
    CBLRemoteModelCollection *_placeCollection;
    CBLSimilarPlacesViewController *_similarPlacesViewController;
    UITableView *_tableView;
    UIView *_searchTipsView;
    UIView *_noSearchResultsView;
    UIView *_placeSearchBarDivider;
    CBLSearchBar *_placeSearchBar;
    CLLocation *_currentLocation;
    UIImageView *_flagView;
    UILabel *_flagString;
    NSMutableArray *_cacheGeocodedPlaces;
    UIView *_hintView;
    UILabel *_noResultsHeader;
    UILabel *_noResultsBody;
}

@property(nonatomic) BOOL waitingOnLocation; // @synthesize waitingOnLocation=_waitingOnLocation;
@property(retain, nonatomic) UILabel *noResultsBody; // @synthesize noResultsBody=_noResultsBody;
@property(retain, nonatomic) UILabel *noResultsHeader; // @synthesize noResultsHeader=_noResultsHeader;
@property(retain, nonatomic) UIView *hintView; // @synthesize hintView=_hintView;
@property(retain, nonatomic) NSMutableArray *cacheGeocodedPlaces; // @synthesize cacheGeocodedPlaces=_cacheGeocodedPlaces;
@property(nonatomic) BOOL cachePlaceSelector; // @synthesize cachePlaceSelector=_cachePlaceSelector;
@property(retain, nonatomic) UILabel *flagString; // @synthesize flagString=_flagString;
@property(retain, nonatomic) UIImageView *flagView; // @synthesize flagView=_flagView;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CBLSearchBar *placeSearchBar; // @synthesize placeSearchBar=_placeSearchBar;
@property(retain, nonatomic) UIView *placeSearchBarDivider; // @synthesize placeSearchBarDivider=_placeSearchBarDivider;
@property(retain, nonatomic) UIView *noSearchResultsView; // @synthesize noSearchResultsView=_noSearchResultsView;
@property(retain, nonatomic) UIView *searchTipsView; // @synthesize searchTipsView=_searchTipsView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) CBLSimilarPlacesViewController *similarPlacesViewController; // @synthesize similarPlacesViewController=_similarPlacesViewController;
@property(retain, nonatomic) CBLRemoteModelCollection *placeCollection; // @synthesize placeCollection=_placeCollection;
@property(retain, nonatomic) CBLPlaceImagesViewController *imagesController; // @synthesize imagesController=_imagesController;
@property(nonatomic) BOOL immediatelySearchNearby; // @synthesize immediatelySearchNearby=_immediatelySearchNearby;
@property(retain, nonatomic) CBLPlace *referencePlace; // @synthesize referencePlace=_referencePlace;
@property(nonatomic) __weak id <CBLPlaceSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)similarPlaceCancelled;
- (void)similarPlaceSelected:(id)arg1;
- (void)showMoreLocations:(id)arg1;
- (id)addDividerToBottomOfView:(id)arg1;
- (void)changeSearchBarFontColorTo:(id)arg1;
- (void)updatePlaceSearchBarWithPlace:(id)arg1;
- (void)computeCurrentLocation:(id)arg1;
- (void)searchForPlaces:(id)arg1;
- (void)searchTipTapped:(id)arg1;
- (void)cancel:(id)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)remoteModelCollectionDidClear:(id)arg1;
- (void)remoteModelCollectionDidUpdateContent:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)configureBarComponentVisibilityForText:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (id)placeNearView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
