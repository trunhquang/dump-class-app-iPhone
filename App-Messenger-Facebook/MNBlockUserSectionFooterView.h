//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView;

@interface MNBlockUserSectionFooterView : UIView
{
    FBRichTextView *_richTextView;
    struct UIEdgeInsets _edgeInsets;
    id <MNBlockUserSectionFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MNBlockUserSectionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapLearnMore;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 attributedString:(id)arg2;

@end
