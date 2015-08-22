//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class JBTConversationMessageDraft_ResponseTypeEnum, UIImageView, UILabel, UIView;

@interface ResponseSelectorButton : UIButton
{
    UIImageView *collapsedImageView_;
    UIImageView *dropdownImageView_;
    UIImageView *expandedImageView_;
    UIView *expandedView_;
    UILabel *label_;
    BOOL expanded_;
    JBTConversationMessageDraft_ResponseTypeEnum *type_;
    id <ResponseSelectorButtonDelegate> _delegate;
}

+ (id)labelTextForType:(id)arg1;
+ (id)imageNameForType:(id)arg1 expanded:(BOOL)arg2 highlighted:(BOOL)arg3;
+ (id)imageForType:(id)arg1 expanded:(BOOL)arg2 highlighted:(BOOL)arg3;
@property(nonatomic) __weak id <ResponseSelectorButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL expanded; // @synthesize expanded=expanded_;
@property(retain, nonatomic) JBTConversationMessageDraft_ResponseTypeEnum *type; // @synthesize type=type_;
- (void).cxx_destruct;
- (void)updateViewsForExpandedState;
- (void)buttonTapped;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithType:(id)arg1 expanded:(BOOL)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 type:(id)arg3 expanded:(BOOL)arg4;

@end

