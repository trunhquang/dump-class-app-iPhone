//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class PSPDFSelectableBarButtonItemView;

@interface PSPDFSelectableBarButtonItem : UIBarButtonItem
{
    PSPDFSelectableBarButtonItemView *_customView;
}

- (void).cxx_destruct;
- (id)targetToolbar;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
@property(nonatomic, getter=isSelected) BOOL selected;
- (void)setImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)customViewPressed:(id)arg1;
- (id)initWithImage:(id)arg1 style:(int)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

