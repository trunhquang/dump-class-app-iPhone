//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FVMWPhotoBrowser.h"

#import "FVInteractionControllerDelegate.h"

@class FVEventPublisher, FVInteractionController, FVStatusBarHelper, FVStylesheet, NSString, UIViewController;

@interface FVImageViewer : FVMWPhotoBrowser <FVInteractionControllerDelegate>
{
    UIViewController *_parent;
    FVStylesheet *_stylesheet;
    FVInteractionController *_interactionController;
    unsigned int _interactionType;
    FVStatusBarHelper *_statusBarHelper;
    FVEventPublisher *_eventPublisher;
}

@property(nonatomic) __weak FVEventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property(retain, nonatomic) FVStatusBarHelper *statusBarHelper; // @synthesize statusBarHelper=_statusBarHelper;
@property(nonatomic) unsigned int interactionType; // @synthesize interactionType=_interactionType;
@property(retain, nonatomic) FVInteractionController *interactionController; // @synthesize interactionController=_interactionController;
@property(retain, nonatomic) FVStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UIViewController *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)interactionControllerDidDismiss:(id)arg1;
- (int)preferredStatusBarStyle;
- (void)documentInteraction:(id)arg1;
- (id)currentImage;
- (void)hideControls;
- (void)setControlsHidden:(BOOL)arg1 animated:(BOOL)arg2 permanent:(BOOL)arg3;
- (void)unlockShareButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithDelegate:(id)arg1 stylesheet:(id)arg2 eventPublisher:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

