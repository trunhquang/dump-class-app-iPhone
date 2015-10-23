//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFHorizontalSelectionController.h"

@class NSBundle, NSIndexPath, UIColor;

@interface AFColorSelectionController : AFHorizontalSelectionController
{
    BOOL _eraser;
    UIColor *_selectedColor;
    NSIndexPath *_selectedIndexPath;
    NSBundle *_resourceBundle;
}

+ (Class)cellClass;
+ (float)itemWidth;
@property(retain, nonatomic) NSBundle *resourceBundle; // @synthesize resourceBundle=_resourceBundle;
@property(nonatomic, getter=hasEraser) BOOL eraser; // @synthesize eraser=_eraser;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)dataSource:(id)arg1 willVendCollectionViewCell:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)orderedDataObjects;
- (id)initWithResourceBundle:(id)arg1 hasEraser:(BOOL)arg2;

@end

