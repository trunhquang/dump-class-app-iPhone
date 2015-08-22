//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<InterceptViewDelegate>;

@interface InterceptView : UIView
{
    BOOL hiddenFromTouches_;
    NSObject<InterceptViewDelegate> *_delegate;
}

@property(nonatomic) __weak NSObject<InterceptViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)show;
- (void)hide;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

