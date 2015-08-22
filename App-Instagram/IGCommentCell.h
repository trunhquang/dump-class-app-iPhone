//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "IGCellSwipeActionManagerDelegate.h"
#import "IGCommentActionViewDelegate.h"
#import "IGCommentContentViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class CALayer, IGCellSwipeActionManager, IGCommentActionView, IGCommentContentView, IGCommentModel, NSString, UIButton, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface IGCommentCell : UITableViewCell <IGCellSwipeActionManagerDelegate, UIGestureRecognizerDelegate, IGCommentActionViewDelegate, IGCommentContentViewDelegate>
{
    IGCommentActionView *_actionsView;
    float _beginningX;
    BOOL _showActions;
    int _maxActionBarWidth;
    UIView *_separatorView;
    UIView *_containerView;
    BOOL _enableSwipeToDelete;
    IGCommentModel *_comment;
    id <IGCommentCellDelegate> _delegate;
    IGCommentContentView *_commentView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapGestureRecognizer;
    IGCellSwipeActionManager *_cellSwipeActionManager;
    UIButton *_replyButton;
    UIButton *_deleteButton;
    UIButton *_reportButton;
    CALayer *_reportButtonSeparatorLayer;
}

@property(retain, nonatomic) CALayer *reportButtonSeparatorLayer; // @synthesize reportButtonSeparatorLayer=_reportButtonSeparatorLayer;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) IGCellSwipeActionManager *cellSwipeActionManager; // @synthesize cellSwipeActionManager=_cellSwipeActionManager;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(nonatomic) BOOL enableSwipeToDelete; // @synthesize enableSwipeToDelete=_enableSwipeToDelete;
@property(retain, nonatomic) IGCommentContentView *commentView; // @synthesize commentView=_commentView;
@property(nonatomic) __weak id <IGCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) IGCommentModel *comment; // @synthesize comment=_comment;
- (void).cxx_destruct;
- (BOOL)cellSwipeActionManagerShouldShowActions:(id)arg1;
- (void)cellSwipeActionManager:(id)arg1 didCompleteSwipeActionForButton:(id)arg2;
- (void)cellSwipeActionManager:(id)arg1 willCompleteSwipeActionForButton:(id)arg2;
- (void)cellSwipeActionManagerDidHideActions:(id)arg1;
- (void)cellSwipeActionManagerDidShowActions:(id)arg1;
- (void)cellSwipeActionManagerDidStartPanGestureRecognition:(id)arg1;
- (id)cellActionButtonsForComment:(id)arg1;
- (void)commentActionReportButtonTapped;
- (void)commentActionDeleteButtonTapped;
- (void)commentActionReplyButtonTapped;
- (void)locationTapped:(id)arg1;
- (void)replyToUser:(id)arg1;
- (void)reply;
- (void)commentUserTapped:(id)arg1;
- (BOOL)useCellSwipeActionManagerAccessibilityElements;
- (id)accessibilityElements;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (BOOL)isAccessibilityElement;
- (int)accessibilityElementCount;
@property(readonly, nonatomic) BOOL isShowingEditActions;
- (void)peekActions;
- (void)showActions:(BOOL)arg1 duration:(float)arg2;
- (void)showActions:(BOOL)arg1 velocity:(float)arg2;
- (void)showActions:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNavigationController:(id)arg1;
- (void)toggleActionsVisibleTapped;
- (void)toggleActions;
- (void)cellPanned:(id)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)removeDoubleTapToToggleActionsGestureRecognizer;
- (void)removeLegacyPanGestureRecognizer;
- (void)setupDoubleTapToToggleActionsGestureRecognizer;
- (void)setupLegacyPanGestureRecognizer;
- (void)removeLegacyGestureRecognizers;
- (void)setupLegacyGestureRecognizers;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 width:(float)arg3;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
