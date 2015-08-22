//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MNTokenFieldView;

@interface MNPeoplePickerView : UIView
{
    MNTokenFieldView *_tokenField;
    UIView *_suggestionsView;
    UIView *_peopleSearchView;
}

@property(readonly, nonatomic) MNTokenFieldView *tokenField; // @synthesize tokenField=_tokenField;
@property(retain, nonatomic) UIView *peopleSearchView; // @synthesize peopleSearchView=_peopleSearchView;
@property(retain, nonatomic) UIView *suggestionsView; // @synthesize suggestionsView=_suggestionsView;
- (void).cxx_destruct;
- (void)mn_setBottomContentInset:(float)arg1;
- (void)mn_setTopContentInset:(float)arg1;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 tokenFieldStyle:(int)arg2;
- (id)initWithFrame:(struct CGRect)arg1 tokenFieldStyle:(int)arg2 tokenLabelText:(id)arg3;

@end
