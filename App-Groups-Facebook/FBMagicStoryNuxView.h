//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNuxToolTipView.h"

@interface FBMagicStoryNuxView : FBNuxToolTipView
{
    id <FBMagicStoryNuxViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBMagicStoryNuxViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapCloseButton;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

