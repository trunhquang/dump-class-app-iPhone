//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNFloatingPeopleSearchViewControllerDelegate.h"
#import "MNMainTabNullStateViewDelegate.h"
#import "MNSearchBarDelegate.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"

@class FBListViewScrollManager, MNFloatingPeopleSearchViewController, MNLoadingView, MNMainTabNullStateView, MNSearchBar, NSString, UISegmentedControl, UISwipeGestureRecognizer, UITableView, UITapGestureRecognizer;

@interface MNPeopleView : UIView <MNSearchBarDelegate, MNMainTabNullStateViewDelegate, MNFloatingPeopleSearchViewControllerDelegate, UISearchBarDelegate, UITableViewDelegate>
{
    FBListViewScrollManager *_scrollManager;
    MNFloatingPeopleSearchViewController *_searchBarViewController;
    MNLoadingView *_loadingView;
    BOOL _showsLoadingIndicator;
    BOOL _isSearching;
    UITableView *_messengerTableView;
    UITableView *_facebookTableView;
    UITableView *_searchResultsTableView;
    UISegmentedControl *_segmentedControl;
    id <MNPeopleViewDelegate> _delegate;
    unsigned int _nuxState;
    unsigned int _selectedSegmentType;
    MNSearchBar *_searchBar;
    UIView *_searchResultsDimmingView;
    UITapGestureRecognizer *_tapDimmingViewGesture;
    UISwipeGestureRecognizer *_swipeDimmingViewGesture;
    float _lastScrollDistanceFromTop;
    MNMainTabNullStateView *_nullStateView;
}

@property(retain, nonatomic) MNMainTabNullStateView *nullStateView; // @synthesize nullStateView=_nullStateView;
@property(nonatomic) float lastScrollDistanceFromTop; // @synthesize lastScrollDistanceFromTop=_lastScrollDistanceFromTop;
@property(retain, nonatomic) UISwipeGestureRecognizer *swipeDimmingViewGesture; // @synthesize swipeDimmingViewGesture=_swipeDimmingViewGesture;
@property(retain, nonatomic) UITapGestureRecognizer *tapDimmingViewGesture; // @synthesize tapDimmingViewGesture=_tapDimmingViewGesture;
@property(retain, nonatomic) UIView *searchResultsDimmingView; // @synthesize searchResultsDimmingView=_searchResultsDimmingView;
@property(nonatomic) BOOL isSearching; // @synthesize isSearching=_isSearching;
@property(retain, nonatomic) MNSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) unsigned int selectedSegmentType; // @synthesize selectedSegmentType=_selectedSegmentType;
@property(nonatomic) BOOL showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) unsigned int nuxState; // @synthesize nuxState=_nuxState;
@property(nonatomic) __weak id <MNPeopleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UISegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(readonly, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_searchResultsTableView;
@property(retain, nonatomic) UITableView *facebookTableView; // @synthesize facebookTableView=_facebookTableView;
@property(retain, nonatomic) UITableView *messengerTableView; // @synthesize messengerTableView=_messengerTableView;
- (void).cxx_destruct;
- (void)floatingPeopleSearchViewControllerDidSelectCancel:(id)arg1;
- (void)_updateTableVisibilityForCurrentNuxState;
- (void)mainTabNullStateDidTapSubtitleLink:(id)arg1 withResult:(id)arg2;
- (void)mainTabNullStateDidTapCallToAction:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)_swipedDimmingView;
- (void)_tappedDimmingView;
- (BOOL)_pullDownSearchBarEnabled;
- (void)_updateScrollToTopForTableViews;
- (id)_visibleTableView;
- (void)setSelectedSegment:(unsigned int)arg1 animated:(BOOL)arg2 scrollToTop:(BOOL)arg3;
- (void)_scrollTableViewToTop:(id)arg1 animated:(BOOL)arg2;
- (void)scrollToTopAnimated:(BOOL)arg1;
- (void)setShowsSearchBar:(BOOL)arg1 dimBackground:(BOOL)arg2;
@property(nonatomic) BOOL showsSearchBar;
- (unsigned int)getSegmentTypeForTableView:(id)arg1;
- (void)reloadSelectedTableView;
- (void)setShowsLoadingIndicator:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL showsPeopleNux;
- (struct CGRect)_searchResultsTableViewFrame;
- (struct CGRect)_searchBarFrame;
- (void)dealloc;
- (void)_layoutNullState;
- (void)_layoutTableViews;
- (void)_updateTableViewContentInset;
- (void)_layoutLoadingIndicatorView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
