//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSObject<OverlayTipViewDelegate>, UIImageView, UILabel;

@interface OverlayTipView : UIView
{
    UIView *backgroundView_;
    CAShapeLayer *maskLayer_;
    UILabel *messageLabel_;
    UILabel *subMessageLabel_;
    UIImageView *swipeIndicatorView_;
    NSObject<OverlayTipViewDelegate> *delegate_;
    unsigned int overlayColor_;
    unsigned int swipeIndicator_;
    struct CGRect cutoutRect_;
    struct CGRect cutoutCircle_;
}

+ (unsigned int)swipeIndicatorForTutorialType:(id)arg1;
+ (unsigned int)overlayColorForTutorialType:(id)arg1;
+ (id)subMessageForTutorialType:(id)arg1;
+ (id)messageForTutorialType:(id)arg1;
+ (id)overlayTipViewForTutorialType:(id)arg1;
@property(nonatomic) unsigned int swipeIndicator; // @synthesize swipeIndicator=swipeIndicator_;
@property(nonatomic) unsigned int overlayColor; // @synthesize overlayColor=overlayColor_;
@property(nonatomic) __weak NSObject<OverlayTipViewDelegate> *delegate; // @synthesize delegate=delegate_;
@property(nonatomic) struct CGRect cutoutCircle; // @synthesize cutoutCircle=cutoutCircle_;
@property(nonatomic) struct CGRect cutoutRect; // @synthesize cutoutRect=cutoutRect_;
- (void).cxx_destruct;
- (BOOL)usesRectCutout;
- (BOOL)usesCircleCutout;
- (void)informDelegateOfDismissalWithIsForced:(id)arg1;
- (id)imageForSwipeIndicator:(unsigned int)arg1;
- (float)contentLeftInset;
- (id)colorForOverlayColor:(unsigned int)arg1;
- (void)didTapOnSubMessageLabel;
- (void)didDisplay;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithMessage:(id)arg1 subMessage:(id)arg2 overlayColor:(unsigned int)arg3 swipeIndicator:(unsigned int)arg4;

@end

