//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QTMCollectionViewController.h"

#import "GOOUIViewController.h"
#import "SSOAccountSelectorIdentityContentViewDelegate.h"

@class NITableViewActions, NSArray, NSIndexPath, NSMutableArray, NSString, SSOAccountHeaderLabelView, SSOIdentity, SSOProfileSource, SSORemoveShieldView, SSOService, UIBarButtonItem, UIButton, UIView;

@interface SSOAccountSelectorViewController : QTMCollectionViewController <GOOUIViewController, SSOAccountSelectorIdentityContentViewDelegate>
{
    BOOL _requiresSignIn;
    BOOL _supportsMultipleSelection;
    BOOL _externallyTriggeredDismissal;
    BOOL _showsCancelButton;
    BOOL _shouldAutorotateValue;
    BOOL _removing;
    BOOL _signingIn;
    id <SSOAccountSelectorDelegate> _accountSelectorDelegate;
    SSOIdentity *_signedInIdentity;
    NSString *_shortAppName;
    NSString *_accountsHeaderTitle;
    NSMutableArray *_selectedIdentities;
    SSOService *_service;
    SSOProfileSource *_profileSource;
    NSMutableArray *_orderedIdentities;
    unsigned int _supportedOrientations;
    NSArray *_oldIdentities;
    UIBarButtonItem *_manageButton;
    UIBarButtonItem *_activityIndicatorItem;
    UIButton *_closeButton;
    SSOAccountHeaderLabelView *_accountsHeaderView;
    SSORemoveShieldView *_removeShieldView;
    SSOIdentity *_identityPendingRemoval;
    NSArray *_hiddenLeftBarButtonItems;
    NSIndexPath *_addAccountIndexPath;
    NSIndexPath *_manageAccountsIndexPath;
    NITableViewActions *_actions;
}

