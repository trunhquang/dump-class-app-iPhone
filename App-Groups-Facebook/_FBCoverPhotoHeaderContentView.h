//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBCoverPhotoHeaderAvatarView, FBKVOController, FBRichTextView, UIImageView, UILabel;

@interface _FBCoverPhotoHeaderContentView : UIView
{
    FBKVOController *_KVOController;
    FBCoverPhotoHeaderAvatarView *_imageView;
    unsigned int _style;
    FBRichTextView *_richTitleLabel;
    UILabel *_subtitleLabel;
    struct UIEdgeInsets _contentEdgeInsets;
    BOOL _showsVerifiedBadge;
    UIImageView *_imageViewOverlay;
    UIView *_titleDecorationView;
    UIView *_accessoryView;
    unsigned int _labelAlignment;
}

@property(nonatomic) unsigned int labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property(nonatomic) BOOL showsVerifiedBadge; // @synthesize showsVerifiedBadge=_showsVerifiedBadge;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UIView *titleDecorationView; // @synthesize titleDecorationView=_titleDecorationView;
@property(retain, nonatomic) UIImageView *imageViewOverlay; // @synthesize imageViewOverlay=_imageViewOverlay;
- (void).cxx_destruct;
- (void)_configureRichTextLabel:(id)arg1;
- (void)_configureLabel:(id)arg1;
- (void)_imageDidChange;
- (void)layoutSubviews;
- (struct CGRect)_labelRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_accessoryRectForContentRect:(struct CGRect)arg1 combinedLabelFrame:(struct CGRect)arg2;
- (struct CGRect)_imageOverlayRectForImageFrame:(struct CGRect)arg1;
- (struct CGRect)_imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)_contentRectForBounds:(struct CGRect)arg1;
- (void)setImageViewOverlayImage:(id)arg1;
@property(readonly, nonatomic) BOOL subtitleLabelLoaded;
@property(readonly, nonatomic) UILabel *subtitleLabel;
@property(readonly, nonatomic) BOOL titleLabelLoaded;
- (id)richTitleLabel;
@property(readonly, nonatomic) BOOL imageViewLoaded;
@property(readonly, nonatomic) FBCoverPhotoHeaderAvatarView *imageView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(unsigned int)arg1;

@end

