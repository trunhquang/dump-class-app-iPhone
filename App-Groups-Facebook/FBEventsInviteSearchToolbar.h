//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBEventsFaceBadgeView, FBSearchBar;

@interface FBEventsInviteSearchToolbar : UIView
{
    UIView *_faceBadgeStage;
    UIView *_bottomSeparatorView;
    struct UIOffset _stageOffset;
    FBSearchBar *_searchBar;
    FBEventsFaceBadgeView *_faceBadge;
    int _state;
}

@property(nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) FBEventsFaceBadgeView *faceBadge; // @synthesize faceBadge=_faceBadge;
@property(readonly, nonatomic) FBSearchBar *searchBar; // @synthesize searchBar=_searchBar;
- (void).cxx_destruct;
- (void)setState:(int)arg1 animated:(BOOL)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

