//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIUtil : NSObject
{
}

+ (struct CGSize)sizeWithMyFont:(id)arg1 text:(id)arg2 width:(float)arg3;
+ (void)centerImageAndContentInButton:(id)arg1 withBetweenSpace:(float)arg2;
+ (void)removeBlurBackground:(id)arg1;
+ (id)addBlurBackgroundInView:(id)arg1 withActivity:(BOOL)arg2 disableInteration:(BOOL)arg3;
+ (id)embedYoutubeVideo:(id)arg1 toView:(id)arg2 frame:(struct CGRect)arg3;
+ (id)imageWithImage:(id)arg1 convertToSize:(struct CGSize)arg2;
+ (void)setBottomLineAtView:(id)arg1 height:(float)arg2 color:(id)arg3 atXPos:(float)arg4;
+ (void)setRightLineAtView:(id)arg1 width:(float)arg2 color:(id)arg3;
+ (void)setTopLineAtView:(id)arg1 height:(float)arg2 color:(id)arg3;
+ (void)setTopLineAtView:(id)arg1 height:(float)arg2 width:(float)arg3 color:(id)arg4 atXPos:(float)arg5;
+ (void)setTopLineAtView:(id)arg1 height:(float)arg2 color:(id)arg3 atXPos:(float)arg4;
+ (void)setBottomLineAtView:(id)arg1 height:(float)arg2 color:(id)arg3;
+ (id)usefulCountLabelWithFrame:(struct CGRect)arg1;
+ (id)commentCountLabelWithFrame:(struct CGRect)arg1;
+ (void)setStrikeTextForLabel:(id)arg1 withText:(id)arg2;
+ (id)customBadgeViewWithString:(id)arg1 stringColor:(id)arg2 insetColor:(id)arg3 withBadgeFrame:(BOOL)arg4 withBadgeFrameColor:(id)arg5 withScale:(float)arg6 withShining:(BOOL)arg7;
+ (id)userProfileButtonWithRect:(struct CGRect)arg1 imageSelected:(id)arg2 title:(id)arg3 count:(unsigned int)arg4;
+ (id)thinVerticalLineWithPosition:(struct CGPoint)arg1 height:(float)arg2 color:(id)arg3;
+ (id)simpleTextInputAccessoryViewWithTextFieldTag:(int)arg1 delegate:(id)arg2 okTarget:(id)arg3 selector:(SEL)arg4;
+ (id)resActionButtonWithBackgroundImage:(id)arg1 selectedBackgroundImage:(id)arg2 image:(id)arg3 selectedImage:(id)arg4 title:(id)arg5 frame:(struct CGRect)arg6;
+ (id)resActionButtonWithImage:(id)arg1 selectedImage:(id)arg2 title:(id)arg3 frame:(struct CGRect)arg4;
+ (id)homeScreenButtonWithImage:(id)arg1 title:(id)arg2 frame:(struct CGRect)arg3;
+ (void)removeTypeEcardForView:(id)arg1;
+ (void)removeCountNumberForView:(id)arg1;
+ (void)removeNewIndicatorForViewCell:(id)arg1;
+ (void)addNewIndicatorforViewCell:(id)arg1 width:(float)arg2;
+ (void)addTypeEcard:(id)arg1 forCell:(id)arg2 width:(float)arg3;
+ (void)addCountNumber:(int)arg1 forView:(id)arg2 width:(float)arg3 textColor:(id)arg4;
+ (void)addCountNumber:(int)arg1 forView:(id)arg2 width:(float)arg3;
+ (id)getViewControllerOfClass:(Class)arg1 inViewControllerList:(id)arg2;
+ (void)showPopoverRatingFromView:(id)arg1 withModel:(id)arg2;
+ (id)emptyLableForTableWithText:(id)arg1;
+ (void)formatResStatusClosedButton:(id)arg1 imageNamed:(id)arg2;
+ (void)enableSearchBarCancelButton:(id)arg1;
+ (void)setFullscreenDoneButtonStyle:(id)arg1;
+ (id)detailDisclosureIndicatorImageViewWithFrame:(struct CGRect)arg1;
+ (void)removeAllGestureRecognizersForView:(id)arg1;
+ (void)addDoneButtonForTextView:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (void)setCommonFlatThemeForNavigationController:(id)arg1;
+ (void)setIOS6NavigationThemeColor:(id)arg1;
+ (void)enableCancelButtonInSearchBar:(id)arg1;
+ (void)setSearchBarCancelButton:(id)arg1 withText:(id)arg2;
+ (void)setSearchBarRightButton:(id)arg1 withText:(id)arg2 target:(id)arg3 selector:(SEL)arg4;
+ (void)enableSearchBarReturnKeyWithNoText:(id)arg1;
+ (id)resAvgRatingButtonWithFrame:(struct CGRect)arg1 titleFontSize:(float)arg2;
+ (id)selectableResAddressLabelWithFrame:(struct CGRect)arg1;
+ (id)selectableResNameLabelWithFrame:(struct CGRect)arg1;
+ (id)resAddressLabelWithFrame:(struct CGRect)arg1;
+ (id)resNameLabelWithFrame:(struct CGRect)arg1;
+ (id)WBHighlightImage:(id)arg1;
+ (id)MTDContextCreateRoundedImageWithRect:(struct CGRect)arg1 radiusR:(float)arg2;
+ (id)makeReviewUsefulButtonSelectedWithNoResize:(id)arg1;
+ (id)makeReviewUsefulButtonSelected:(id)arg1;
+ (id)actionTextButtonWithText:(id)arg1 XPos:(float)arg2 YPos:(float)arg3;
+ (id)reviewUsefulCountButtonWithCount:(unsigned int)arg1 alignXPos:(float)arg2 YPos:(float)arg3 maxWidth:(float)arg4;
+ (id)reviewCommentCountButtonWithCount:(unsigned int)arg1 alignXPos:(float)arg2 YPos:(float)arg3 maxWidth:(float)arg4;
+ (id)cusomStringOfLabelWithPeople:(id)arg1 cost:(id)arg2 comeback:(id)arg3;
+ (id)transparentInfoLabelForReviewWithFrame:(struct CGRect)arg1;
+ (id)transparentBackgroundForReviewWithFrame:(struct CGRect)arg1;
+ (id)lightGrayBackgroundForReviewStatWithFrame:(struct CGRect)arg1;
+ (id)reviewPhotoThumbButtonXPos:(float)arg1 YPos:(float)arg2 tag:(int)arg3;
+ (id)reviewPhotoThumbButtonPostScreenWithXPos:(float)arg1 YPos:(float)arg2 tag:(int)arg3;
+ (id)reviewPhotoThumbButtonWithXPos:(float)arg1 YPos:(float)arg2 tag:(int)arg3;
+ (id)reviewTextLabelWithText:(id)arg1 frame:(struct CGRect)arg2;
+ (id)reviewTitleLabelWithText:(id)arg1 frame:(struct CGRect)arg2;
+ (id)commonDateLabelWithDateString:(id)arg1 frame:(struct CGRect)arg2;
+ (id)reviewRatingLabelWithPointCirle:(id)arg1 frame:(struct CGRect)arg2;
+ (id)reviewRatingLabelWithPoint:(id)arg1 frame:(struct CGRect)arg2;
+ (id)userPhotoCountButtonWithCount:(unsigned int)arg1 XPos:(float)arg2 YPos:(float)arg3 maxWidth:(float)arg4;
+ (id)userReviewCountButtonWithCount:(unsigned int)arg1 XPos:(float)arg2 YPos:(float)arg3 maxWidth:(float)arg4;
+ (id)reviewUserNameWithText:(id)arg1 frame:(struct CGRect)arg2;
+ (id)userThumbButtonAtXPos:(float)arg1 YPos:(float)arg2 tag:(int)arg3;
+ (id)thinGrayLineViewAtXPos:(float)arg1 YPos:(float)arg2 width:(float)arg3 height:(float)arg4;
+ (id)thinGrayLineViewAtXPos:(float)arg1 YPos:(float)arg2 width:(float)arg3;
+ (id)thinLightGrayLineViewAtYPos:(float)arg1;
+ (id)thinGrayLineViewAtYPos:(float)arg1;
+ (void)makeRoundBorderForCountNumber:(id)arg1;
+ (void)makeRoundBorder:(id)arg1;
+ (void)makeLightGrayRoundBorderUserThumbView:(id)arg1;
+ (void)removeBorderRoundRect:(id)arg1;
+ (void)makeLightBorderRoundRect:(id)arg1;
+ (id)commonGroupHeaderLabel2WithYPos:(float)arg1;
+ (id)commonGroupHeaderLabelWithYPos:(float)arg1;
+ (id)commonRestaurantNameHeaderView:(id)arg1;
+ (id)newButtonWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 frame:(struct CGRect)arg4 image:(id)arg5 imagePressed:(id)arg6 darkTextColor:(BOOL)arg7;
+ (void)showFullscreenRestaurantAllPhotoAlbumList:(id)arg1 restaurantId:(id)arg2 albumPhotoId:(id)arg3 selectedPhoto:(id)arg4 pagingInfo:(id)arg5 totalPhoto:(int)arg6;
+ (void)showFullscreenRestaurantPhotoAlbumList:(id)arg1 restaurantId:(id)arg2 albumPhotoId:(id)arg3 selectedPhoto:(id)arg4 pagingInfo:(id)arg5 totalPhoto:(int)arg6;
+ (void)showFullscreenUserPhotoList:(id)arg1 UserId:(id)arg2 selectedPhoto:(id)arg3 pagingInfo:(id)arg4 totalPhoto:(int)arg5;
+ (void)showFullscreenUserGroupPhotoList:(id)arg1 UserId:(id)arg2 photoGroupId:(id)arg3 selectedPhoto:(id)arg4 pagingInfo:(id)arg5 totalPhoto:(int)arg6;
+ (void)showFullscreenProfesionalPhotoList:(id)arg1 restaurantId:(id)arg2 selectedPhoto:(id)arg3 pagingInfo:(id)arg4 totalPhoto:(int)arg5;
+ (void)showNewFullscreenPhotoList:(id)arg1 selectedPhoto:(id)arg2;
+ (void)showNewFullscreenPhotoList2:(id)arg1 restaurantId:(id)arg2 selectedPhoto:(id)arg3 editMode:(BOOL)arg4 dataLoader:(id)arg5 pagingInfo:(id)arg6 totalPhoto:(int)arg7 url_photo_type:(unsigned int)arg8 UserId:(id)arg9 photoGroupId:(id)arg10 AlbumId:(id)arg11;
+ (void)showFullscreenEditPhotoList:(id)arg1 selectedPhoto:(id)arg2;
+ (void)showFullscreenPhotoList:(id)arg1 selectedPhoto:(id)arg2 totalPhoto:(int)arg3;
+ (void)showFullscreenPhotoList:(id)arg1 selectedPhoto:(id)arg2 dataLoader:(id)arg3;
+ (void)showFullscreenPhotoList:(id)arg1 selectedPhoto:(id)arg2;

@end

