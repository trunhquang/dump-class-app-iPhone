//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImageView, UIView;

@interface CBLPinGridCellSnapshot : NSObject
{
    UIImageView *_richDataView;
    UIImageView *_pinImageView;
    UIImageView *_videoIconImageView;
    UIView *_attributionView;
}

+ (BOOL)showSimplifiedGrid;
+ (id)snapshotFromCollectionView:(id)arg1 atIndexPath:(id)arg2 isPop:(BOOL)arg3;
@property(retain, nonatomic) UIView *attributionView; // @synthesize attributionView=_attributionView;
@property(retain, nonatomic) UIImageView *videoIconImageView; // @synthesize videoIconImageView=_videoIconImageView;
@property(retain, nonatomic) UIImageView *pinImageView; // @synthesize pinImageView=_pinImageView;
@property(retain, nonatomic) UIImageView *richDataView; // @synthesize richDataView=_richDataView;
- (void).cxx_destruct;

@end

