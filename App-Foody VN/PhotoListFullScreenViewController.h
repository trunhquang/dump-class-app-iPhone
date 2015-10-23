//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

#import "UIImageContainerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSString, UIButton, UIScrollView;

@interface PhotoListFullScreenViewController : BaseViewController <UIScrollViewDelegate, UIImageContainerDelegate>
{
    BOOL shouldShowPhotoDesc;
    unsigned int photoScrollDirection;
    int previousPhotoIndex;
    int currentPhotoIndex;
    float photoScrollLastOffset;
    BOOL allowLandscape;
    BOOL isEditMode;
    id <PhotoEditProtocol> delegate;
    NSArray *photoList;
    id selectedPhoto;
    UIScrollView *photoScrollView;
    UIButton *doneButton;
    UIButton *editButton;
    id <ListLoaderProtocol> dataListLoader;
}

@property(nonatomic) BOOL isEditMode; // @synthesize isEditMode;
@property(retain, nonatomic) id <ListLoaderProtocol> dataListLoader; // @synthesize dataListLoader;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton;
@property(nonatomic) __weak UIScrollView *photoScrollView; // @synthesize photoScrollView;
@property(retain, nonatomic) id selectedPhoto; // @synthesize selectedPhoto;
@property(retain, nonatomic) NSArray *photoList; // @synthesize photoList;
@property(nonatomic) __weak id <PhotoEditProtocol> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didFinishEditingPhoto;
- (void)didTouchEditButton:(id)arg1;
- (void)didTouchDoneButton:(id)arg1;
- (void)didDoubleTapContainerView:(id)arg1;
- (void)didTapContainerView:(id)arg1;
- (BOOL)didSlideToPhotoIndex:(int)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)loadMoreDataForScreen;
- (void)loadMorePhoto;
- (id)addPhotoImageViewAtIndex:(unsigned int)arg1;
- (void)calculatePhotoIndex;
- (void)setEditButtonHidden:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (BOOL)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)trackPageView;
- (void)dealloc;
- (void)notifyDisableScrolling:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

