//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "BackgroundColorSupport.h"
#import "CellPositionSupport.h"
#import "SelectSupport.h"
#import "ShadowSupport.h"
#import "SwipeableTableViewCellSubview.h"

@class DefaultCellSeparatorView, NSString, UIColor, UIImageView;

@interface DefaultCellFrontView : UIView <BackgroundColorSupport, CellPositionSupport, SelectSupport, ShadowSupport, SwipeableTableViewCellSubview>
{
    UIImageView *backgroundView_;
    UIImageView *backgroundHighlightedView_;
    DefaultCellSeparatorView *separatorView_;
    BOOL swiping_;
    BOOL highlighted_;
    BOOL selected_;
    BOOL shadow_;
    UIImageView *dropShadowTop_;
    UIImageView *dropShadowBottom_;
    UIView *maskView_;
    UIColor *cellBackgroundColor_;
    BOOL shadowEnabled_;
    unsigned int cellPosition_;
    id <SmartMailInteractionSupport> _smartMailDelegate;
    struct CGRect maskFrame_;
}

+ (float)shadowBottomInsetForCellPosition:(unsigned int)arg1;
+ (float)shadowTopInsetForCellPosition:(unsigned int)arg1;
+ (float)heightWithObject:(id)arg1 width:(float)arg2;
+ (id)highlightedBackgroundForPosition:(unsigned int)arg1 backgroundColor:(id)arg2;
+ (id)backgroundForPosition:(unsigned int)arg1 backgroundColor:(id)arg2;
+ (void)initialize;
@property(nonatomic) __weak id <SmartMailInteractionSupport> smartMailDelegate; // @synthesize smartMailDelegate=_smartMailDelegate;
@property(nonatomic) struct CGRect maskFrame; // @synthesize maskFrame=maskFrame_;
@property(nonatomic, getter=isShadowEnabled) BOOL shadowEnabled; // @synthesize shadowEnabled=shadowEnabled_;
@property(nonatomic) unsigned int cellPosition; // @synthesize cellPosition=cellPosition_;
- (void).cxx_destruct;
- (void)updateWithVisibilityRatio:(float)arg1;
- (void)prepareForReuse;
- (void)updateHighlightedBackgroundVisibility;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isShadowVisible) BOOL shadowVisible; // @dynamic shadowVisible;
- (void)setCellBackgroundColor:(id)arg1;
- (struct CGRect)backgroundFrame;
- (void)updateBackgroundView;
@property(nonatomic) BOOL cellBackgroundHidden;
- (void)layoutSubviews;
- (BOOL)isSubviewAnimatable:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

