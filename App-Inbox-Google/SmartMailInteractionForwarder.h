//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SmartMailInteractionSupport.h"

@class NSString, UIView;

@interface SmartMailInteractionForwarder : NSObject <SmartMailInteractionSupport>
{
    UIView *parentView_;
    id <SmartMailInteractionSupport> delegate_;
}

@property(readonly, nonatomic) __weak id <SmartMailInteractionSupport> delegate; // @synthesize delegate=delegate_;
- (void).cxx_destruct;
- (void)view:(id)arg1 didSelectSuggestedSnoozeConfig:(id)arg2 forItem:(id)arg3;
- (void)viewWasTapped:(id)arg1;
- (void)viewDidSelectDismiss:(id)arg1;
- (void)view:(id)arg1 didSelectPickContactAction:(id)arg2 withSubActionType:(id)arg3;
- (void)view:(id)arg1 didSelectNugget:(id)arg2;
- (void)view:(id)arg1 didToggleExpanded:(BOOL)arg2 withNugget:(id)arg3;
- (void)view:(id)arg1 didSelectSuggestedTask:(id)arg2;
- (void)view:(id)arg1 didSelectSetAliasActionWithName:(id)arg2 categoryId:(id)arg3;
- (void)view:(id)arg1 didSelectRating:(unsigned int)arg2 review:(id)arg3 forAction:(id)arg4;
- (void)view:(id)arg1 didTapButtonAction:(id)arg2 withCallback:(id)arg3;
- (void)view:(id)arg1 didSelectResponse:(id)arg2 forAction:(id)arg3;
- (void)view:(id)arg1 didSelectAppLink:(id)arg2 withFallbackLink:(id)arg3;
- (void)view:(id)arg1 didSelectLink:(id)arg2;
- (void)view:(id)arg1 didSelectEmail:(id)arg2 name:(id)arg3;
- (void)view:(id)arg1 didSelectSmartmailComponent:(id)arg2;
- (void)view:(id)arg1 didSelectAttachmentCard:(id)arg2;
- (id)initWithParentView:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

