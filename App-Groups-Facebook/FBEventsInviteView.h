//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBEventsFaceBadgeView, FBEventsInviteSearchToolbar, FBRichTextView, FBSearchBar, UITableView;

@interface FBEventsInviteView : UIView
{
    BOOL _isAccessibilityModeOn;
    FBEventsInviteSearchToolbar *_searchToolbar;
    FBSearchBar *_accessibleSearchBar;
    UITableView *_tableView;
    FBRichTextView *_remainingInvitesLabel;
    int _state;
    float _topInset;
}

@property(nonatomic) float topInset; // @synthesize topInset=_topInset;
@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) FBRichTextView *remainingInvitesLabel; // @synthesize remainingInvitesLabel=_remainingInvitesLabel;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setToolbarState:(int)arg1 animated:(BOOL)arg2;
- (id)topContentView;
@property(readonly, nonatomic) FBSearchBar *searchBar;
@property(readonly, nonatomic) FBEventsFaceBadgeView *faceBadge;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2;

@end

