//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, NSMutableArray, UIScrollView, UIView;

@interface PSPDFColorSelectionViewController : UIViewController
{
    NSArray *_colors;
    id <PSPDFColorSelectionViewControllerDelegate> _delegate;
    UIView *_containerView;
    NSMutableArray *_colorViews;
    void *_context;
    struct CGSize _minimumSize;
}

+ (id)colorSelectionViewControllerFromColors:(id)arg1 addDarkenedVariants:(BOOL)arg2;
+ (id)rainbowSelectionViewController;
+ (id)vintageColorsSelectionViewController;
+ (id)modernColorsSelectionViewController;
+ (id)monoChromeSelectionViewController;
+ (id)selectionViewControllerWithPalette:(id)arg1 addDarkenedVariants:(BOOL)arg2;
+ (id)colorsFromPaletteURL:(id)arg1 addDarkenedVariants:(BOOL)arg2;
+ (id)defaultColorPickerWithTitle:(id)arg1 wantTransparency:(BOOL)arg2 delegate:(id)arg3 context:(void *)arg4;
+ (id)colorPickerForType:(unsigned int)arg1;
+ (id)defaultColorPickerStyles;
+ (void)setDefaultColorPickerStyles:(id)arg1;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(retain, nonatomic) NSMutableArray *colorViews; // @synthesize colorViews=_colorViews;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGSize minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) __weak id <PSPDFColorSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
- (void).cxx_destruct;
- (id)navigationController;
- (void)didTapOnColorView:(id)arg1;
- (void)layoutViewsForPortrait:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)updateSelection;
- (void)discardColorViews;
- (void)loadColorViews;
- (void)loadGroupedNodeViews;
- (void)loadSingleNodeViews;
- (void)loadView;
@property(readonly, nonatomic) UIScrollView *scrollView;
- (id)initWithColors:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

