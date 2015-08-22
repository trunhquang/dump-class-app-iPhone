//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MNComposerExtensionKeyboardPresentationStrategy, MNComposerExtensionPopoverPresentationStrategy, MNComposerExtensionTrayPresentationStrategy;

@protocol MNComposerExtensionPresenter <NSObject>
- (BOOL)requiresTextEditingForPopover:(MNComposerExtensionPopoverPresentationStrategy *)arg1;
- (BOOL)isPopoverPresented:(MNComposerExtensionPopoverPresentationStrategy *)arg1;
- (void)dismissPopover:(MNComposerExtensionPopoverPresentationStrategy *)arg1;
- (void)presentPopover:(MNComposerExtensionPopoverPresentationStrategy *)arg1;
- (BOOL)requiresTextEditingForTray:(MNComposerExtensionTrayPresentationStrategy *)arg1;
- (BOOL)isTrayPresented:(MNComposerExtensionTrayPresentationStrategy *)arg1;
- (void)dismissTray:(MNComposerExtensionTrayPresentationStrategy *)arg1;
- (void)presentTray:(MNComposerExtensionTrayPresentationStrategy *)arg1;
- (BOOL)requiresTextEditingForKeyboard:(MNComposerExtensionKeyboardPresentationStrategy *)arg1;
- (BOOL)isKeyboardPresented:(MNComposerExtensionKeyboardPresentationStrategy *)arg1;
- (void)dismissKeyboard:(MNComposerExtensionKeyboardPresentationStrategy *)arg1;
- (void)presentKeyboard:(MNComposerExtensionKeyboardPresentationStrategy *)arg1;
@end
