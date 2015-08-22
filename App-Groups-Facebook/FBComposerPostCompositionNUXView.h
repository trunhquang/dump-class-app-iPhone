//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIButton, UILabel;

@interface FBComposerPostCompositionNUXView : UIView <UIGestureRecognizerDelegate>
{
    UIView *_nuxBackground;
    UILabel *_nuxLabel;
    UIButton *_closeButton;
    id <FBComposerPostCompositionNUXViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBComposerPostCompositionNUXViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleUserCancelNUXForPostCompositionTap;
- (void)layoutSubviews;
- (void)updatePostCompositionNUXText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

