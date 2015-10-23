//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray, NSIndexPath, UIButton, UIImageView, UILabel, UIView, UserAvatarVerified;

@interface ResCheckinTableCell : UITableViewCell
{
    float cellHeight;
    BOOL reviewHasPhoto;
    BOOL _isCheckin;
    UIButton *accessoryButton;
    UIButton *usefulButton;
    UILabel *userNameLabel;
    UIButton *photoCountButton;
    UIButton *reviewCountButton;
    UIView *reviewContainerView;
    UILabel *ratingLabel;
    UILabel *titleLabel;
    UILabel *textLabel;
    UIView *lightGrayBgView;
    UIButton *reviewCommentButton;
    UIButton *reviewLikeButton;
    UILabel *reviewDateLabel;
    UILabel *reviewLikeLabel;
    UILabel *reviewCommentLabel;
    UIImageView *videoIndicator;
    NSArray *reviewPhotos;
    UserAvatarVerified *_avatarVerified;
    UIView *_imageContainer;
    NSIndexPath *_indexPath;
    id <ResCheckinTableCellDelegate> _delegate;
}

@property(nonatomic) __weak id <ResCheckinTableCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(retain, nonatomic) UIView *imageContainer; // @synthesize imageContainer=_imageContainer;
@property(nonatomic) BOOL isCheckin; // @synthesize isCheckin=_isCheckin;
@property(retain, nonatomic) UserAvatarVerified *avatarVerified; // @synthesize avatarVerified=_avatarVerified;
@property(retain, nonatomic) NSArray *reviewPhotos; // @synthesize reviewPhotos;
@property(retain, nonatomic) UIImageView *videoIndicator; // @synthesize videoIndicator;
@property(retain, nonatomic) UILabel *reviewCommentLabel; // @synthesize reviewCommentLabel;
@property(retain, nonatomic) UILabel *reviewLikeLabel; // @synthesize reviewLikeLabel;
@property(retain, nonatomic) UILabel *reviewDateLabel; // @synthesize reviewDateLabel;
@property(retain, nonatomic) UIButton *reviewLikeButton; // @synthesize reviewLikeButton;
@property(retain, nonatomic) UIButton *reviewCommentButton; // @synthesize reviewCommentButton;
@property(retain, nonatomic) UIView *lightGrayBgView; // @synthesize lightGrayBgView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
@property(retain, nonatomic) UILabel *ratingLabel; // @synthesize ratingLabel;
@property(retain, nonatomic) UIView *reviewContainerView; // @synthesize reviewContainerView;
@property(retain, nonatomic) UIButton *reviewCountButton; // @synthesize reviewCountButton;
@property(retain, nonatomic) UIButton *photoCountButton; // @synthesize photoCountButton;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel;
@property(retain, nonatomic) UIButton *usefulButton; // @synthesize usefulButton;
@property(retain, nonatomic) UIButton *accessoryButton; // @synthesize accessoryButton;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)didTouchShowAllPhoto:(id)arg1;
- (void)didTouchPhotoButton:(id)arg1;
- (void)setReviewCommentLabelText:(id)arg1;
- (void)setReviewLikeLabelText:(id)arg1;
- (void)setReviewCommentCount:(unsigned int)arg1;
- (void)setReviewLikeCount:(unsigned int)arg1;
- (void)setReviewTitleButtonCommentCount:(id)arg1;
- (void)setReviewTitleButtonLikeCount:(id)arg1;
- (void)setReviewRating:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setReviewDate:(id)arg1;
- (void)setReviewUserPhotoCount:(unsigned int)arg1;
- (void)setReviewUserReviewCount:(unsigned int)arg1;
- (void)setReviewUserName:(id)arg1;
- (void)setButtonReviewPhotoThumbs:(id)arg1 withTotalPhoto:(unsigned int)arg2;
- (BOOL)setReviewPhotoThumbs:(id)arg1 withTotalPhoto:(unsigned int)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setCellHeight:(float)arg1 withPhoto:(BOOL)arg2;
- (void)showVideoIndicator:(BOOL)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

