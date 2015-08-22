//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPopoverInfo, UIViewController;

@interface FBComposerNavigationInfo : NSObject
{
    unsigned int _method;
    unsigned int _options;
    UIViewController *_viewController;
    id <FBComposerPickerController> _pickerController;
    FBPopoverInfo *_popoverInfo;
}

+ (id)modalInfoWithPickerController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3 newPushBehindContext:(BOOL)arg4;
+ (id)modalInfoWithPickerController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3;
+ (id)infoWithPickerController:(id)arg1 method:(unsigned int)arg2 options:(unsigned int)arg3;
+ (id)infoWithPickerController:(id)arg1 method:(unsigned int)arg2;
+ (id)popoverInfoWithPickerController:(id)arg1 popoverInfo:(id)arg2 options:(unsigned int)arg3;
+ (id)popoverInfoWithViewController:(id)arg1 popoverInfo:(id)arg2 options:(unsigned int)arg3;
+ (id)modalInfoWithViewController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3 newPushBehindContext:(BOOL)arg4;
+ (id)modalInfoWithViewController:(id)arg1 wrapInNavigation:(BOOL)arg2 addToNewStack:(BOOL)arg3;
+ (id)infoWithViewController:(id)arg1 method:(unsigned int)arg2 options:(unsigned int)arg3;
+ (id)infoWithViewController:(id)arg1 method:(unsigned int)arg2;
@property(readonly, nonatomic) unsigned int options; // @synthesize options=_options;
@property(retain, nonatomic) FBPopoverInfo *popoverInfo; // @synthesize popoverInfo=_popoverInfo;
@property(readonly, nonatomic) unsigned int method; // @synthesize method=_method;
@property(retain, nonatomic) id <FBComposerPickerController> pickerController; // @synthesize pickerController=_pickerController;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;
- (id)initWithMethod:(unsigned int)arg1 options:(unsigned int)arg2;

@end

