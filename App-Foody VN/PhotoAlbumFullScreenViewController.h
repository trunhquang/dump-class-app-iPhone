//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseViewController.h"

@class PhotoAlbum, PhotoAlbumViewController, UIButton, UIScrollView;

@interface PhotoAlbumFullScreenViewController : BaseViewController
{
    PhotoAlbum *selectedAlbum;
    UIScrollView *photoSlideView;
    UIButton *doneButton;
    PhotoAlbumViewController *_albumVC;
}

@property(nonatomic) PhotoAlbumViewController *albumVC; // @synthesize albumVC=_albumVC;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton;
@property(retain, nonatomic) UIScrollView *photoSlideView; // @synthesize photoSlideView;
@property(nonatomic) PhotoAlbum *selectedAlbum; // @synthesize selectedAlbum;
- (void).cxx_destruct;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;
- (void)didTouchDoneButton:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)setPhotoScrollView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)trackPageView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

