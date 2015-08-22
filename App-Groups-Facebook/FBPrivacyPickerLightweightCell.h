//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "FBPrivacyTokenableOptionTableViewCell.h"

@class FBItemView, FBPrivacyPickerCellContentSummary;

@interface FBPrivacyPickerLightweightCell : UITableViewCell <FBPrivacyTokenableOptionTableViewCell>
{
    FBPrivacyPickerCellContentSummary *_cellContentSummary;
    FBItemView *_itemView;
    BOOL _checked;
    BOOL _enabled;
}

@property(nonatomic) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)_itemViewConfigWithContentSummary:(id)arg1 selected:(BOOL)arg2;
- (id)initWithReuseIdentifier:(id)arg1 contentSummary:(id)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

