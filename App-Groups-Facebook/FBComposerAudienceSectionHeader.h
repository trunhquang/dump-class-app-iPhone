//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface FBComposerAudienceSectionHeader : UIView
{
    UIView *_backgroundView;
    struct UIEdgeInsets _labelInsets;
    UILabel *_label;
}

+ (float)sectionHeaderViewHeight;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

