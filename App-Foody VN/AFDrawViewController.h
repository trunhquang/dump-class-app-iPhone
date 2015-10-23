//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFBrushViewController.h"

#import "AFCollectionViewSelectionControllerDelegate.h"

@class AFColorSelectionController, AFSizeSelectionController, NSArray, NSString, UICollectionView;

@interface AFDrawViewController : AFBrushViewController <AFCollectionViewSelectionControllerDelegate>
{
    NSArray *_colors;
    AFColorSelectionController *_colorSelectionController;
    UICollectionView *_colorSelectionView;
    AFSizeSelectionController *_sizeSelectionController;
    UICollectionView *_sizeSelectionView;
}

@property(retain, nonatomic) UICollectionView *sizeSelectionView; // @synthesize sizeSelectionView=_sizeSelectionView;
@property(retain, nonatomic) AFSizeSelectionController *sizeSelectionController; // @synthesize sizeSelectionController=_sizeSelectionController;
@property(retain, nonatomic) UICollectionView *colorSelectionView; // @synthesize colorSelectionView=_colorSelectionView;
@property(retain, nonatomic) AFColorSelectionController *colorSelectionController; // @synthesize colorSelectionController=_colorSelectionController;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (void)selectionController:(id)arg1 didSelectBrushSize:(id)arg2;
- (void)selectionController:(id)arg1 didSelectColorObject:(id)arg2;
- (void)selectionController:(id)arg1 didSelectItemWithDataObject:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willPresentToolViewControllerAnimated:(BOOL)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithRenderInstance:(id)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

