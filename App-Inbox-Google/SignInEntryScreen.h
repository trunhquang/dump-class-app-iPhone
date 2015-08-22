//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVPlayer, UIButton, UIImageView, UILabel;

@interface SignInEntryScreen : UIView
{
    AVPlayer *entranceMovie_;
    UIImageView *inboxLogo_;
    UIImageView *inboxTitle_;
    UIView *movieContainer_;
    BOOL needsEntrance_;
    UIView *scrim;
    UIView *spacerBottom_;
    UIView *spacerTop_;
    UIButton *signInButton_;
    UILabel *welcomeMessage_;
    id <SignInEntryScreenDelegate> delegate;
}

@property(nonatomic) __weak id <SignInEntryScreenDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)performEntranceAnimated:(BOOL)arg1;
- (void)signInButtonTapped;
- (void)setupConstraints;
- (void)updateConstraints;
- (void)createMovieLayer;
- (void)createSubviews;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)skipAnimatedEntrance;
- (void)performAnimatedEntranceWhenReady;
- (id)initWithFrame:(struct CGRect)arg1;

@end

