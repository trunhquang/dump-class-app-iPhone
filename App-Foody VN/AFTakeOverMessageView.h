//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFMessageView.h"

@class UIView;

@interface AFTakeOverMessageView : AFMessageView
{
    UIView *_dimmerView;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *dimmerView; // @synthesize dimmerView=_dimmerView;
- (void).cxx_destruct;
- (void)dismissButtonPressed:(id)arg1;
- (void)actionButtonPressed:(id)arg1;
- (void)dismissAnimated:(BOOL)arg1;
- (void)presentInView:(id)arg1 animated:(BOOL)arg2;
- (void)prepareView;

@end

