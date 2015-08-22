//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIScrollViewDelegate.h"

@class IFTTTAnimator, NSString, UIScrollView;

@interface IFTTTAnimatedScrollViewController : UIViewController <UIScrollViewDelegate>
{
    BOOL _isAtEnd;
    id <IFTTTAnimatedScrollViewControllerDelegate> _delegate;
    IFTTTAnimator *_animator;
    UIScrollView *_scrollView;
}

@property(nonatomic) BOOL isAtEnd; // @synthesize isAtEnd=_isAtEnd;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) IFTTTAnimator *animator; // @synthesize animator=_animator;
@property(nonatomic) __weak id <IFTTTAnimatedScrollViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
