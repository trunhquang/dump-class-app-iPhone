//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "UITextFieldDelegate.h"

@class NSString;

@interface RCTTextFieldManager : RCTViewManager <UITextFieldDelegate>
{
}

+ (id)getPropConfigView_mostRecentEventCount;
+ (id)getPropConfigView_fontFamily;
+ (id)getPropConfigView_fontStyle;
+ (id)getPropConfigView_fontWeight;
+ (id)getPropConfigView_fontSize;
+ (id)getPropConfigView_textAlign;
+ (id)getPropConfigView_autoCapitalize;
+ (id)getPropConfigView_color;
+ (id)getPropConfigView_password;
+ (id)getPropConfigView_secureTextEntry;
+ (id)getPropConfigView_enablesReturnKeyAutomatically;
+ (id)getPropConfigView_returnKeyType;
+ (id)getPropConfigView_keyboardType;
+ (id)getPropConfigView_selectTextOnFocus;
+ (id)getPropConfigView_clearTextOnFocus;
+ (id)getPropConfigView_clearButtonMode;
+ (id)getPropConfigView_maxLength;
+ (id)getPropConfigView_text;
+ (id)getPropConfigView_placeholderTextColor;
+ (id)getPropConfigView_placeholder;
+ (id)getPropConfigView_editable;
+ (id)getPropConfigView_autoCorrect;
+ (id)getPropConfigView_caretHidden;
+ (void)load;
+ (id)moduleName;
- (CDUnknownBlockType)uiBlockToAmendWithShadowView:(id)arg1;
- (void)set_mostRecentEventCount:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontFamily:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontStyle:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontWeight:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_fontSize:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_textAlign:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_autoCapitalize:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_color:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_password:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_secureTextEntry:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_enablesReturnKeyAutomatically:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_returnKeyType:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_keyboardType:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_selectTextOnFocus:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_clearTextOnFocus:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_clearButtonMode:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_maxLength:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_text:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_placeholderTextColor:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_placeholder:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_editable:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_autoCorrect:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_caretHidden:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

