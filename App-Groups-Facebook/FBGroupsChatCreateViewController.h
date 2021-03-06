//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBAvatarPickerControllerDelegate.h"
#import "FBCoverImagePickerControllerDelegate.h"
#import "FBGroupsChatCreateViewDelegate.h"
#import "FBGroupsMNThreadCreatorDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"

@class FBAnimatedProgressBarView, FBAvatarPickerController, FBCoverImagePickerController, FBGroupsChatCreateAlertController, FBGroupsChatCreateView, FBGroupsMNThreadCreator, FBMutableTaggableCollection, FBUserSession, NSArray, NSMutableSet, NSString, UIActionSheet;

@interface FBGroupsChatCreateViewController : UIViewController <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, FBAvatarPickerControllerDelegate, FBCoverImagePickerControllerDelegate, FBGroupsChatCreateViewDelegate, FBGroupsMNThreadCreatorDelegate>
{
    FBUserSession *_session;
    NSString *_groupID;
    NSString *_postID;
    NSString *_feedbackID;
    NSMutableSet *_initialSelectionGraphQLIDSet;
    FBGroupsChatCreateView *_chatCreateView;
    FBGroupsMNThreadCreator *_threadCreator;
    FBAvatarPickerController *_memberPicker;
    FBCoverImagePickerController *_profileImagePicker;
    FBGroupsChatCreateAlertController *_alertController;
    FBMutableTaggableCollection *_taggableCollection;
    NSArray *_sortDescriptors;
    FBAnimatedProgressBarView *_progressBar;
    UIActionSheet *_profileImageActionSheet;
    int _profileImageActionSheetUploadPhotoIndex;
    int _profileImageActionSheetTakePictureIndex;
    unsigned int _entryPoint;
    id <FBGroupsChatCreateViewControllerDelegate> _delegate;
    NSArray *_initialSelection;
    id <FBGroupsChatCreateViewConfig> _config;
}

@property(retain, nonatomic) id <FBGroupsChatCreateViewConfig> config; // @synthesize config=_config;
@property(nonatomic) unsigned int entryPoint; // @synthesize entryPoint=_entryPoint;
@property(copy, nonatomic) NSArray *initialSelection; // @synthesize initialSelection=_initialSelection;
@property(nonatomic) __weak id <FBGroupsChatCreateViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)analyticsExtras;
- (void)groupThreadCreator:(id)arg1 didUpdateProgress:(double)arg2;
- (void)groupThreadCreator:(id)arg1 didFailWithError:(id)arg2;
- (void)groupThreadCreator:(id)arg1 didFinishWithThreadFBID:(id)arg2;
- (void)relaunchCoverImagePicker:(id)arg1 withSourceType:(int)arg2;
- (void)groupsChatCreateViewDidSelectProfileImage:(id)arg1;
- (void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)_validateInput:(id)arg1 selection:(id)arg2;
- (void)_showProfileImagePickerWithSourceType:(int)arg1;
- (void)_showProfileImageActionSheet;
- (void)_setupNavigationBarItems;
- (void)_setupMemberPicker;
- (void)_dismissProfileImagePickerAnimated:(BOOL)arg1;
- (void)_dismissChatCreateViewController:(CDUnknownBlockType)arg1;
- (void)_cleanupProgressBar;
- (void)_createButtonTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSession:(id)arg1 groupID:(id)arg2 postID:(id)arg3;
- (id)initWithSession:(id)arg1 groupID:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

