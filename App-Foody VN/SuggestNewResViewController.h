//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "LocationPinDelegate.h"
#import "MultipleSelectListDelegate.h"
#import "PhotoEditProtocol.h"
#import "RTAlertViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CLLocation, CityModel, CountryModel, NSArray, NSDictionary, NSMutableArray, NSString, Property, Restaurant, UIButton, UIScrollView, UITableView, UITextField, UIView;

@interface SuggestNewResViewController : BaseViewController <MultipleSelectListDelegate, RTAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, LocationPinDelegate, UIAlertViewDelegate, PhotoEditProtocol>
{
    unsigned int deletingPhotoIndex;
    int resInputFieldTag;
    BOOL userEditedAddress;
    int editTextFieldTag;
    BOOL keyboardShown;
    int optionTag;
    BOOL isUploadPhoto;
    id <SuggestNewResDelegate> delegate;
    UITableView *contentTableView;
    UIButton *saveButton;
    NSMutableArray *uploadPhotos;
    UIScrollView *photoScrollView;
    UIView *photoView;
    UITextField *resNameTextField;
    UITextField *resAddressTextField;
    UIButton *resCityButton;
    UIButton *resDistrictButton;
    CityModel *selectedCity;
    Property *selectedDistrict;
    UIView *pickerContainer;
    NSArray *selectedResTypes;
    NSArray *selectedFacilities;
    NSString *fromHourStr;
    NSString *toHourStr;
    NSString *resPhoneStr;
    NSString *resCapacityStr;
    NSString *resWebsiteStr;
    NSString *minPriceStr;
    NSString *maxPriceStr;
    CLLocation *resPosition;
    NSArray *resInfoInputFields;
    Restaurant *reviewingResModel;
    UIButton *resCountryButton;
    CountryModel *selectedCountry;
    UIScrollView *_scrollView;
    NSString *_fullAddress;
    NSDictionary *_resTypeInAllCatagories;
}

@property(retain, nonatomic) NSDictionary *resTypeInAllCatagories; // @synthesize resTypeInAllCatagories=_resTypeInAllCatagories;
@property(copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) CountryModel *selectedCountry; // @synthesize selectedCountry;
@property(retain, nonatomic) UIButton *resCountryButton; // @synthesize resCountryButton;
@property(retain, nonatomic) Restaurant *reviewingResModel; // @synthesize reviewingResModel;
@property(retain, nonatomic) NSArray *resInfoInputFields; // @synthesize resInfoInputFields;
@property(retain, nonatomic) CLLocation *resPosition; // @synthesize resPosition;
@property(copy, nonatomic) NSString *maxPriceStr; // @synthesize maxPriceStr;
@property(copy, nonatomic) NSString *minPriceStr; // @synthesize minPriceStr;
@property(copy, nonatomic) NSString *resWebsiteStr; // @synthesize resWebsiteStr;
@property(copy, nonatomic) NSString *resCapacityStr; // @synthesize resCapacityStr;
@property(copy, nonatomic) NSString *resPhoneStr; // @synthesize resPhoneStr;
@property(copy, nonatomic) NSString *toHourStr; // @synthesize toHourStr;
@property(copy, nonatomic) NSString *fromHourStr; // @synthesize fromHourStr;
@property(retain, nonatomic) NSArray *selectedFacilities; // @synthesize selectedFacilities;
@property(retain, nonatomic) NSArray *selectedResTypes; // @synthesize selectedResTypes;
@property(retain, nonatomic) UIView *pickerContainer; // @synthesize pickerContainer;
@property(retain, nonatomic) Property *selectedDistrict; // @synthesize selectedDistrict;
@property(retain, nonatomic) CityModel *selectedCity; // @synthesize selectedCity;
@property(retain, nonatomic) UIButton *resDistrictButton; // @synthesize resDistrictButton;
@property(retain, nonatomic) UIButton *resCityButton; // @synthesize resCityButton;
@property(retain, nonatomic) UITextField *resAddressTextField; // @synthesize resAddressTextField;
@property(retain, nonatomic) UITextField *resNameTextField; // @synthesize resNameTextField;
@property(retain, nonatomic) UIView *photoView; // @synthesize photoView;
@property(retain, nonatomic) UIScrollView *photoScrollView; // @synthesize photoScrollView;
@property(retain, nonatomic) NSMutableArray *uploadPhotos; // @synthesize uploadPhotos;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton;
@property(nonatomic) __weak UITableView *contentTableView; // @synthesize contentTableView;
@property(nonatomic) __weak id <SuggestNewResDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)showFilterSelectListWithPropDictionary:(id)arg1 selectedItems:(id)arg2 singleSelection:(BOOL)arg3 viewTag:(int)arg4;
- (void)objectImageDownloadDidFinish;
- (void)objectImageDownloadDidPartialFinish;
- (void)viewDidUnload;
- (void)didFinishEditingPhoto;
- (void)doSubmitSuggestedNewRestaurant:(id)arg1;
- (void)didFinishInputResMoreInfo:(id)arg1;
- (void)didSelectLocation:(id)arg1 detededAddress:(id)arg2 detectedDistrict:(id)arg3 detectedCity:(id)arg4;
- (void)didChangeSearchFilterDisctrict:(id)arg1;
- (void)clearSelectDistrict;
- (void)didChangeSearchFilterCity:(id)arg1;
- (void)clearSelectCity;
- (void)didChangeSearchFilterCountry:(id)arg1;
- (void)resignAllTextField;
- (void)didDoneMultipleViewController:(id)arg1 withSelectLists:(id)arg2;
- (void)didCancelMultipleSelectList;
- (void)didTouchCancelButton:(id)arg1;
- (void)didTouchSuggestNewResButton:(id)arg1;
- (void)showSelectListWithTitle:(id)arg1 propList:(id)arg2 selectedProps:(id)arg3 isSingleList:(BOOL)arg4 withViewTag:(int)arg5;
- (void)didTouchSelectDistrictButton:(id)arg1;
- (void)didTouchSelectCityButton:(id)arg1;
- (void)didTouchSelectCountryButton:(id)arg1;
- (void)resignTextViewKeyboard:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didTouchUploadPhotoDeleteButton:(id)arg1;
- (void)didTouchTakeMorePicture:(id)arg1;
- (void)didTouchUploadPhotoButton:(id)arg1;
- (void)showFullScreenTagScreenForPhotoIndex:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)elcImagePickerControllerDidCancel:(id)arg1;
- (void)userDidSelectImages:(id)arg1;
- (void)userDidSelectImage:(id)arg1;
- (void)setRestaurantUploadPhotos;
- (void)didTouchUpdateButton:(id)arg1;
- (void)initializeUIControls:(BOOL)arg1;
- (void)trackPageView;
- (void)addHeaderTableView;
- (void)addFooterTableView;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

