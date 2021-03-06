//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton;

@interface UIImageContainerView : UIView <UITextFieldDelegate, UITextViewDelegate>
{
    BOOL isAnimating;
    int inputTag;
    BOOL isShowingKeyboard;
    int currentPhotoTag;
    UIButton *enterFullscreenBtn;
    id displayObject;
    UIActivityIndicatorView *spinner;
    id <UIImageContainerDelegate> _delegateImageContainer;
}

@property(nonatomic) __weak id <UIImageContainerDelegate> delegateImageContainer; // @synthesize delegateImageContainer=_delegateImageContainer;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner;
@property(retain, nonatomic) id displayObject; // @synthesize displayObject;
@property(retain, nonatomic) UIButton *enterFullscreenBtn; // @synthesize enterFullscreenBtn;
@property(nonatomic) int currentPhotoTag; // @synthesize currentPhotoTag;
- (void).cxx_destruct;
- (void)completeView;
- (void)resetFrame;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)segmentedControlValueDidChange:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)didTouchDishInputOK:(id)arg1;
- (void)didTouchTitleInputOK:(id)arg1;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)addDishInputView;
- (void)removeCategorySelectionOfPhoto;
- (void)addCategorySelectionOfPhoto;
- (void)removeTitleInputView;
- (void)addTitleInputView;
- (void)stopAnimating;
- (void)startAnimating;
- (void)setFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)doHidePhotoInfo;
- (void)doShowPhotoInfo;
- (void)doShowHidePhotoInfo;
- (void)didTouchEnterFullscreenButton:(id)arg1;
- (void)didDoubleTapOnImage:(id)arg1;
- (void)didTapOnImage:(id)arg1;
- (void)resetUI;
- (void)setPhoto:(id)arg1 force:(BOOL)arg2;
- (void)setPhoto:(id)arg1;
- (id)setPhotoInfo;
- (void)setPhotoImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

