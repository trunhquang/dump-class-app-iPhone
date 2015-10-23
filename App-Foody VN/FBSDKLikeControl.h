//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "FBSDKLiking.h"

@class FBSDKLikeBoxView, FBSDKLikeButton, NSString, UIColor, UILabel, UIView;

@interface FBSDKLikeControl : UIControl <FBSDKLiking>
{
    BOOL _isExplicitlyDisabled;
    FBSDKLikeBoxView *_likeBoxView;
    FBSDKLikeButton *_likeButton;
    UIView *_likeButtonContainer;
    UILabel *_socialSentenceLabel;
    UIColor *_foregroundColor;
    unsigned int _likeControlAuxiliaryPosition;
    unsigned int _likeControlHorizontalAlignment;
    unsigned int _likeControlStyle;
    float _preferredMaxLayoutWidth;
}

+ (void)initialize;
@property(nonatomic) float preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(nonatomic) unsigned int likeControlStyle; // @synthesize likeControlStyle=_likeControlStyle;
@property(nonatomic) unsigned int likeControlHorizontalAlignment; // @synthesize likeControlHorizontalAlignment=_likeControlHorizontalAlignment;
@property(nonatomic) unsigned int likeControlAuxiliaryPosition; // @synthesize likeControlAuxiliaryPosition=_likeControlAuxiliaryPosition;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
- (void).cxx_destruct;
- (void)_updateLikeBoxCaretPosition;
- (void)_updateEnabled;
- (void)_likeActionControllerDidUpdateWithAnimated:(BOOL)arg1;
- (void)_likeActionControllerDidUpdateNotification:(id)arg1;
- (void)_likeActionControllerDidDisableNotification:(id)arg1;
- (struct FBSDKLikeControlLayout)_layoutWithBounds:(struct CGRect)arg1 subviewSizingBlock:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_initializeContent;
- (void)_handleLikeButtonTap:(id)arg1;
- (void)_ensureLikeActionController;
- (float)_auxiliaryViewPadding;
- (id)_auxiliaryView;
- (id)analyticsParameters;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isSoundEnabled) BOOL soundEnabled;
- (void)setOpaque:(BOOL)arg1;
@property(nonatomic) unsigned int objectType;
@property(copy, nonatomic) NSString *objectID;
- (void)setEnabled:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
