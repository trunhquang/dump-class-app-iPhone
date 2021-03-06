//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBLBaseLayoutAttributes.h"

@class CBLBoardCellDisplayOptions, CBLPinCellDisplayOptions;

@interface CBLProfileViewControllerLayoutAttributes : CBLBaseLayoutAttributes
{
    BOOL _useSlidingModal;
    BOOL _shouldPresentImagePicker;
    float _scrollingMargin;
    float _secretBoardHeaderHeight;
    float _fixedSpaceButtonItemWidth;
    CBLPinCellDisplayOptions *_pinLayoutAttributes;
    CBLBoardCellDisplayOptions *_boardLayoutAttributes;
}

@property(retain, nonatomic) CBLBoardCellDisplayOptions *boardLayoutAttributes; // @synthesize boardLayoutAttributes=_boardLayoutAttributes;
@property(retain, nonatomic) CBLPinCellDisplayOptions *pinLayoutAttributes; // @synthesize pinLayoutAttributes=_pinLayoutAttributes;
@property(nonatomic) float fixedSpaceButtonItemWidth; // @synthesize fixedSpaceButtonItemWidth=_fixedSpaceButtonItemWidth;
@property(nonatomic) float secretBoardHeaderHeight; // @synthesize secretBoardHeaderHeight=_secretBoardHeaderHeight;
@property(nonatomic) float scrollingMargin; // @synthesize scrollingMargin=_scrollingMargin;
@property(readonly, nonatomic) BOOL shouldPresentImagePicker; // @synthesize shouldPresentImagePicker=_shouldPresentImagePicker;
@property(readonly, nonatomic) BOOL useSlidingModal; // @synthesize useSlidingModal=_useSlidingModal;
- (void).cxx_destruct;
- (id)initWithTraitCollection:(id)arg1;

@end

