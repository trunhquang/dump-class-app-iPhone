//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MNAnimationActionOverriding.h"
#import "MNSeenHeadView.h"

@class FBRichTextView, MNSeenHeadActionOverrider, NSString, UIImageView;

@interface MNAggregatedSeenHeadView : UIView <MNAnimationActionOverriding, MNSeenHeadView>
{
    UIImageView *_backgroundImageView;
    FBRichTextView *_label;
    MNSeenHeadActionOverrider *_seenHeadActionOverrider;
    unsigned int _seenHeadSize;
    unsigned int _numberOfSeenHeads;
}

+ (struct CGSize)sizeForNumberOfSeenHeads:(unsigned int)arg1 andSeenHeadSize:(unsigned int)arg2;
@property(nonatomic) unsigned int numberOfSeenHeads; // @synthesize numberOfSeenHeads=_numberOfSeenHeads;
@property(nonatomic) unsigned int seenHeadSize; // @synthesize seenHeadSize=_seenHeadSize;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)actionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 andTemplateAnimation:(id)arg4;
- (BOOL)shouldOverrideActionForKey:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3;
- (void)_updateLabel;
- (void)_updateBackground;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithUsesManhattanPath:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

