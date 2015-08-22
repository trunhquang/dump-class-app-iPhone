//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLTraitCollectionView.h"

@class NSArray, NSMutableArray, UIColor, UIImageView, UIPanGestureRecognizer, UIView;

@interface CBLSlidingSegmentedControl : CBLTraitCollectionView
{
    BOOL _maySlide;
    id <CBLSlidingSegmentedControlDelegate> _delegate;
    int _selectedButton;
    NSArray *_segmentTitles;
    float _buttonHeight;
    float _labelFontSize;
    unsigned int _styleOptions;
    UIImageView *_backgroundView;
    UIView *_draggedView;
    NSMutableArray *_segmentLabels;
    NSMutableArray *_segmentBadgeViews;
    NSMutableArray *_segmentVerticalBorders;
    UIPanGestureRecognizer *_panRecognizer;
    UIColor *_selectedTextColor;
    UIColor *_unselectedTextColor;
    float _segmentWidth;
    float _draggedViewHorizontalOverhang;
    struct UIEdgeInsets _insets;
}

@property(nonatomic) float draggedViewHorizontalOverhang; // @synthesize draggedViewHorizontalOverhang=_draggedViewHorizontalOverhang;
@property(nonatomic) float segmentWidth; // @synthesize segmentWidth=_segmentWidth;
@property(retain, nonatomic) UIColor *unselectedTextColor; // @synthesize unselectedTextColor=_unselectedTextColor;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIPanGestureRecognizer *panRecognizer; // @synthesize panRecognizer=_panRecognizer;
@property(retain, nonatomic) NSMutableArray *segmentVerticalBorders; // @synthesize segmentVerticalBorders=_segmentVerticalBorders;
@property(retain, nonatomic) NSMutableArray *segmentBadgeViews; // @synthesize segmentBadgeViews=_segmentBadgeViews;
@property(retain, nonatomic) NSMutableArray *segmentLabels; // @synthesize segmentLabels=_segmentLabels;
@property(retain, nonatomic) UIView *draggedView; // @synthesize draggedView=_draggedView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) unsigned int styleOptions; // @synthesize styleOptions=_styleOptions;
@property(nonatomic) BOOL maySlide; // @synthesize maySlide=_maySlide;
@property(nonatomic) struct UIEdgeInsets insets; // @synthesize insets=_insets;
@property(nonatomic) float labelFontSize; // @synthesize labelFontSize=_labelFontSize;
@property(nonatomic) float buttonHeight; // @synthesize buttonHeight=_buttonHeight;
@property(retain, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property(nonatomic) int selectedButton; // @synthesize selectedButton=_selectedButton;
@property(nonatomic) __weak id <CBLSlidingSegmentedControlDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeBadgeAtIndex:(unsigned int)arg1;
- (void)addBadgeWithValue:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addIndicatorAtIndex:(unsigned int)arg1;
- (void)didTap:(id)arg1;
- (void)selectedSegmentedAtIndex:(unsigned int)arg1 notifyDelegate:(BOOL)arg2;
- (void)selectedSegmentedAtIndex:(unsigned int)arg1;
- (void)didPan:(id)arg1;
- (void)configureColors;
- (void)buildSegmentLabels;
- (void)layoutSegmentLabels;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 styleOptions:(unsigned int)arg2;

@end
