//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CBLSearchResultProviderDelegate.h"
#import "CBLUserMentionsViewDelegate.h"
#import "UITextViewDelegate.h"

@class CBLPin, CBLPlace, CBLSearchResultProvider, CBLTapTargetButton, CBLUserMentionsView, NSArray, NSString, NSURL, UIButton, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UITextView;

@interface CBLAddPinImageDescriptionView : UIView <UITextViewDelegate, CBLSearchResultProviderDelegate, CBLUserMentionsViewDelegate>
{
    id <CBLAddPinViewDescriptionViewDelegate> _delegate;
    UIImageView *_imageView;
    UITextView *_textView;
    CBLPin *_pin;
    CBLPlace *_place;
    UIImage *_image;
    NSURL *_imageURL;
    NSString *_descriptionText;
    NSString *_placeholderText;
    int _descriptionErrorType;
    UITapGestureRecognizer *_descriptionTapGesture;
    UILabel *_previewDescriptionLabel;
    CBLTapTargetButton *_facebookButton;
    CBLTapTargetButton *_locationButton;
    UIView *_dummyGestureView;
    UIButton *_locationNameButton;
    UILabel *_characterCountLabel;
    CBLSearchResultProvider *_userMentionResultProvider;
    NSArray *_userMentionResults;
    CBLUserMentionsView *_userMentionScrollView;
    struct _NSRange _userMentionRange;
}

+ (float)totalHeightForDescriptionViewForDescriptionText:(id)arg1 width:(float)arg2;
@property(retain, nonatomic) CBLUserMentionsView *userMentionScrollView; // @synthesize userMentionScrollView=_userMentionScrollView;
@property(nonatomic) struct _NSRange userMentionRange; // @synthesize userMentionRange=_userMentionRange;
@property(retain, nonatomic) NSArray *userMentionResults; // @synthesize userMentionResults=_userMentionResults;
@property(retain, nonatomic) CBLSearchResultProvider *userMentionResultProvider; // @synthesize userMentionResultProvider=_userMentionResultProvider;
@property(retain, nonatomic) UILabel *characterCountLabel; // @synthesize characterCountLabel=_characterCountLabel;
@property(retain, nonatomic) UIButton *locationNameButton; // @synthesize locationNameButton=_locationNameButton;
@property(retain, nonatomic) UIView *dummyGestureView; // @synthesize dummyGestureView=_dummyGestureView;
@property(retain, nonatomic) CBLTapTargetButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) CBLTapTargetButton *facebookButton; // @synthesize facebookButton=_facebookButton;
@property(retain, nonatomic) UILabel *previewDescriptionLabel; // @synthesize previewDescriptionLabel=_previewDescriptionLabel;
@property(retain, nonatomic) UITapGestureRecognizer *descriptionTapGesture; // @synthesize descriptionTapGesture=_descriptionTapGesture;
@property(nonatomic) int descriptionErrorType; // @synthesize descriptionErrorType=_descriptionErrorType;
@property(copy, nonatomic) NSString *placeholderText; // @synthesize placeholderText=_placeholderText;
@property(copy, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) CBLPlace *place; // @synthesize place=_place;
@property(retain, nonatomic) CBLPin *pin; // @synthesize pin=_pin;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <CBLAddPinViewDescriptionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CBLUserMentionsViewDidTapContact:(id)arg1;
- (void)CBLSearchResultProviderDidSuggest:(id)arg1;
- (void)validate;
- (void)descriptionViewInputDidFinishMention;
- (void)descriptionViewOnMentionWithUsername:(id)arg1 range:(struct _NSRange)arg2;
- (void)CBLSearchResultProviderDidClear;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (BOOL)textViewShouldEndEditing:(id)arg1;
- (void)locationButtonPressed:(id)arg1;
- (void)facebookButtonPressed:(id)arg1;
- (void)setPlace:(id)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) BOOL shouldShareToFacebook;
- (void)layoutLocationLabel;
- (void)layoutEditingControlButtons;
- (void)layoutControlButtons;
- (void)layoutTextView;
- (void)layoutPreviewLabel;
- (void)layoutImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

