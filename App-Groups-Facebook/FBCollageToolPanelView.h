//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBCollageToolPanelButton, NSMutableArray;

@interface FBCollageToolPanelView : UIView
{
    FBCollageToolPanelButton *_flipButton;
    FBCollageToolPanelButton *_mirrorButton;
    FBCollageToolPanelButton *_replaceButton;
    NSMutableArray *_buttons;
    UIView *_topLine;
    id <FBCollageToolPanelViewDelegate> _delegate;
}

@property(nonatomic) __weak id <FBCollageToolPanelViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleReplace:(id)arg1;
- (void)_handleFlip:(id)arg1;
- (void)_handleMirror:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

