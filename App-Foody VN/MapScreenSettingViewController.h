//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class ResTypeModel, UIButton, UILabel, UISwitch, UIView;

@interface MapScreenSettingViewController : BaseViewController
{
    id <MapSettingDelegate> delegate;
    ResTypeModel *presetSetting;
    UIView *settingContainer;
    UISwitch *allSetting;
    UISwitch *restaurantSetting;
    UISwitch *eatingHouseSetting;
    UISwitch *cafeSetting;
    UISwitch *barPubSetting;
    UISwitch *karaokeSetting;
    UISwitch *bakerySetting;
    UILabel *settingHeaderLabel;
    UILabel *restaurantSettingLabel;
    UILabel *eatingHouseSettingLabel;
    UILabel *cafeSettingLabel;
    UILabel *barPubSettingLabel;
    UILabel *karaokeSettingLabel;
    UILabel *bakerySettingLabel;
    UIButton *showAllButton;
    UIButton *okButton;
}

@property(nonatomic) __weak UIButton *okButton; // @synthesize okButton;
@property(nonatomic) __weak UIButton *showAllButton; // @synthesize showAllButton;
@property(nonatomic) __weak UILabel *bakerySettingLabel; // @synthesize bakerySettingLabel;
@property(nonatomic) __weak UILabel *karaokeSettingLabel; // @synthesize karaokeSettingLabel;
@property(nonatomic) __weak UILabel *barPubSettingLabel; // @synthesize barPubSettingLabel;
@property(nonatomic) __weak UILabel *cafeSettingLabel; // @synthesize cafeSettingLabel;
@property(nonatomic) __weak UILabel *eatingHouseSettingLabel; // @synthesize eatingHouseSettingLabel;
@property(nonatomic) __weak UILabel *restaurantSettingLabel; // @synthesize restaurantSettingLabel;
@property(nonatomic) __weak UILabel *settingHeaderLabel; // @synthesize settingHeaderLabel;
@property(nonatomic) __weak UISwitch *bakerySetting; // @synthesize bakerySetting;
@property(nonatomic) __weak UISwitch *karaokeSetting; // @synthesize karaokeSetting;
@property(nonatomic) __weak UISwitch *barPubSetting; // @synthesize barPubSetting;
@property(nonatomic) __weak UISwitch *cafeSetting; // @synthesize cafeSetting;
@property(nonatomic) __weak UISwitch *eatingHouseSetting; // @synthesize eatingHouseSetting;
@property(nonatomic) __weak UISwitch *restaurantSetting; // @synthesize restaurantSetting;
@property(nonatomic) __weak UISwitch *allSetting; // @synthesize allSetting;
@property(nonatomic) __weak UIView *settingContainer; // @synthesize settingContainer;
@property(retain, nonatomic) ResTypeModel *presetSetting; // @synthesize presetSetting;
@property(nonatomic) __weak id <MapSettingDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didTouchApplyButton:(id)arg1;
- (void)didTouchShowAllButton:(id)arg1;
- (void)enableTypeSelection;
- (void)disableTypeSelection;
- (void)setInitialSetting;
- (void)checkAllSwitchOff;
- (void)didTouchBakerySettingButton:(id)arg1;
- (void)didTouchKaraokeSettingButton:(id)arg1;
- (void)didTouchBarPubSettingButton:(id)arg1;
- (void)didTouchCafeSettingButton:(id)arg1;
- (void)didTouchEatingHouseSettingButton:(id)arg1;
- (void)didTouchRestaurantSettingButton:(id)arg1;
- (void)didTouchAllSettingButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

