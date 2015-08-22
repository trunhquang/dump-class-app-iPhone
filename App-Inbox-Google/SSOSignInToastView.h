//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GOOHUDMessageView.h"

@class UIControl, UIImageView, UILabel;

@interface SSOSignInToastView : GOOHUDMessageView
{
    UIControl *_containerView;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_emailLabel;
}

@property(retain, nonatomic) UILabel *emailLabel; // @synthesize emailLabel=_emailLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIControl *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)handleBackgroundTapped:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (float)maximumWidth;
- (id)initWithMessage:(id)arg1 dismissHandler:(CDUnknownBlockType)arg2;

@end

