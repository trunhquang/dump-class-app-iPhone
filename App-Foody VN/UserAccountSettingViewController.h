//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "ImageCropDelegate.h"
#import "OAuthDelegate.h"
#import "PhotoEditProtocol.h"
#import "PushSettingDetailDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class LoginUser, NSArray, NSString, Property, UIButton, UILabel, UITableView, UITextField, UITextView, UIView, UploadPhoto;

@interface UserAccountSettingViewController : BaseViewController <ImageCropDelegate, PushSettingDetailDelegate, UITextFieldDelegate, UITextViewDelegate, UIPickerViewDataSource, UIPickerViewDelegate, OAuthDelegate, UIAlertViewDelegate, PhotoEditProtocol>
{
    LoginUser *currentUser;
    UITableView *contentTableView;
    UIButton *avatarButton;
    UIButton *coverButton;
    UITextField *firstNameTextField;
    UITextField *lastNameTextField;
    UILabel *genderLabel;
    UILabel *birthdayLabel;
    Property *genderProp;
    NSString *birthday;
    UITextView *descriptionTextView;
    UIButton *saveButton;
    NSArray *genderList;
    UIView *pickerContainer;
    UploadPhoto *uploadAvatar;
    UploadPhoto *uploadCover;
    unsigned int typeUpload;
}

@property(nonatomic) unsigned int typeUpload; // @synthesize typeUpload;
@property(retain, nonatomic) UploadPhoto *uploadCover; // @synthesize uploadCover;
@property(retain, nonatomic) UploadPhoto *uploadAvatar; // @synthesize uploadAvatar;
@property(retain, nonatomic) UIView *pickerContainer; // @synthesize pickerContainer;
@property(retain, nonatomic) NSArray *genderList; // @synthesize genderList;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView;
@property(copy, nonatomic) NSString *birthday; // @synthesize birthday;
@property(retain, nonatomic) Property *genderProp; // @synthesize genderProp;
@property(retain, nonatomic) UILabel *birthdayLabel; // @synthesize birthdayLabel;
@property(retain, nonatomic) UILabel *genderLabel; // @synthesize genderLabel;
@property(retain, nonatomic) UITextField *lastNameTextField; // @synthesize lastNameTextField;
@property(retain, nonatomic) UITextField *firstNameTextField; // @synthesize firstNameTextField;
@property(retain, nonatomic) UIButton *coverButton; // @synthesize coverButton;
@property(retain, nonatomic) UIButton *avatarButton; // @synthesize avatarButton;
@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView;
@property(retain, nonatomic) LoginUser *currentUser; // @synthesize currentUser;
- (void).cxx_destruct;
- (void)controller:(id)arg1 didSavePushSettingType:(unsigned int)arg2 withValue:(id)arg3;
- (void)didReceivedUserLogInEvent:(id)arg1;
- (void)closeView;
- (void)didReceivedUserLogOutEvent:(id)arg1;
- (void)imageCropperDidCancel:(id)arg1;
- (void)imageCropper:(id)arg1 didFinishCroppingWithImage:(id)arg2;
- (void)doUnlinkUserFacebookAccount;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)OAuthProcessDidFinishForUser:(id)arg1;
- (void)didTouchFacebookLinkButton:(id)arg1;
- (void)didChangedSyndicationSetting:(id)arg1;
- (void)didTouchRetryUploadPhoto:(id)arg1;
- (void)didReceiveUserCoverUploadEvent:(id)arg1;
- (void)didReceivedUserProfileChangedEvent:(id)arg1;
- (void)didReceivedUserAvatarUploadEvent:(id)arg1;
- (void)beginUploadNewUserCover;
- (void)beginUploadNewUserAvatar;
- (void)didFinishEditingPhoto;
- (void)didFinishPhotoEdit;
- (void)userDidSelectImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didTouchUserCoverButton:(id)arg1;
- (void)didTouchUserAvatarButton:(id)arg1;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)userProfileDidChanged;
- (void)showPickerSelectorWithTag:(int)arg1 selectedIndex:(int)arg2;
- (void)didTouchCancelSelectPicker:(id)arg1;
- (void)didTouchDoneSelectPicker:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)didTouchSaveButton:(id)arg1;
- (void)resignTextViewKeyboard:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)didTouchUpdateButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)initializeUIControls:(BOOL)arg1;
- (void)trackPageView;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

