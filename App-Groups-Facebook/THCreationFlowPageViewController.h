//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class THGroupMutationInfo, UIButton, UIScrollView, UIView;

@interface THCreationFlowPageViewController : UIViewController
{
    UIView *_cancelModalButtonView;
    UIView *_separatorView;
    UIButton *_cancelModalButton;
    id <THCreationFlowPageViewControllerDelegate> _flowCoordinator;
    THGroupMutationInfo *_groupMutationInfo;
    unsigned int _pageIndex;
    UIScrollView *_scrollView;
}

@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned int pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) __weak THGroupMutationInfo *groupMutationInfo; // @synthesize groupMutationInfo=_groupMutationInfo;
@property(nonatomic) __weak id <THCreationFlowPageViewControllerDelegate> flowCoordinator; // @synthesize flowCoordinator=_flowCoordinator;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)cancelModalButtonTapped:(id)arg1;
- (void)hideCancelModalButton;
- (void)showCancelModalButton;
- (id)alertForContentValidation;
- (BOOL)isContentValid;
- (void)nextButtonTapped;
- (void)backButtonTapped;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

