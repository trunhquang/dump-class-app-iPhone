//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class GIPApp;

@interface GIPAppUserPreferencesCell : UITableViewCell
{
    GIPApp *app_;
    id <GIPAppUserPreferenceCellDelegate> _delegate;
}

+ (id)installText;
@property(nonatomic) __weak id <GIPAppUserPreferenceCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GIPApp *app; // @synthesize app=app_;
- (void).cxx_destruct;
- (void)fullImageDidLoad:(id)arg1;
- (void)didPressInstallButton:(id)arg1;
- (void)onToggleSwitch:(id)arg1;
- (void)setUpImageView;
- (void)setUpAccessoryView;
- (void)layoutSubviews;

@end

