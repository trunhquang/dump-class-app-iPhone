//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NIAttributedLabel, NSAttributedString, NSString, UIButton;

@interface ExplanatoryMessageView : UIView
{
    UIButton *actionButton_;
    NSString *actionTitle_;
    UIButton *dismissButton_;
    NSAttributedString *message_;
    NIAttributedLabel *messageView_;
    BOOL showsDismissButton_;
    BOOL inlineUI_;
    NSString *clusterName_;
    unsigned int clusterType_;
    int messageType_;
    id <ExplanatoryMessageViewDelegate> _delegate;
}

+ (int)convertMessageType:(id)arg1;
+ (id)textForActionButtonWithMessageType:(id)arg1;
+ (id)textForMessageType:(id)arg1 clusterType:(id)arg2 clusterName:(id)arg3 starFilterRange:(out struct _NSRange *)arg4;
+ (id)boldAttributesForMessageType:(id)arg1;
+ (id)attributesForMessageType:(id)arg1;
+ (id)explanatoryMessageViewWithFrame:(struct CGRect)arg1 messageType:(id)arg2 clusterType:(id)arg3 clusterName:(id)arg4;
@property(retain, nonatomic) id <ExplanatoryMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL inlineUI; // @synthesize inlineUI=inlineUI_;
@property(nonatomic) BOOL showsDismissButton; // @synthesize showsDismissButton=showsDismissButton_;
@property(readonly, nonatomic) int messageType; // @synthesize messageType=messageType_;
@property(readonly, nonatomic) unsigned int clusterType; // @synthesize clusterType=clusterType_;
@property(readonly, copy, nonatomic) NSString *clusterName; // @synthesize clusterName=clusterName_;
- (void).cxx_destruct;
- (void)updateActionColorWithDismissButtonShown:(BOOL)arg1;
- (void)dismissTapped:(id)arg1;
- (void)actionTapped:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1 message:(id)arg2 actionTitle:(id)arg3 messageType:(int)arg4;

@end

