//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CBLSlidingSegmentedControlDelegate.h"

@class CBLSlidingSegmentedControl, NSString;

@interface CBLFollowingTypeSelectorHeaderView : UIView <CBLSlidingSegmentedControlDelegate>
{
    BOOL _flat;
    id <CBLFollowingTypeSelectorHeaderViewDelegate> _delegate;
    int _selectedType;
    CBLSlidingSegmentedControl *_slidingControl;
}

@property(nonatomic) BOOL flat; // @synthesize flat=_flat;
@property(retain, nonatomic) CBLSlidingSegmentedControl *slidingControl; // @synthesize slidingControl=_slidingControl;
@property(nonatomic) int selectedType; // @synthesize selectedType=_selectedType;
@property(nonatomic) __weak id <CBLFollowingTypeSelectorHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slidingSegmentedControlDidSelectIndex:(unsigned int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 styleOptions:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

