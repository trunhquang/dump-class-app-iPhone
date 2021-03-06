//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class FBNetworkImageView, NSAttributedString, NSMutableAttributedString, UILabel, UITapGestureRecognizer;

@interface FBActivitySharingTableViewFilledInCell : UITableViewCell
{
    NSAttributedString *_prefix;
    NSMutableAttributedString *_selection;
    FBNetworkImageView *_iconImageView;
    UILabel *_objectLabel;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <FBActivitySharingTableViewFilledInCellDelegate> _delegate;
}

@property(nonatomic) __weak id <FBActivitySharingTableViewFilledInCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapClearButton:(id)arg1;
- (void)_didTapIcon:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setSelectionTextColor:(id)arg1;
- (void)setSelection:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)layoutWithIcon;
- (void)layoutWithoutIcon;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

