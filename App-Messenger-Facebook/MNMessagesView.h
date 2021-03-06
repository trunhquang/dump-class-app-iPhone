//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBToastContainerViewDelegate.h"
#import "MNMessagesNuxViewDelegate.h"
#import "MNThreadPeoplePickerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class FBListViewScrollManager, FBToastContainerView, MNCollectionView, MNLoadingView, MNThreadPeoplePickerView, NSArray, NSMutableArray, NSString, UILongPressGestureRecognizer, UITapGestureRecognizer, UIView<MNMessagesNuxView>, UIView<MNMessagesViewComposing>;

@interface MNMessagesView : UIView <UIGestureRecognizerDelegate, MNMessagesNuxViewDelegate, MNThreadPeoplePickerViewDelegate, FBToastContainerViewDelegate>
{
    MNLoadingView *_loadingView;
    NSMutableArray *_scrollStateStack;
    FBListViewScrollManager *_scrollManager;
    struct CGRect _keyboardFrame;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UITapGestureRecognizer *_collectionViewTapRecognizer;
    MNThreadPeoplePickerView *_threadPeoplePickerView;
    NSArray *_usersForPeoplePicker;
    UIView<MNMessagesViewComposing> *_currentComposingView;
    BOOL _showsPeoplePickerView;
    MNCollectionView *_collectionView;
    UIView *_bottomBarView;
    id <MNMessagesViewDelegate> _delegate;
    FBToastContainerView *_topToastContainerView;
    FBToastContainerView *_bottomToastContainerView;
    int _bottomToastContainerPosition;
    UIView<MNMessagesNuxView> *_messagesNuxView;
}

@property(retain, nonatomic) UIView<MNMessagesNuxView> *messagesNuxView; // @synthesize messagesNuxView=_messagesNuxView;
@property(nonatomic) int bottomToastContainerPosition; // @synthesize bottomToastContainerPosition=_bottomToastContainerPosition;
@property(readonly, nonatomic) FBToastContainerView *bottomToastContainerView; // @synthesize bottomToastContainerView=_bottomToastContainerView;
@property(readonly, nonatomic) FBToastContainerView *topToastContainerView; // @synthesize topToastContainerView=_topToastContainerView;
@property(nonatomic) BOOL showsPeoplePickerView; // @synthesize showsPeoplePickerView=_showsPeoplePickerView;
@property(nonatomic) __weak id <MNMessagesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(readonly, nonatomic) MNCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)_toastContainerViewWillChangeWithDuration:(double)arg1;
- (void)toastContainerViewToastWillAppear:(id)arg1 withAnimationDuration:(double)arg2;
- (void)toastContainerViewToastWillDisappear:(id)arg1 withAnimationDuration:(double)arg2;
- (void)threadPeoplePickerViewDidTapAddMorePeople:(id)arg1;
- (void)_didTapCollectionView:(id)arg1;
- (void)_didTap:(id)arg1;
- (void)_didLongPress:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_triggerContextMenuWithLocationInCollectionView:(struct CGPoint)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)userDidTapMessagesNuxView:(id)arg1;
- (void)hideMessagesNuxView:(id)arg1 animated:(BOOL)arg2;
- (void)showMessagesNuxView:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)_bottomToastViewFrame;
- (struct CGRect)_topToastViewFrame;
- (float)_topToastOriginY;
- (float)mn_topContentInset;
- (void)setUsersForPeoplePicker:(id)arg1;
- (void)_layoutPeoplePicker;
- (float)_visiblePeoplePickerViewHeight;
- (float)_peoplePickerOriginY;
- (void)prepareAlertController:(id)arg1 fromSourceView:(id)arg2;
- (void)showActionSheet:(id)arg1 fromSourceView:(id)arg2;
- (void)_layoutView:(id)arg1 withHeight:(float)arg2;
- (void)removeComposingView:(id)arg1;
- (void)cancelComposingView:(id)arg1;
- (void)endComposingView:(id)arg1 withEndingAnimationConfig:(id)arg2;
- (void)addComposingView:(id)arg1 withBeginningAnimationConfig:(id)arg2;
- (void)updateBottomBarViewHeightWithDuration:(double)arg1 animationOptions:(unsigned int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performWithScrollPositionRestoring:(CDUnknownBlockType)arg1;
- (void)popScrollState;
- (void)pushScrollState;
- (float)_keyboardTopY;
- (void)updateKeyboardFrame:(struct CGRect)arg1 duration:(double)arg2 options:(unsigned int)arg3;
- (float)heightForMessagesList;
- (int)currentScrollPosition;
- (void)scrollMessageListToRowAtIndexPath:(id)arg1 targetPosition:(int)arg2 animation:(int)arg3;
- (BOOL)_isIndexPathCloserToTop:(id)arg1;
- (void)scrollMessageListToRowAtNearestEdgeAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollMessageListToRowAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)scrollMessageListToTopAnimated:(BOOL)arg1;
- (void)scrollMessageListToBottomWithAnimation:(int)arg1;
- (void)_setMessageListContentOffset:(struct CGPoint)arg1 withAnimation:(int)arg2;
- (float)_visibleTopToastHeight;
- (void)_layoutBottomToastView;
- (void)_layoutTopToastView;
- (void)_layoutToastViews;
- (void)_layoutMessagesNuxView;
- (void)_layoutLoadingView;
- (void)_layoutCollectionView;
- (void)_layoutMainContent;
- (void)_layoutBottomBarView;
- (struct CGSize)_constrainedBottomBarViewSize;
- (void)_resizeBottomBarView;
- (void)_resizeCollectionView;
- (void)_layoutAllSubviews;
- (void)layoutSubviews;
- (void)hideLoadingAnimated:(BOOL)arg1;
- (void)showLoadingAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

