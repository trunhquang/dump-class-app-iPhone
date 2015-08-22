//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageView.h"

@class MessageHeaderView;

@interface CollapsedMessageView : MessageView
{
    MessageHeaderView *messageHeaderView_;
}

+ (float)cachedHeightForMessage:(id)arg1 withConversationWidth:(float)arg2 includingScrollableArea:(BOOL)arg3 renderingDelegate:(id)arg4 messageRegionsViewCache:(id)arg5 performInefficientChecks:(BOOL)arg6 withSpan:(id)arg7;
- (void).cxx_destruct;
- (void)setSending:(BOOL)arg1;
- (void)createSubviews;
- (void)headerViewTapped:(id)arg1;
- (void)senderContactFetched;
- (void)setMessage:(id)arg1 fromConversation:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

