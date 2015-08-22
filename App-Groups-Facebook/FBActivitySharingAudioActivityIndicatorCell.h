//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FBActivitySharingAudioActivityIndicatorButton, FBAudioActivityReloadButton;

@interface FBActivitySharingAudioActivityIndicatorCell : UITableViewCell
{
    FBActivitySharingAudioActivityIndicatorButton *_audioActivityIndicatorButton;
    FBAudioActivityReloadButton *_audioActivityReloadButton;
}

@property(retain, nonatomic) FBAudioActivityReloadButton *audioActivityReloadButton; // @synthesize audioActivityReloadButton=_audioActivityReloadButton;
- (void).cxx_destruct;
- (void)updateDescriptionText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeAudioActivityIndicatorButton:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

