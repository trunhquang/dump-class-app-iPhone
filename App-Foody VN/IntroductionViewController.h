//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIButton, UIImageView, UILabel, UIPageControl, UIScrollView, UIView;

@interface IntroductionViewController : BaseViewController <UIScrollViewDelegate>
{
    UIView *headerView;
    UIView *footerView;
    BOOL firstTime;
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    NSArray *_arrayImages;
    NSArray *_arrayTitle;
    NSArray *_arrayDescription;
    NSArray *_arrayIcons;
    UILabel *_titleLabel;
    UIImageView *_icon;
    UILabel *_descriptionLabel;
    UIButton *_menuButton;
    UIButton *_cancelButton;
    UIButton *_loginButton;
    UIButton *_registerButton;
}

@property(retain, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UIButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *menuButton; // @synthesize menuButton=_menuButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSArray *arrayIcons; // @synthesize arrayIcons=_arrayIcons;
@property(retain, nonatomic) NSArray *arrayDescription; // @synthesize arrayDescription=_arrayDescription;
@property(retain, nonatomic) NSArray *arrayTitle; // @synthesize arrayTitle=_arrayTitle;
@property(retain, nonatomic) NSArray *arrayImages; // @synthesize arrayImages=_arrayImages;
@property(nonatomic) __weak UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)changePage:(id)arg1;
- (void)setHiddenBottomBar:(unsigned char)arg1;
- (void)setHiddenTopBar:(unsigned char)arg1;
- (BOOL)prefersStatusBarHidden;
- (void)cancelButtonSelect:(id)arg1;
- (void)registerButtonAction:(id)arg1;
- (void)loginButtonAction:(id)arg1;
- (void)menuButtonSelected:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)trackPageView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

