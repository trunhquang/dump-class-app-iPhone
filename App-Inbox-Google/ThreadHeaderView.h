//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MessageWarningViewDelegate.h"
#import "SmartMailThreadHeaderDelegate.h"
#import "TaskEntryViewDelegate.h"
#import "ThreadNestedLayoutViewSubview.h"
#import "ThreadTaskViewDelegate.h"

@class MessageWarningView, NSArray, NSString, QTMInkTouchController, SmartMailActionsOnlyView, SmartMailInteractionForwarder, SmartMailThreadHeader, ThreadTaskView, UITextView;

@interface ThreadHeaderView : UIView <MessageWarningViewDelegate, SmartMailThreadHeaderDelegate, TaskEntryViewDelegate, ThreadTaskViewDelegate, ThreadNestedLayoutViewSubview>
{
    BOOL animateNextLayout_;
    id <JBTConversation> conversation_;
    SmartMailInteractionForwarder *forwarder_;
    UIView *separatorView_;
    UIView *subjectInkContainer_;
    SmartMailActionsOnlyView *smartMailActionsView_;
    id <JavaUtilList> smartMailComponents_;
    SmartMailThreadHeader *smartMailThreadHeader_;
    UITextView *subjectTextView_;
    ThreadTaskView *threadTaskView_;
    MessageWarningView *warningView_;
    QTMInkTouchController *inkTC;
    BOOL headerImageBleedAllowed_;
    id <ThreadHeaderViewDelegate> delegate_;
    int mainSmartmailIndex_;
}

@property(nonatomic) int mainSmartmailIndex; // @synthesize mainSmartmailIndex=mainSmartmailIndex_;
@property(nonatomic) BOOL headerImageBleedAllowed; // @synthesize headerImageBleedAllowed=headerImageBleedAllowed_;
@property(nonatomic) __weak id <ThreadHeaderViewDelegate> delegate; // @synthesize delegate=delegate_;
- (void).cxx_destruct;
- (void)warningViewLearnMoreTapped:(id)arg1;
- (void)threadTaskViewWasTapped:(id)arg1;
- (void)threadTaskViewDidTapDismiss:(id)arg1;
- (void)taskEntryViewTextDidChange:(id)arg1;
- (void)taskEntryViewDidFinishEditing:(id)arg1;
- (void)taskEntryViewDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) NSArray *scrollViews;
- (void)smartMailThreadHeader:(id)arg1 changedExpandedState:(BOOL)arg2 atIndex:(unsigned int)arg3;
- (void)smartMailThreadHeader:(id)arg1 changedState:(id)arg2;
- (void)threadSubjectLabelWasTapped;
- (BOOL)shouldShowThreadTask;
- (void)createSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) float topOffsetForTransparentToolbar;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate;
@property(readonly, nonatomic) BOOL headerCanBleed;
- (float)offsetOfSmartMailViewAtIndex:(int)arg1;
- (void)updateThreadTaskViewOriginY:(float)arg1;
- (float)threadTaskViewOriginY;
- (void)updateWithMessageList:(id)arg1 andSpamMessage:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

