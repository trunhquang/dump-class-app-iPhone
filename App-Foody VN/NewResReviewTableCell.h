//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSIndexPath, UIButton, UIImageView, UILabel, UIView, UserAvatarVerified;

@interface NewResReviewTableCell : UITableViewCell
{
    float cellTotalHeight;
    float commentHeight;
    BOOL reviewHasPhoto;
    BOOL _isCheckin;
    UserAvatarVerified *_userAvatarVerified;
    UILabel *_ratingLabel;
    NSIndexPath *_indexPath;
    id <NewResReviewTableCellDelegate> _delegate;
    UIButton *_accessoryButton;
    UIButton *_usefulButton;
    UIImageView *_videoIndicator;
    UILabel *_showAllCommentLabel;
    UILabel *_likeReviewDisplayLabel;
    UIView *_reviewContainerView;
    UIView *_viewLastCommentAndUserLike;
    UILabel *_userNameLabel;
    UIButton *_photoCountButton;
    UIButton *_reviewCountButton;
    UILabel *_titleLabel;
    UILabel *_contentReviewLabel;
    UILabel *_reviewDateLabel;
    NSArray *_reviewPhotos;
    UIView *_imageContainer;
    UIImageView *_iconComment;
}

@property(nonatomic) __weak UIImageView *iconComment; // @synthesize iconComment=_iconComment;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(retain, nonatomic) NSArray *reviewPhotos; // @synthesize reviewPhotos=_reviewPhotos;
@property(retain, nonatomic) UILabel *reviewDateLabel; // @synthesize reviewDateLabel=_reviewDateLabel;
@property(retain, nonatomic) UILabel *contentReviewLabel; // @synthesize contentReviewLabel=_contentReviewLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *reviewCountButton; // @synthesize reviewCountButton=_reviewCountButton;
@property(retain, nonatomic) UIButton *photoCountButton; // @synthesize photoCountButton=_photoCountButton;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIView *viewLastCommentAndUserLike; // @synthesize viewLastCommentAndUserLike=_viewLastCommentAndUserLike;
@property(retain, nonatomic) UIView *reviewContainerView; // @synthesize reviewContainerView=_reviewContainerView;
@property(retain, nonatomic) UILabel *likeReviewDisplayLabel; // @synthesize likeReviewDisplayLabel=_likeReviewDisplayLabel;
@property(retain, nonatomic) UILabel *showAllCommentLabel; // @synthesize showAllCommentLabel=_showAllCommentLabel;
@property(retain, nonatomic) UIImageView *videoIndicator; // @synthesize videoIndicator=_videoIndicator;
@property(retain, nonatomic) UIButton *usefulButton; // @synthesize usefulButton=_usefulButton;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton=_accessoryButton;
@property(nonatomic) __weak id <NewResReviewTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UILabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
@property(nonatomic) BOOL isCheckin; // @synthesize isCheckin=_isCheckin;
@property(retain, nonatomic) UserAvatarVerified *userAvatarVerified; // @synthesize userAvatarVerified=_userAvatarVerified;
- (void).cxx_destruct;
- (void)didTouchShowAllPhoto:(id)arg1;
- (void)didTapLikeView:(id)arg1;
- (void)didTapCommentView:(id)arg1;
- (void)prepareForReuse;
- (void)didTouchPhotoButton:(id)arg1;
- (void)setNewestComments:(id)arg1;
- (void)setReviewCommentCount:(unsigned int)arg1;
- (void)setReviewLikeCount:(unsigned int)arg1;
- (void)setButtonCommentCount:(unsigned int)arg1;
- (void)setButtonUserLikes:(id)arg1 withHeight:(float)arg2;
- (void)setReviewRating:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setReviewTitle:(id)arg1;
- (void)setReviewDate:(id)arg1;
- (void)setReviewUserPhotoCount:(unsigned int)arg1;
- (void)setReviewUserReviewCount:(unsigned int)arg1;
- (void)setReviewUserName:(id)arg1;
- (void)setButtonReviewPhotoThumbs:(id)arg1 withTotalPhoto:(unsigned int)arg2;
- (BOOL)setReviewPhotoThumbs:(id)arg1 withTotalPhoto:(unsigned int)arg2;
- (void)setCellTotalHeight:(float)arg1 widthCommentHeught:(float)arg2 withPhoto:(BOOL)arg3;
- (void)setCellHeight:(float)arg1 withPhoto:(BOOL)arg2;
- (void)showVideoIndicator:(BOOL)arg1;
- (void)resetFrame;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)awakeFromNib;

@end

