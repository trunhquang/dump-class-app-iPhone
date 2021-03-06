//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionViewController.h"

@class CBLLoadingHomeFeedView, CBLNuxExperienceData, NSTimer, UIImageView;

@interface CBLNuxLoadingHomeFeedViewController : CBLTraitCollectionViewController
{
    id <CBLNuxLoadingHomeFeedViewControllerDelegate> _delegate;
    UIImageView *_bakgroundImageView;
    CBLNuxExperienceData *_nuxExperienceData;
    CBLLoadingHomeFeedView *_loadingHomeFeedView;
    NSTimer *_pollingTimer;
}

@property(retain, nonatomic) NSTimer *pollingTimer; // @synthesize pollingTimer=_pollingTimer;
@property(retain, nonatomic) CBLLoadingHomeFeedView *loadingHomeFeedView; // @synthesize loadingHomeFeedView=_loadingHomeFeedView;
@property(retain, nonatomic) CBLNuxExperienceData *nuxExperienceData; // @synthesize nuxExperienceData=_nuxExperienceData;
@property(retain, nonatomic) UIImageView *bakgroundImageView; // @synthesize bakgroundImageView=_bakgroundImageView;
@property(nonatomic) __weak id <CBLNuxLoadingHomeFeedViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cblTraitCollectionDidChange:(id)arg1;
- (id)localLayoutAttributes;
- (void)onHomeFeedReady;
- (void)reloadHomeFeed:(id)arg1;
- (void)pollForHomeFeed:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)prefersStatusBarHidden;
- (id)initWithNuxExperienceData:(id)arg1;

@end