@property(retain, nonatomic) NITableViewActions *actions; // @synthesize actions=_actions;
@property(retain, nonatomic) NSIndexPath *manageAccountsIndexPath; // @synthesize manageAccountsIndexPath=_manageAccountsIndexPath;
@property(retain, nonatomic) NSIndexPath *addAccountIndexPath; // @synthesize addAccountIndexPath=_addAccountIndexPath;
@property(retain, nonatomic) NSArray *hiddenLeftBarButtonItems; // @synthesize hiddenLeftBarButtonItems=_hiddenLeftBarButtonItems;
@property(retain, nonatomic) SSOIdentity *identityPendingRemoval; // @synthesize identityPendingRemoval=_identityPendingRemoval;
@property(retain, nonatomic) SSORemoveShieldView *removeShieldView; // @synthesize removeShieldView=_removeShieldView;
@property(retain, nonatomic) SSOAccountHeaderLabelView *accountsHeaderView; // @synthesize accountsHeaderView=_accountsHeaderView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIBarButtonItem *activityIndicatorItem; // @synthesize activityIndicatorItem=_activityIndicatorItem;
@property(retain, nonatomic) UIBarButtonItem *manageButton; // @synthesize manageButton=_manageButton;
@property(retain, nonatomic) NSArray *oldIdentities; // @synthesize oldIdentities=_oldIdentities;
@property(nonatomic, getter=isSigningIn) BOOL signingIn; // @synthesize signingIn=_signingIn;
@property(nonatomic, getter=isRemoving) BOOL removing; // @synthesize removing=_removing;
@property(nonatomic) unsigned int supportedOrientations; // @synthesize supportedOrientations=_supportedOrientations;
@property(nonatomic) BOOL shouldAutorotateValue; // @synthesize shouldAutorotateValue=_shouldAutorotateValue;
@property(nonatomic) BOOL showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;
@property(retain, nonatomic) NSMutableArray *orderedIdentities; // @synthesize orderedIdentities=_orderedIdentities;
@property(retain, nonatomic) SSOProfileSource *profileSource; // @synthesize profileSource=_profileSource;
@property(retain, nonatomic) SSOService *service; // @synthesize service=_service;
@property(nonatomic) BOOL externallyTriggeredDismissal; // @synthesize externallyTriggeredDismissal=_externallyTriggeredDismissal;
@property(retain, nonatomic) NSMutableArray *selectedIdentities; // @synthesize selectedIdentities=_selectedIdentities;
@property(readonly, nonatomic) BOOL supportsMultipleSelection; // @synthesize supportsMultipleSelection=_supportsMultipleSelection;
@property(readonly, copy, nonatomic) NSString *accountsHeaderTitle; // @synthesize accountsHeaderTitle=_accountsHeaderTitle;
@property(copy, nonatomic) NSString *shortAppName; // @synthesize shortAppName=_shortAppName;
@property(retain, nonatomic) SSOIdentity *signedInIdentity; // @synthesize signedInIdentity=_signedInIdentity;
@property(readonly, nonatomic) BOOL requiresSignIn; // @synthesize requiresSignIn=_requiresSignIn;
@property(readonly, nonatomic) __weak id <SSOAccountSelectorDelegate> accountSelectorDelegate; // @synthesize accountSelectorDelegate=_accountSelectorDelegate;
- (void).cxx_destruct;
- (void)accountSelectorIdentityContentViewDidToggle:(id)arg1 didToggleSwitch:(BOOL)arg2;
- (void)accountSelectorIdentityContentViewDidTapRemove:(id)arg1;
- (void)singleAppSignOutButtonDidTap:(id)arg1;
- (void)close:(id)arg1;
- (BOOL)accountDidSelect:(id)arg1 indexPath:(id)arg2;
- (void)addAccountDidTap:(id)arg1 indexPath:(id)arg2;
- (void)identityListDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)removeIdentityDidCancel;
- (void)hideRemoveIdentityShield;
- (void)showRemoveIdentityShield;
- (void)removeIdentity:(id)arg1;
- (void)removeIdentityDidConfirm:(id)arg1;
- (void)confirmRemoveIdentity:(id)arg1;
- (void)addAndSelectIdentity:(id)arg1;
- (void)updateSignedInIdentity:(id)arg1 animated:(BOOL)arg2;
- (BOOL)canSelectIdentityForRow:(int)arg1;
- (void)filterThroughClientWithIdentity:(id)arg1 profile:(id)arg2;
- (void)refreshProfiles;
- (void)reloadOrderedIdentities;
- (void)setRightBarButtonItemEnabled:(BOOL)arg1;
- (void)updateHeaderBarState;
- (void)updateLeftBarButtonItems;
- (void)toggleRemove:(id)arg1;
- (BOOL)extendsToTopEdge;
- (void)updateIdentitiesInModel;
- (int)numberOfAccountRowsInModel;
- (void)addNonIdentityObjectsToModel;
- (void)deleteNonIdentityObjectsFromModel;
- (id)modelObjectForIdentity:(id)arg1;
- (void)updateModel;
- (id)modelObjectForSingleAppSignOut;
- (id)modelObjectForAddAccount;
- (id)identityForIndexPath:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initForMultipleSelectionWithService:(id)arg1 shouldAutoRotate:(BOOL)arg2 supportedOrientations:(unsigned int)arg3 requiresSignIn:(BOOL)arg4 accountsHeaderTitle:(id)arg5 selectedIdentities:(id)arg6 delegate:(id)arg7;
- (id)initWithService:(id)arg1 showsCancelButton:(BOOL)arg2 shouldAutoRotate:(BOOL)arg3 supportedOrientations:(unsigned int)arg4 requiresSignIn:(BOOL)arg5 accountsHeaderTitle:(id)arg6 signedInIdentity:(id)arg7 delegate:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *footerView;
@property(readonly) unsigned int hash;
@property(nonatomic) int headerTitleTextAlignment;
@property(retain, nonatomic) UIView *headerView;
@property(readonly) Class superclass;

@end

