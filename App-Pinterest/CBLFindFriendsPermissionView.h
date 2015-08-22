//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class CBLMultilineLabel, UIButton, UIImageView, UIView;

@interface CBLFindFriendsPermissionView : CBLTraitCollectionView
{
    BOOL _showPermissionDeniedView;
    id <CBLFindFriendsPermissionViewDelegate> _delegate;
    CBLMultilineLabel *_titleLabel;
    CBLMultilineLabel *_detailLabel;
    UIButton *_button;
    float _buttonHeight;
    UIView *_deniedPermissionImageBoundingView;
    UIImageView *_deniedPermissionImageView;
}

@property(nonatomic) BOOL showPermissionDeniedView; // @synthesize showPermissionDeniedView=_showPermissionDeniedView;
@property(retain, nonatomic) UIImageView *deniedPermissionImageView; // @synthesize deniedPermissionImageView=_deniedPermissionImageView;
@property(retain, nonatomic) UIView *deniedPermissionImageBoundingView; // @synthesize deniedPermissionImageBoundingView=_deniedPermissionImageBoundingView;
@property(nonatomic) float buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) CBLMultilineLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) CBLMultilineLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <CBLFindFriendsPermissionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (id)permissionDeniedImageForSourceType:(int)arg1;
- (id)buttonTitleForSourceType:(int)arg1;
- (id)labelDetailTitleForSourceType:(int)arg1;
- (id)permissionDeniedLabelDetailTitleForSourceType:(int)arg1;
- (id)labelTitleForSourceType:(int)arg1;
- (void)updateWithSource:(id)arg1;
- (BOOL)showPermissionDeniedImageView;
- (void)updateConstraints;
- (void)didTapButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
