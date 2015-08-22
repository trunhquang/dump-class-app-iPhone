//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface FBCollageView : UIView
{
    NSArray *_items;
    struct CGSize _innerPadding;
}

+ (struct FBCollageItemSize)availableSizeForItems:(id)arg1;
+ (struct CGRect)frameForItem:(id)arg1 availableSize:(struct FBCollageItemSize)arg2 size:(struct CGSize)arg3 innerPadding:(struct CGSize)arg4;
+ (id)framesForItems:(id)arg1 width:(float)arg2 innerPadding:(struct CGSize)arg3;
+ (float)heightForItems:(id)arg1 width:(float)arg2;
@property(nonatomic) struct CGSize innerPadding; // @synthesize innerPadding=_innerPadding;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (struct FBCollageItemSize)_availableItemSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithItems:(id)arg1;

@end

