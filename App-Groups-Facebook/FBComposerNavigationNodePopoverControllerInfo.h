//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBPopoverController, UIView;

@interface FBComposerNavigationNodePopoverControllerInfo : NSObject
{
    BOOL _isPopoverDismissing;
    BOOL _hasAskedPickerControllerToDismiss;
    FBPopoverController *_popoverController;
    UIView *_senderView;
    UIView *_hostingView;
}

@property(nonatomic) BOOL hasAskedPickerControllerToDismiss; // @synthesize hasAskedPickerControllerToDismiss=_hasAskedPickerControllerToDismiss;
@property(nonatomic) BOOL isPopoverDismissing; // @synthesize isPopoverDismissing=_isPopoverDismissing;
@property(retain, nonatomic) UIView *hostingView; // @synthesize hostingView=_hostingView;
@property(retain, nonatomic) UIView *senderView; // @synthesize senderView=_senderView;
@property(retain, nonatomic) FBPopoverController *popoverController; // @synthesize popoverController=_popoverController;
- (void).cxx_destruct;

@end

