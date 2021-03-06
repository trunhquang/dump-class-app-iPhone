//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBCrowdsourcingHomeBaseViewController.h"

#import "FBCrowdsourcingCityPickerDelegate.h"
#import "FBCrowdsourcingCreationPrivacyViewControllerDelegate.h"
#import "FBCrowdsourcingHomeViewDelegate.h"
#import "FBKeyboardObserverDelegate.h"
#import "FBMediaAttachmentPickerControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FBCrowdsourcingCityPickerViewController, FBCrowdsourcingHomeMigrationLogger, FBCrowdsourcingHomeMigrationModel, FBGraphQLMutationHandle, FBMemPage, NSString;

@interface FBCrowdsourcingHomeMigrationViewController : FBCrowdsourcingHomeBaseViewController <UIAlertViewDelegate, UITextFieldDelegate, UIScrollViewDelegate, FBCrowdsourcingCreationPrivacyViewControllerDelegate, FBCrowdsourcingHomeViewDelegate, FBKeyboardObserverDelegate, FBMediaAttachmentPickerControllerDelegate, FBCrowdsourcingCityPickerDelegate>
{
    FBMemPage *_page;
    FBCrowdsourcingHomeMigrationModel *_model;
    FBCrowdsourcingHomeMigrationLogger *_logger;
    id _pageQueryToken;
    FBGraphQLMutationHandle *_handler;
    id <FBCrowdsourcingHomeMigrationViewControllerDelegate> _delegate;
    FBCrowdsourcingCityPickerViewController *_cityPickerViewController;
}

@property(retain, nonatomic) FBCrowdsourcingCityPickerViewController *cityPickerViewController; // @synthesize cityPickerViewController=_cityPickerViewController;
@property(nonatomic) __weak id <FBCrowdsourcingHomeMigrationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateHomeView;
- (void)_handlePageFetchResponse:(id)arg1;
- (void)_queryPageInfo;
- (void)_handleUploadError:(id)arg1;
- (void)_sendMigrationRequest;
- (id)_transformPrivacy:(id)arg1;
- (void)crowdsourcingCityPickerViewControllerDidCancel;
- (void)crowdsourcingCityPickerViewControllerDidSelectCity:(id)arg1;
- (void)crowdsourcingCreationPrivacyViewControllerDidTapCancel;
- (void)crowdsourcingCreationPrivacyViewControllerDidUpdatePrivacy:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)crowdsourcingHomeViewDidTapOnCityField;
- (void)crowdsourcingHomeViewDidTapOnAddPhotoIcon;
- (void)crowdsourcingHomeViewDidTapOnPrivacySetting;
- (BOOL)_hasProfilePhoto;
- (void)_didTapUpdateProfilePhotoOption;
- (void)_didTapRemoveProfilePhotoOption;
- (void)_updateHomeViewWithSelectedPhoto:(id)arg1;
- (void)_didTapDone;
- (void)_didTapCancel;
- (BOOL)fb_showNavBarSearchField;
- (void)_didEnterBackgroundNotification;
- (void)viewDidLoad;
- (id)initWithPageID:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

