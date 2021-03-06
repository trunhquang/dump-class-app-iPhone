//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface FBInsetWrappingView : UIView
{
    UIView *_wrappedView;
    UIView *_touchForwardingView;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) UIView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
@property(retain, nonatomic) UIView *wrappedView; // @synthesize wrappedView=_wrappedView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;

@end

