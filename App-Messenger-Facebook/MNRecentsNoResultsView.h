//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MNRecentsNoResultsView : UIView
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    id <MNRecentsNoResultsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNRecentsNoResultsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_actionPressed:(id)arg1;
- (void)layoutSubviews;
- (id)initWithGetAppsEnabled:(BOOL)arg1;

@end

