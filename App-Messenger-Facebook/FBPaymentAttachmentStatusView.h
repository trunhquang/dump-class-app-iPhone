//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView;

@interface FBPaymentAttachmentStatusView : UIView
{
    FBRichTextView *_statusTitleTextView;
    FBRichTextView *_sentOnTitleTextView;
    FBRichTextView *_statusValueTextView;
    FBRichTextView *_sentOnValueTextView;
}

+ (struct CGSize)sizeWithWidth:(float)arg1 withViewModel:(id)arg2;
- (void).cxx_destruct;
- (void)_updateSentOnTitleTextViewWithViewModel:(id)arg1;
- (void)_updateSentOnValueTextViewWithViewModel:(id)arg1;
- (void)_updateStatusValueTextViewWithViewModel:(id)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

