//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MessageView.h"

#import "MessageHeaderViewDelegate.h"
#import "MessageRegionsViewDelegate.h"
#import "MessageRegionsViewRenderingDelegate.h"
#import "SmartMailInteractionSupport.h"

@class CardCarouselView, ConversationMessage, MessageHeaderView, MessageRegionsView, NSString, UIImageView;

@interface ExpandedMessageView : MessageView <MessageHeaderViewDelegate, MessageRegionsViewDelegate, MessageRegionsViewRenderingDelegate, SmartMailInteractionSupport>
{
    CardCarouselView *attachmentsView_;
    MessageHeaderView *messageHeaderView_;
    MessageRegionsView *messageRegionsView_;
    UIImageView *messageActionsView_;
    id <MessageRegionsViewCache> _messageRegionsViewCache;
    id <MessageRegionsViewRenderingDelegate> _renderingDelegate;
}

+ (float)cachedScrollHeightForMessage:(id)arg1 forScrollableAreaAtIndex:(int)arg2 withConversationWidth:(float)arg3;
+ (int)scrollableAreaCountForMessage:(id)arg1;
+ (float)computeCachedHeightForMessage:(id)arg1 withConversationWidth:(float)arg2 includingScrollableArea:(BOOL)arg3 renderingDelegate:(id)arg4 messageRegionsViewCache:(id)arg5 performInefficientChecks:(BOOL)arg6 withSpan:(id)arg7;
+ (float)cachedHeightForMessage:(id)arg1 withConversationWidth:(float)arg2 includingScrollableArea:(BOOL)arg3 renderingDelegate:(id)arg4 messageRegionsViewCache:(id)arg5 performInefficientChecks:(BOOL)arg6 withSpan:(id)arg7;
+ (BOOL)hasCachedHeightsForMessage:(id)arg1 withMessageWidth:(float)arg2;
+ (id)loadingRegionsMap;
@property(nonatomic) __weak id <MessageRegionsViewRenderingDelegate> renderingDelegate; // @synthesize renderingDelegate=_renderingDelegate;
@property(nonatomic) __weak id <MessageRegionsViewCache> messageRegionsViewCache; // @synthesize messageRegionsViewCache=_messageRegionsViewCache;
- (void).cxx_destruct;
- (void)setSending:(BOOL)arg1;
- (id)scrollViews;
- (void)messageHeaderViewDidTapRecipientText:(id)arg1;
- (void)messageHeaderViewDidTapMoreButton:(id)arg1;
- (void)messageRegionsViewDidFinishLoad:(id)arg1;
- (void)highlightSearchTermsInWebview:(id)arg1;
- (void)messageRegionsView:(id)arg1 didFinishLoadingWebview:(id)arg2;
- (void)messageRegionsViewHeightDidChange:(id)arg1 scrollNeeded:(BOOL)arg2;
- (void)messageRegionsViewDidStartLoad:(id)arg1;
- (void)messageRegionsViewWasCreatedAsync:(id)arg1;
- (void)messageRegionsViewWillBeCreatedAsync;
- (void)messageRegionsView:(id)arg1 didSelectLinkWithUrl:(id)arg2;
- (void)messageRegionsView:(id)arg1 didToggleQuotedTextButtonAtRegionIndex:(unsigned int)arg2;
- (void)view:(id)arg1 didSelectAttachmentCard:(id)arg2;
- (id)moreMenuButton;
- (void)setFrame:(struct CGRect)arg1;
- (void)senderContactFetched;
- (void)updateSizeWithScrollNeeded:(BOOL)arg1;
- (void)updateSize;
- (void)headerViewTapped:(id)arg1;
- (BOOL)shouldHideMessageRegionsView;
- (id)cardCarouselView;
- (void)expandedRegionsChanged;
- (void)setMessage:(id)arg1 fromConversation:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)createMessageHeaderView;
- (struct CGRect)messageRegionsFrame;
- (void)createSubviews;
@property(readonly, nonatomic) ConversationMessage *message;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

