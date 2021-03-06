//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseViewController.h"

#import "UIGestureRecognizerDelegate.h"

@class CBLSearchFilter, CBLSpotlightImageView, NSString, UIScrollView, UIView;

@interface CBLSearchFilterOptionsViewController : CBLBaseViewController <UIGestureRecognizerDelegate>
{
    CBLSearchFilter *_filter;
    id <CBLSearchFilterOptionsViewControllerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_container;
    UIView *_topArrow;
    CBLSpotlightImageView *_spotlightImageView;
    UIView *_presentationView;
    UIView *_subview;
}

@property(nonatomic) __weak UIView *subview; // @synthesize subview=_subview;
@property(nonatomic) __weak UIView *presentationView; // @synthesize presentationView=_presentationView;
@property(retain, nonatomic) CBLSpotlightImageView *spotlightImageView; // @synthesize spotlightImageView=_spotlightImageView;
@property(retain, nonatomic) UIView *topArrow; // @synthesize topArrow=_topArrow;
@property(readonly, nonatomic) UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <CBLSearchFilterOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CBLSearchFilter *filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
- (void)backgroundTapped:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cblViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateMaskWithFromRect:(struct CGRect)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1 animated:(BOOL)arg2;
- (void)presentInView:(id)arg1 fromSubview:(id)arg2 animated:(BOOL)arg3;
- (void)presentInView:(id)arg1 fromSubview:(id)arg2;
- (float)containerWidth;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

