//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBComposerContentViewLayoutProtocol.h"

@class FBStarRatingView, FBUserSession, NSMutableArray, NSString, UILabel;

@interface FBReviewComposerRatingView : UIView <FBComposerContentViewLayoutProtocol>
{
    FBUserSession *_session;
    NSMutableArray *_starLabelArr;
    UILabel *_questionLabelView;
    FBStarRatingView *_ratingStarsView;
    BOOL _wantsAudienceBar;
    id <FBReviewComposerRatingViewDelegate> _delegate;
    struct UIEdgeInsets _contentInset;
}

@property(readonly, nonatomic) BOOL wantsAudienceBar; // @synthesize wantsAudienceBar=_wantsAudienceBar;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <FBReviewComposerRatingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moveRatingStarsView;
- (void)fadeOutStarLabelArr;
- (void)fadeOutSubviews;
- (void)changeStarRating:(unsigned int)arg1;
- (void)updateRatingStarsViewRating:(float)arg1;
- (void)updateRatingStarsViewDelegate:(id)arg1;
- (void)updateQuestionLabelViewText:(id)arg1;
- (id)_descriptionForStarNumber:(int)arg1;
- (void)setUpStarLabelArr;
- (void)showRatingStarView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

