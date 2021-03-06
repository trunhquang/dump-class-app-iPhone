//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ChatMenuTabViewController.h"

#import "UIPopoverControllerDelegate.h"

@class NSIndexPath, NSString, NSURL, UIBarButtonItem, UIPopoverController;

@interface LinksViewController : ChatMenuTabViewController <UIPopoverControllerDelegate>
{
    NSURL *_showingWebBrowserForURL;
    NSIndexPath *_selectedIndexPath;
    UIBarButtonItem *_sharingBarButtonItem;
    UIPopoverController *_activityPopoverController;
}

@property(retain, nonatomic) UIPopoverController *activityPopoverController; // @synthesize activityPopoverController=_activityPopoverController;
@property(retain, nonatomic) UIBarButtonItem *sharingBarButtonItem; // @synthesize sharingBarButtonItem=_sharingBarButtonItem;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSURL *showingWebBrowserForURL; // @synthesize showingWebBrowserForURL=_showingWebBrowserForURL;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout struct CGRect *)arg2 inView:(inout id *)arg3;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (struct CGRect)popoverPresentationRect;
- (void)didTapSharingButton:(id)arg1;
- (void)onLinkAdded:(id)arg1;
- (void)dealloc;
- (id)generateItemFromXML:(id)arg1;
- (id)noEntriesImage;
- (id)emptyText;
- (id)loadingText;
- (id)requestNamespace;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)initializeThisController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithJid:(id)arg1 accountContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

