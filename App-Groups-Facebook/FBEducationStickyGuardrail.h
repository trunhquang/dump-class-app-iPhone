//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBComposerAudienceEducationProtocol.h"
#import "FBComposerStickyGuardrailViewControllerDelegate.h"

@class FBMemAudienceInfo, FBPopoverController, FBUserSession, NSString;

@interface FBEducationStickyGuardrail : NSObject <FBComposerStickyGuardrailViewControllerDelegate, FBComposerAudienceEducationProtocol>
{
    FBUserSession *_session;
    FBMemAudienceInfo *_audienceInfo;
    FBPopoverController *_popoverEducationController;
    id <FBComposerAudienceEducationProtocolDelegate> _delegate;
    unsigned int _platform;
}

@property(readonly, nonatomic) unsigned int platform; // @synthesize platform=_platform;
@property(nonatomic) __weak id <FBComposerAudienceEducationProtocolDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stickyGuardrailViewControllerUserDidChangePrivacyToSuggested:(id)arg1;
- (void)stickyGuardrailViewControllerUserDidDismissView:(id)arg1 withEvent:(unsigned int)arg2;
- (id)_suggestedPrivacySetting;
- (id)_originalPrivacySetting;
- (void)_sendStickyGuardrailRequestForEvent:(unsigned int)arg1;
- (void)_dismissPopoverEducationUserDidChangePrivacyToSuggested;
- (void)_dismissPopoverEducation;
- (id)presentablePopoverControllerWithFrame:(struct CGRect)arg1;
- (void)sendAudienceEducationRequestForEvent:(unsigned int)arg1;
- (void)didInsertAudienceEducationToView;
- (unsigned int)tooltipType;
- (BOOL)shouldShowTooltip;
- (id)tooltipIdentifier;
- (unsigned int)audienceEducationViewType;
- (id)audienceEducationData;
- (BOOL)showEducationForPrivacySetting:(id)arg1;
- (unsigned int)audienceEducationType;
- (BOOL)_isValidInputParameters;
- (id)initWithSession:(id)arg1 audienceinfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

