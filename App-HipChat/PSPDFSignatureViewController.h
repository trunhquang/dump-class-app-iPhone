//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PSPDFBaseViewController.h"

#import "PSPDFStyleable.h"

@class NSArray, NSDictionary, NSString, PSPDFDrawView, PSPDFPopOutMenu, PSPDFSignatureBackgroundView, UIButton, UIPopoverController;

@interface PSPDFSignatureViewController : PSPDFBaseViewController <PSPDFStyleable>
{
    BOOL _keepLandscapeAspectRatio;
    BOOL _keepLandscapeAspectRatioSet;
    BOOL _prefersStatusBarHidden;
    BOOL _naturalDrawingEnabled;
    NSArray *_menuColors;
    NSDictionary *_userInfo;
    UIButton *_clearButton;
    PSPDFPopOutMenu *_colorMenu;
    PSPDFSignatureBackgroundView *_backgroundView;
    PSPDFDrawView *_drawView;
    id <PSPDFSignatureViewControllerDelegate> _delegateProxy;
}

@property(retain, nonatomic) id <PSPDFSignatureViewControllerDelegate> delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain, nonatomic) PSPDFDrawView *drawView; // @synthesize drawView=_drawView;
@property(readonly, nonatomic) PSPDFSignatureBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) PSPDFPopOutMenu *colorMenu; // @synthesize colorMenu=_colorMenu;
@property(readonly, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSArray *menuColors; // @synthesize menuColors=_menuColors;
@property(nonatomic) BOOL naturalDrawingEnabled; // @synthesize naturalDrawingEnabled=_naturalDrawingEnabled;
@property(nonatomic) BOOL prefersStatusBarHidden; // @synthesize prefersStatusBarHidden=_prefersStatusBarHidden;
- (void).cxx_destruct;
- (void)color:(id)arg1;
- (void)clear:(id)arg1;
- (void)done:(id)arg1;
- (void)cancel:(id)arg1;
- (BOOL)isInFormSheet;
- (id)colorButtonForColor:(id)arg1;
- (void)setColorMenu:(id)arg1;
- (void)setClearButton:(id)arg1;
- (void)setBackgroundView:(id)arg1;
@property(nonatomic) BOOL keepLandscapeAspectRatio;
@property(readonly, nonatomic) NSArray *lines;
- (int)preferredInterfaceOrientationForPresentation;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;
@property(nonatomic) __weak id <PSPDFSignatureViewControllerDelegate> delegate;

// Remaining properties
@property(nonatomic) int barStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) BOOL isBarTranslucent;
@property(nonatomic) BOOL isInPopover;
@property(nonatomic) __weak UIPopoverController *parentPopoverController;
@property(readonly) Class superclass;

@end

