//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBContainerViewController.h"

#import "MNCaptionPreviewViewControllerDelegate.h"
#import "MNExternalForwardDataFetcherListener.h"
#import "MNMessageForwardSendControllerConsumer.h"
#import "MNMessageForwardSendControllerDelegate.h"
#import "MNMultiPeoplePickerViewControllerDelegate.h"
#import "MNScrollViewScrollingListener.h"

@class FBAnalytics, FBUserSession, MNCaptionPreviewViewController, MNExternalDataToForwardContentMapper, MNForwardMessageView, MNMessageForwardSendController, MNMultiPeoplePickerViewController, NSArray, NSObject<MNForwardContentProtocol>, NSString;

@interface MNForwardMessageViewController : FBContainerViewController <MNCaptionPreviewViewControllerDelegate, MNExternalForwardDataFetcherListener, MNMultiPeoplePickerViewControllerDelegate, MNMessageForwardSendControllerDelegate, MNMessageForwardSendControllerConsumer, MNScrollViewScrollingListener>
{
    CDUnknownBlockType _forwardSenderBlock;
    FBUserSession *_session;
    FBAnalytics *_analytics;
    id <MNSuggestedContactsRetriever> _suggestedContactsRetriever;
    NSArray *_peopleSuggestionsListeners;
    unsigned int _entryPoint;
    MNMessageForwardSendController *_sendController;
    MNCaptionPreviewViewController *_captionPreviewViewController;
    MNForwardMessageView *_forwardMessageView;
    NSString *_navigationBarTitle;
    NSObject<MNForwardContentProtocol> *_forwardContent;
    unsigned int _recipientCountLimit;
    id <MNExternalForwardDataFetcher> _externalDataFetcher;
    MNExternalDataToForwardContentMapper *_externalDataToForwardContentMapper;
    BOOL _showComposerView;
    id <MNForwardMessageViewControllerDelegate> _delegate;
    MNMultiPeoplePickerViewController *_multiPeoplePickerViewController;
}

@property(retain, nonatomic) FBUserSession *session; // @synthesize session=_session;
@property(retain, nonatomic) MNMultiPeoplePickerViewController *multiPeoplePickerViewController; // @synthesize multiPeoplePickerViewController=_multiPeoplePickerViewController;
@property(nonatomic) __weak id <MNForwardMessageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_configureCaptionPreviewViewControllerWithContent:(id)arg1;
- (void)didFetchExternalForwardData:(id)arg1 messageOutgoingAttribution:(id)arg2;
- (void)didFailToFetchDataWithError:(id)arg1;
- (void)willFetchExternalForwardDataWithMessageOutgoingAttribution:(id)arg1;
- (void)_configureToForwardContent:(id)arg1;
- (void)_updateForwardContentWithTextIfPossible;
- (void)_setComposerViewHidden:(BOOL)arg1;
- (id)childViewControllerForStatusBarHidden;
- (void)captionPreviewViewControllerDidUpdatePreviewView:(id)arg1;
- (void)captionPreviewViewControllerDidEndEditingCaption:(id)arg1;
- (void)captionPreviewViewControllerDidBeginEditingCaption:(id)arg1;
- (id)navigationBar;
- (id)navigationItem;
- (id)analyticsExtras:(id)arg1;
- (void)multiPeoplePickerViewControllerDidTapBlockingUI:(id)arg1;
- (id)multiPeoplePickerViewControllerStringForSearchBarPlaceholderText:(id)arg1;
- (void)multiPeoplePickerViewControllerWillEndSearch:(id)arg1;
- (void)multiPeoplePickerViewControllerWillBeginSearch:(id)arg1;
- (float)containerTopContentInsetForMultiPeoplePickerViewController:(id)arg1;
- (BOOL)multiPeoplePickerViewController:(id)arg1 shouldShowPersonFromSearch:(id)arg2;
- (void)multiPeoplePickerViewController:(id)arg1 didSelectContact:(id)arg2 fromSearch:(BOOL)arg3;
- (void)multiPeoplePickerViewController:(id)arg1 didPickContacts:(id)arg2;
- (void)forwardSendControllerDidHideSendingUI:(id)arg1;
- (void)forwardSendControllerDidShowSendingUI:(id)arg1;
- (BOOL)forwardSendControllerShouldShowCancelButtonDuringSending:(id)arg1;
- (BOOL)forwardSendControllerShouldShowCancelButton:(id)arg1;
- (void)forwardSendController:(id)arg1 didFailForFbids:(id)arg2;
- (void)forwardSendController:(id)arg1 didForwardMessageWithRecipientInfo:(id)arg2;
- (void)forwardSendControllerDidCancel:(id)arg1;
- (BOOL)shouldShowSuccessConfirmationForForwardSendController:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_forwardItemToContacts:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)_previewViewNeedsLayout;
- (void)dealloc;
- (id)initWithUserSession:(id)arg1 analytics:(id)arg2 peoplePickerViewControllerBlock:(CDUnknownBlockType)arg3 forwardSenderBlock:(CDUnknownBlockType)arg4 externalDataToForwardContentMapper:(id)arg5 suggestedContactsRetriever:(id)arg6 peopleSuggestionsListeners:(id)arg7 navigationBarTitle:(id)arg8 entryPoint:(unsigned int)arg9 externalForwardDataFetcher:(id)arg10 showComposerView:(BOOL)arg11 recipientCountLimit:(unsigned int)arg12;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

