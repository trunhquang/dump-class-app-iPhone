//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNContactAddedDialog, MNContactNotFoundDialog, MNLoadingIndicator, MNPhoneNumberDialog;

@interface MNAddContactView : UIView
{
    MNPhoneNumberDialog *_phoneNumberDialog;
    MNContactNotFoundDialog *_contactNotFoundDialog;
    MNContactAddedDialog *_contactAddedDialog;
    unsigned int _state;
    MNLoadingIndicator *_activityIndicator;
}

@property(retain, nonatomic) MNLoadingIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(nonatomic) unsigned int state; // @synthesize state=_state;
@property(retain, nonatomic) MNContactAddedDialog *contactAddedDialog; // @synthesize contactAddedDialog=_contactAddedDialog;
@property(retain, nonatomic) MNContactNotFoundDialog *contactNotFoundDialog; // @synthesize contactNotFoundDialog=_contactNotFoundDialog;
@property(retain, nonatomic) MNPhoneNumberDialog *phoneNumberDialog; // @synthesize phoneNumberDialog=_phoneNumberDialog;
- (void).cxx_destruct;
- (void)_transitionToContactAdded;
- (void)_transitionToContactNotFound;
- (void)_transitionToLookup;
- (void)_transitionToEnterPhoneNumber;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 nameFormatter:(id)arg3;

@end
