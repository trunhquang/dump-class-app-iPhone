//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBButton, FBErrorView;

@interface FBPlacePickerErrorView : UIView
{
    FBErrorView *_errorView;
}

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(readonly, retain, nonatomic) FBButton *button;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 title:(id)arg3 subtitle:(id)arg4 buttonIcon:(int)arg5 buttonText:(id)arg6;

@end

