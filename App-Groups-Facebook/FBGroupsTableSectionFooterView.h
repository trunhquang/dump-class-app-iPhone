//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBRichTextView, NSString;

@interface FBGroupsTableSectionFooterView : UIView
{
    id <FBGroupsInfoViewConfig> _config;
    UIView *_borderView;
    FBRichTextView *_footerView;
    NSString *_title;
}

+ (struct CGSize)_footerViewSizeForTitle:(id)arg1 constrainedToSize:(struct CGSize)arg2;
+ (float)heightForTitle:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTitle:(id)arg1 viewConfig:(id)arg2;

@end

